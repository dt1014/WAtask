#include <stdlib.h>
#include <string.h>
#include <iostream>

#include "args.h"

namespace exercise{
  
  Args::Args(){
	exnumber = -1;
	array = "";
  }
  
  void Args::parseArgs(int argc, char** argv){

	if(argc != 3){
	  //std::cout << "Expect two arugments" << std::endl;
	  printHelp();
	  exit(EXIT_FAILURE);
	}
	
	std::string str_exnumber = argv[1];
	array = argv[2];
	
	try{
	  exnumber = stoi(str_exnumber);
	  if(exnumber < 1 || exnumber > 3){
		throw std::invalid_argument("Invalid number");
	  }
	}
	catch(std::invalid_argument e){
	  //std::cout << "Expect first arugment: 0-4" << std::endl;  
	  exit(EXIT_FAILURE); 
	}

	std::string expect;
	std::function<bool(char)> invalid;
	
	if(exnumber == 1){
	  expect = "number";
	  invalid = [=](char c) -> bool {return (c < '0' || c > '9');};
	}
	else if(exnumber == 2){
	  expect = "binary";
	  invalid = [=](char c) -> bool {return (c < '0' || c > '1');};
	}
	else if(exnumber == 3){
	  expect = "a-z or A-Z";
	  invalid = [=](char c) -> bool {return (c < 'A' || (c > 'Z' && c < 'a') || c > 'z');};
	}
	
	try{
	  // if(array == ""){
	  // 	throw std::invalid_argument("Invalid char");
	  // }
	  
	  for(std::string::iterator it=array.begin(); it!=array.end(); ++it){
		if(invalid(*it)){
		  throw std::invalid_argument("Invalid char");
		}
	  }
	}
	catch(std::invalid_argument e){
	  //std::cout << "Expect array arugment all char: " << expect << std::endl;  
	  exit(EXIT_FAILURE); 
	}
  }
  
  void Args::printHelp(){
	std::cout
	  << "Usage\n"
	  << "  first arg;             exercise number\n"
	  << "  array arg:             input array\n"
	  << std::endl;
  }
}

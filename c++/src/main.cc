#include <iostream>
#include <string>
#include <vector>

#include "args.h"
#include "solver.h"
#include "ex1.h"
#include "ex2.h"
#include "ex3.h"

using namespace exercise;

void printAnswer(int max_length, std::vector<std::string> answers){
  //std::cout << "answers: " << std::endl;
  //std::cout << "  max_length: " << max_length << std::endl;
  for(auto it = answers.begin(); it != answers.end(); ++it) {
	// std::cout << "  array: " << *it << std::endl;
	std::cout << *it << std::endl;	
  }
}
  
int main(int argc, char** argv){
  std::shared_ptr<Args> args = std::make_shared<Args>();
  args->parseArgs(argc, argv);
  
  // std::cout << "----------" << std::endl;
  // std::cout << "input: " << args->array << std::endl;

  if(args->exnumber == 1){
	std::shared_ptr<Solver1> solver = std::make_shared<Solver1>(args);
	solver->solve();
	printAnswer(solver->max_length, solver->answers);
  }
  else if(args->exnumber == 2){
	if((int)args->array.size() < bitSize){
	  std::shared_ptr<Solver2> solver = std::make_shared<Solver2>(args);
	  solver->solve();
	  printAnswer(solver->max_length, solver->answers);
	}
	else{
	  std::shared_ptr<Solver3> solver = std::make_shared<Solver3>(args);
	  solver->solve();
	  printAnswer(solver->max_length, solver->answers);
	}  
  }
  else if(args->exnumber == 3){
  	std::shared_ptr<Solver3> solver = std::make_shared<Solver3>(args); 
  	solver->solve();
  	printAnswer(solver->max_length, solver->answers);
  }
}
  


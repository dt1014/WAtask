#include <iostream>
#include <stdlib.h>

#include "ex1.h"

namespace exercise{
  Solver1::Solver1(std::shared_ptr<Args> args_):Solver(args_){
  }

  void Solver1::process(){
	
	if((int)(*end-*target) > 0){
	  target++;
	  end++;
	  process();
	}
	else{
	  if(end > start+max_length){
		update();
	  }
	  else if(end == start+max_length){
		push();
	  }
	  else{
		;
	  }
	  start = end;
	  return;
	}
  }
  
  void Solver1::solve(){
	while(start < args->array.end()){
	  while((int)(*start-'0') > 10-max_length){
		start++;
	  }
	  target = start;
	  end = start + 1;
	  process();
	}
  }
}
  

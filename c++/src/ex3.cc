#include <iostream>
#include <stdlib.h>

#include "ex3.h"

namespace exercise{
  Solver3::Solver3(std::shared_ptr<Args> args_):Solver(args_){
  }

  void Solver3::forwardprocess(){
	if(end != args->array.end() && *start == *end){
	  end++;
	  forwardprocess();
	}
  }
  
  void Solver3::backprocess(){

	if(target == start){
	  flag = true;
	}
	else if(*target == *end){
	  target--;
	  backprocess();
	}
	else{
	  flag = false;
	}
  }
  
  void Solver3::solve(){
	while(end <= args->array.end()){

	  // possibility to update
	  if(*start == *end){ 
		target = end - 1;
		backprocess();
		if(flag){
		  end++;
		  forwardprocess();
		  update();
		}
		else{
		  end = target + 1;
		}
	  }

	  else {
		end--;
		// possibility to push // max_length==1
		if(start == end){
		  end++;
		  push();
		}
		// possibility to push // max_length>1
		else if(*start == *end){
		  target = end - 1;
		  backprocess();
		  end++;
		  if(flag){
			push();
		  }
		}
		else{
		  target = end++;
		  backprocess();
		  end = target + 1;
		}
	  }
	  start = end;
	  end = start + max_length;	  
	}
  }
}


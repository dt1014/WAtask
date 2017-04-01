#include <iostream>
#include <stdlib.h>

#include "ex2.h"

namespace exercise{
  
  Solver2::Solver2(std::shared_ptr<Args> args_):Solver(args_){
  }
  
  void Solver2::solve(){
  	std::bitset<bitSize> bitarray(args->array);	
	std::bitset<bitSize> bitdiff;	

	bitdiff = ~(bitarray ^ (bitarray >> 1));
	
	bool flag = false;
	int i = 1;
	int count = 0;
	int max_count = 0;

	while(i < (int)args->array.size()){
  	  if(bitdiff[(int)args->array.size()-i-1]){
  		flag = true;
  		count++;
  	  }
  	  else if(flag){
  		if(count > max_count){
  		  end = target + i;
  		  start = end - count - 1;
  		  update();
  		  max_count = count;
  		}
  		else if(count == max_count){
  		  end = target + i;
  		  start = end - count - 1;
  		  push();
  		}
  		else{
  		  ;
  		}
  		flag = false;
  		count = 0;
  	  }
	  i++;
  	}
	if(flag){
	  if(count > max_count){
		end = target + i;
		start = end - count - 1;
		update();
		max_count = count;
	  }
	  else if(count == max_count){
		end = target + i;
		start = end - count - 1;
		push();
	  }
	}
	if(max_length == 1){
	  while(end <= args->array.end()){
		push();
		start++;
		end++;
	  }
	}
  }
}
  

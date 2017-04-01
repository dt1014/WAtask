#include <iostream>

#include "solver.h"

namespace exercise{

  Solver::Solver(std::shared_ptr<Args> args_){
	args = args_;
	max_length = 1;
	start = args->array.begin();
	end = start + max_length;
	target = start;
  }

  void Solver::update(){
	max_length = end - start;
	answers.erase(answers.begin(), answers.end());
	push();
  }
  
  void Solver::push(){
	tempstr.erase(tempstr.begin(), tempstr.end());
	for(auto it = start; it != end; ++it){
	  tempstr.push_back(*it);
	}
	answers.push_back(tempstr);
  }
}

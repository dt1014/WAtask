#ifndef SOLVER_H
#define SOLVER_H

#include <string>
#include <vector>    

#include "args.h"

namespace exercise{
  class Solver{
  public:
	// valiable
	std::shared_ptr<Args> args;
	int max_length;
	std::vector<std::string> answers;
	std::string::iterator start, end, target;
	std::string tempstr;
	
	// function
	Solver(std::shared_ptr<Args>);
	void update();
	void push();
  };
}

#endif

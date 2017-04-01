#ifndef EX1_H
#define EX1_H

#include "solver.h"

namespace exercise{
  class Solver1:public Solver{
  public:
	Solver1(std::shared_ptr<Args>);
	void process();
	void solve();
  };  
}
#endif

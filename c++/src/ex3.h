#ifndef EX3_H
#define EX3_H

#include "solver.h"

namespace exercise{
  class Solver3:public Solver{
  public:
	bool flag;
	
	Solver3(std::shared_ptr<Args>);
	void forwardprocess();
	void backprocess();
	void solve();
  };  
}
#endif

#ifndef EX2_H
#define EX2_H

#include "solver.h"

namespace exercise{
  
  const unsigned int bitSize = 1048576;
  
  class Solver2:public Solver{
  public:
	Solver2(std::shared_ptr<Args>);
	void solve();
  };  
}
#endif

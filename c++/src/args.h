#ifndef ARGS_H
#define ARGS_H

#include <istream>
#include <ostream>
#include <string>

namespace exercise{
  class Args{
  public:
	int exnumber;
	std::string array;

	Args();
	void parseArgs(int, char**);
	void printHelp();
  };  
}

#endif

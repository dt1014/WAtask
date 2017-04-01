CXX = c++
CXXFLAGS = -std=c++11
OBJS = args.o solver.o ex1.o ex2.o ex3.o
all: args.o solver.o ex1.o ex2.o ex3.o exercise clean

args.o:	src/args.cc src/args.h
	$(CXX) $(CXXFLAGS) -c src/args.cc

solver.o: src/solver.cc src/solver.h
	$(CXX) $(CXXFLAGS) -c src/solver.cc

ex1.o: src/ex1.cc src/ex1.h
	$(CXX) $(CXXFLAGS) -c src/ex1.cc

ex2.o: src/ex2.cc src/ex2.h
	$(CXX) $(CXXFLAGS) -c src/ex2.cc

ex3.o: src/ex3.cc src/ex3.h
	$(CXX) $(CXXFLAGS) -c src/ex3.cc

exercise: $(OBJS) src/main.cc
	$(CXX) $(CXXFLAGS) $(OBJS) src/main.cc -o exercise

clean:
	rm -rf *.o 

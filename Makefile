CXX = g++
FLAGS = -std=c++11

DEPS = perceptron.h
OBJ = perceptron.o main.o

%.0: %.c $(DEPS)
	$(CXX) -c -o $@ $< $(FLAGS)
	
perceptron: $(OBJ)
	    $(CXX) -o $@ $^ $(FLAGS)
	    
	    
run: 

clean:
	@rm *.o
	@rm perceptron
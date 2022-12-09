CPP=g++
CPPFLAGS=-std=c++14
CPPFLAGS+=-pedantic -Wall -Wextra -MMD
#edition des liens
shi-questionnaire : shi.o main.o
	$(CPP) $^ -o $@
#compilation
-include *.d
%.o : %.cpp
	$(CPP) $< -c $(CPPFLAGS)

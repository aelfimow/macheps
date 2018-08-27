CXXFLAGS += -O2
CXXFLAGS += -Wall
CXXFLAGS += -Wextra
CXXFLAGS += -pedantic
CXXFLAGS += -Weffc++
CXXFLAGS += -std=c++17

ASFLAGS64  = --64
ASFLAGS64 += -march=corei7

CPPASM_OBJ = ../../src/obj/*.o

.PHONY: compile
.PHONY: link

all: compile link
	@echo "No errors"

compile:
	${CXX} -c main.cpp -o main.o ${CXXFLAGS}
	${AS} result/macheps.S ${ASFLAGS64} -o macheps.o

link:
	${CXX} main.o macheps.o -o macheps.exe ${CXXFLAGS}

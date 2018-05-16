CC = gcc
CFLAGS  = -std=c11 -g -Wall
SRC = sesion2.c
OBJS := $(SRC:.c=.o)
EXE = recursividad.out

all: $(EXE)

run: $(EXE)
	./$<

run_v: $(EXE)
	valgrind ./$<

$(EXE): $(OBJS)
	$(CC) $(CFLAGS) $^ -lm -o $@
	@rm -f $(OBJS)

$(OBJS): $(SRC)
	$(CXX) -c $(CXXFLAGS) $< -lm -o $@

.PHONY: clean

clean:
	rm -f $(EXE)

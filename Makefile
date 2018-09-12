CFLAGS= -std=c11 -O3 -I.
CC = gcc
SRC = main_test.c
OBJ = $(SRC:.c=.o)
EXE = main_test.out
all: $(EXE)

run: $(EXE)
	@./$< -c

$(EXE) : $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@
	@rm -f $^

$(OBJ) : $(SRC)

clean:
	rm $(EXE) $(OBJ)
CC = gcc
CFLAGS  = -std=c11 -g -Wall
SRC = cifras.c potencia.c parejasvector.c intercambiar.c vectorsimetrico.c \
	ordenacionseleccion.c
OBJS := $(SRC:.c=.o)
EXES = cifras potencia parejasvector intercambiar vectorsimetrico\
	ordenacionseleccion binariodecimal

all: $(EXES)

run: $(EXES)
	@echo "Cifras"
	@./cifras
	@echo "\nPotencia"
	@./potencia
	@echo "\nParejasvector"
	@./parejasvector
	@echo "\nIntercambiar"
	@./intercambiar
	@echo "\nVectorsimetrico"
	@./vectorsimetrico
	@echo "\nOrdenacionseleccion"
	@./ordenacionseleccion
	@echo "\nBinariodecimal"
	@./binariodecimal

cifras: cifras.o
	$(CC) $(CFLAGS) $^ -o $@
	@rm -f cifras.o

potencia: potencia.o
	$(CC) $(CFLAGS) $^ -o $@
	@rm -f potencia.o

parejasvector: parejasvector.o
	$(CC) $(CFLAGS) $^ -o $@
	@rm -f parejasvector.o

intercambiar: intercambiar.o
	$(CC) $(CFLAGS) $^ -o $@
	@rm -f intercambiar.o

vectorsimetrico: vectorsimetrico.o
	$(CC) $(CFLAGS) $^ -o $@
	@rm -f vectorsimetrico.o

ordenacionseleccion: ordenacionseleccion.o
	$(CC) $(CFLAGS) $^ -o $@
	@rm -f ordenacionseleccion.o

binariodecimal: binariodecimal.o
	$(CC) $(CFLAGS) $^ -lm -o $@
	@rm -f binariodecimal.o

binariodecimal.o : binariodecimal.c
	$(CXX) -c $(CXXFLAGS) $< -lm -o $@

$(OBJS): $(SRC)

clean:
	rm $(EXES)

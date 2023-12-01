CC = g++
LIBS = -lm
SRC = src
OBJ = obj
INC = include
BIN = bin
OBJS = $(OBJ)/matrix.o  $(OBJ)/main.o $(OBJ)/segTree.o $(OBJ)/util.o
HDRS = $(INC)/matrix.hpp $(INC)/segTree.hpp $(INC)/util.hpp
CFLAGS = -Wall -c -g -I$(INC)

EXE = $(BIN)/main

 
.PHONY: all debug clean 

all: $(BIN)/tp3.out

debug: $(BIN)/tp3_teste.out
	

#colocar -pg para debugar

$(BIN)/tp3_teste.out: $(OBJS)
	$(CC) -o $(BIN)/tp3_teste.out $(OBJS) $(LIBS)

$(BIN)/tp3.out: $(OBJS)
	$(CC) -o $(BIN)/tp3.out $(OBJS) $(LIBS)

$(OBJ)/main.o: $(HDRS) $(SRC)/main.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/main.o $(SRC)/main.cpp

$(OBJ)/matrix.o: $(HDRS) $(SRC)/matrix.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/matrix.o $(SRC)/matrix.cpp

$(OBJ)/segTree.o: $(HDRS) $(SRC)/segTree.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/segTree.o $(SRC)/segTree.cpp

$(OBJ)/util.o: $(HDRS) $(SRC)/util.cpp
	$(CC) $(CFLAGS) -o $(OBJ)/util.o $(SRC)/util.cpp


	
clean:
	rm -f $(BIN)/*.out $(EXE) $(OBJS) gmon.out

CC = clang
SRC = main.c parse.c emit_code.c regex_vm.c
OBJ = $(SRC:%.c=%.o)

.PHONY: all
all: a.out

a.out: $(OBJ)
	$(CC) -Wall -O2 -o $@ $(OBJ)

.c.o:
	$(CC) -Wall -c $<

.PHONY: clean
clean: 
	rm -f *.out *.o *~

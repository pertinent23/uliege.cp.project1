CC=gcc
CFLAGS=--std=c99 --pedantic -Wall -W -Wmissing-prototypes
LD=gcc
LDFLAGS=-Wall -Werror

# Files
EXEC=somme
MODULES=main.o somme.o
OBJECTS=somme.o
LIB=libsomme.so 
#PATH=$(PWD)/

## Rules

all: $(EXEC)

$(EXEC): $(MODULES)
#	$(CC) -o $(EXEC) $< -L$(PWD)/ -lsomme
	$(CC) -o $(EXEC) $^ $(LDFLAGS)
	./$(EXEC)

somme.o: somme.c
	$(LD) -c -fPIC $^ -o $(OBJECTS) $(CFLAGS)
	$(LD) -shared -o $(LIB) $(OBJECTS)

main.o: main-somme.c
	$(CC) -c $^ -o $@ $(CFLAGS)

clean:
	rm -f *.o $(LIB) $(EXEC) *~
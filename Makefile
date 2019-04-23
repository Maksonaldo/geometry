FV = bin/
FRO = Ofile/
WAYS = src/

all: bin build output $(FV)geometry

$(FV)geometry: $(FRO)geometry.o $(FRO)recognition.o $(FRO)output.o
	gcc -Wall -Werror $(FRO)geometry.o $(FRO)recognition.o $(FRO)output.o -lm -o $(FV)geometry

$(FRO)output.o: $(WAYS)output.c
	gcc -Wall -c $(WAYS)output.c -g -o $(FRO)output.o

$(FRO)recognition.o: $(WAYS)recognition.c
	gcc -Wall -c $(WAYS)recognition.c -g -lm -o $(FRO)recognition.o

$(FRO)geometry.o: $(WAYS)geometry.c
	gcc -Wall -c $(WAYS)geometry.c -g -o $(FRO)geometry.o
	
clean:
	rm -f $(FRO)*.o

bin:
	mkdir bin

build:
	mkdir Ofile

output:
	touch bin/geometry_output.txt

.PHONY: clean

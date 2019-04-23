WAYB = bin/
WAYBU = build/
WAYS = src/

all: bin build output $(WAYB)geometry

$(WAYB)geometry: $(WAYBU)geometry.o $(WAYBU)recognition.o $(WAYBU)output.o
	gcc -Wall -Werror $(WAYBU)geometry.o $(WAYBU)recognition.o $(WAYBU)output.o -lm -o $(WAYB)geometry

$(WAYBU)output.o: $(WAYS)output.c
	gcc -Wall -c $(WAYS)output.c -g -o $(WAYBU)output.o

$(WAYBU)recognition.o: $(WAYS)recognition.c
	gcc -Wall -c $(WAYS)recognition.c -g -lm -o $(WAYBU)recognition.o

$(WAYBU)geometry.o: $(WAYS)geometry.c
	gcc -Wall -c $(WAYS)geometry.c -g -o $(WAYBU)geometry.o
	
clean:
	rm -f $(WAYBU)*.o

bin:
	mkdir bin

build:
	mkdir build

output:
	touch bin/geometry_output.txt

.PHONY: clean

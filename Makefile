
all: geometry

geometry: geometry.o recognition.o output.o
	gcc -Wall -o geometry geometry.o recognition.o output.o

output.o: output.c
	gcc -c output.c -g -o output.o

recognition.o: recognition.c
	gcc -c recognition.c -g -o recognition.o

geometry.o: geometry.c
	gcc -c geometry.c -g -o geometry.o
	
clean:
	rm -f *.o 



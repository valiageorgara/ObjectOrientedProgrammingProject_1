compile:
	g++ -o exe main.cpp header.h definitions.cpp

clean:
	rm -rf *.o
	rm -rf exe

all: string.exe run;

string.exe: string.cpp
	g++ -o string.exe string.cpp

run:
	./string.exe
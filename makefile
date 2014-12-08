all : main.out

main.out : main.cpp MyString.o
	g++ -Wall -o main.out main.cpp MyString.o
MyString.o : MyString.cpp MyString.h
	g++ -Wall -c -o MyString.o MyString.cpp

clean :
	rm *.o

mrproper : clean
	rm main.out
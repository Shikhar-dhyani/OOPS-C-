#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main()
{
	fstream myfile;
	myfile.open("text.txt");
	myfile<< "Practical 15 task 2.2 writing in a file using fstream";
	myfile.close();
	return 0;
}



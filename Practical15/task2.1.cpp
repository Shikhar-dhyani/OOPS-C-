#include<iostream>
#include<fstream>
#include<string>
using namespace std ;

int main(){
	fstream  readfile;
	char data;
	readfile.open("text.txt");
	while(1)
	{
		readfile >>data;
		
		if(readfile.eof())
			break;
		else
			cout << data ;
	}
        cout << endl;
	readfile.close();
	return 0;
}
 



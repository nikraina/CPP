#include <iostream>
#include <fstream>	//file handling
using namespace std;

int main(){
	ofstream f_obj;
	f_obj.open("filewriting.txt");	//automatically creates a file if it does not exist

	f_obj<<"This is test of writing into file using c++ code , and i overwrite everything in the file\n";
	f_obj.close();

	return 0;
}
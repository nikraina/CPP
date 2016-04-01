#include <iostream>
#include <string>
using namespace std;

int main(){
	string str = "Hello world this is me Linux";
	cout<<"Currently the string has :: "<<str<<endl;

	cout<<"The position of Linux in string is :: "<<str.find("Linux")<<endl;

	str.replace(23,5,"Unix");
	cout<<"The string after replacing Linux with Unix is :: "<<str<<endl;

	str.insert(23,"awesome ");
	cout<<"The string after inserting new text is :: "<<str<<endl;

	str.erase(10);	//remove everything after the mentioned index
	cout<<"After erase the string has :: "<<str<<endl;

	return 0;
}
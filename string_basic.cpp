#include <iostream>
#include <string>
using namespace std;

int main(){
	//get the whole input as a string!!
	cout<<"Please enter anything you wish"<<endl;
	string str;

	getline(cin,str);	//does not stop at space, but stops at end of line
	cout<<"You entered the string as :: "<<str<<endl;

	return 0;
}
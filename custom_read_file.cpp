#include <iostream>
#include <fstream>
using namespace std;

int main(){
	ifstream f_obj;
	f_obj.open("filewriting.txt");

	string str;

	cout<<"The contents of the file are::"<<endl;
	while(f_obj>>str){			//automatically meets the EOF and stops
		cout<<str<<endl;
	}

	f_obj.close();
	return 0;
}
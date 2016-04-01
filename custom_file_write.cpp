#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	
	string name;
	int id;
	string city;
	ofstream f_obj;
	f_obj.open("filewriting.txt");

	cout<<"Enter the data in the format Name StudentID City in a single row"<<endl;
	cout<<"Enter STOP 1 STOP when you are done"<<endl;
	while(cin>>name>>id>>city){
		if(name == "STOP"){
			cout<<"stop condition met"<<endl;
			break;
		}
		f_obj<<name<<" "<<id<<" "<<city<<endl;
	}

	f_obj.close();


	return 0;
}
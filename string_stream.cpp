#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){

	int i = 10;
	string str = "Hello I am trying to concatenate string and int";
	stringstream stm;	

	stm<<str<<" the concatenated int is :: " <<i; 	//pushing string and int to stream

	cout<<stm.str()<<endl;	//converting the stream to string
}
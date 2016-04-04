#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
	string str = "Hello World this is string to be tokenized !";

	stringstream stm(str);

	while(stm){
		string t_str;
		stm>>t_str;
		cout<<"Tokens :: "<<t_str<<endl;
	}

	return 0;
}
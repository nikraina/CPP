#include <iostream>
using namespace std;
int val = 10;	//global

int main(){
	int val = 20;	//local
	cout<<"The local value is :: "<<val<<endl;
	cout<<"The global value is :: "<<::val<<endl;	//:: is the unary scope to access global variables
	return 0;
}
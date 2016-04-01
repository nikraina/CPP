#include <iostream>
#include <string>
using namespace std;

int main(){
	string str;
	str = "Hello this is Linux";
	cout<<"The substring of the string is :: "<<str.substr(0,5)<<endl;

	string apples = "apples";
	string oranges = "oranges";
	cout<<"apples varibale has :: "<<apples<<endl;
	cout<<"oranges variable has :: "<<oranges<<endl;

	cout<<"-----------"<<endl;

	apples.swap(oranges);
	cout<<"apples varibale has :: "<<apples<<endl;
	cout<<"oranges variable has :: "<<oranges<<endl;

	string saying = "I am what I am";
	cout<<saying.find("am")<<endl;	//find from left to right
	cout<<saying.rfind("am")<<endl;	//find from righ to left
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Person{
private:
	string name;
public:
	Person(string n) :name(n){}
	void getName(){
		cout<<"The name of this person is ::"<<this->name<<endl;	//this is a ponter holding address of the current object
		//this can also be dereferenced and then used as (*this).name!!
	}
};

int main(){
	Person obj("Linux");
	obj.getName();
	return 0;
}

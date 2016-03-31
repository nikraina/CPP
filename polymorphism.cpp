#include <iostream>
using namespace std;

class Parent{
public:
	virtual void getSurname(){	//without "virtual" there is no upcasting
		cout<<"The Linux family and I am parent"<<endl;
	}
};

class Child: public Parent{
public:
	void getSurname(){
		cout<<"The Linux family and I am child"<<endl;
	}
};

int main(){
	Parent* obj = new Child();
	obj->getSurname();
	return 0;
}
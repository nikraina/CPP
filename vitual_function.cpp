#include <iostream>
using namespace std;

class Parent{
public:
	virtual void getSurname(){		//not necessary to override in child
		cout<<"This is parent and surname is *nix"<<endl;
	}

	virtual void getAddr() = 0;	//pure virtual function!! needs to be over written in child
};

class Child:public Parent{
public:
	void getAddr(){
		cout<<"This is child and we are part of UNIX family"<<endl;
	}
};

int main(){
	Parent* obj = new Child();
	obj->getSurname();		//calls parent implementation
	obj->getAddr();			//calls child implementation
	return 0;
}
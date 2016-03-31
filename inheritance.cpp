#include <iostream>
using namespace std;

class Parent{
public:
	void lastName(){
		cout<<"The family name is *nix"<<endl;
	}
};

class Child:public Parent{

};

int main(){
	Parent father;
	Child son;

	father.lastName();
	son.lastName();
	return 0;
}
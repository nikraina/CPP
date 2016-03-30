#include <iostream>
using namespace std;

class sampleClass{
private:
	int val;
public:
	int getVal();
	void setVal(int x){
		val = x;
	}
};

int sampleClass::getVal(){
	return val;
}

int main(){
	sampleClass obj1;
	sampleClass* obj2 = new sampleClass();
	obj1.setVal(1);
	cout<<"Object 1 gives ::"<<obj1.getVal()<<endl;

	obj2->setVal(2);
	cout<<"Object 2 gives ::"<<obj2->getVal()<<endl;
}
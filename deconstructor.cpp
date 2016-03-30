#include <iostream>
using namespace std;

class sampleClass{
private:
	int val;
public:
	sampleClass(){
		cout<<"Constructor is called"<<endl;
	}

	~sampleClass(){
		cout<<"Deconstructor is called"<<endl;
	}

	int getValue(){
		return val;
	}

	int setValue(int x){
		val = x;
	}
};

int main(){
	sampleClass obj;
	obj.setValue(21);
	cout<<"The value is ::"<<obj.getValue()<<endl;
	//deconstructor is automatically called by C++
}
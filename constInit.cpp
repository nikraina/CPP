#include <iostream>
using namespace std;

class sampleClass{
private:
	int val;
	const int c_val;
public:

	sampleClass(int x, int y) :val(x), c_val(y){		//Weird syntax to handle constant member variable initialization

	}

	int getValue(){
		return val;
	}

	int getCValue() const{
		return c_val;
	}

};

int main(){
	sampleClass obj(2,3);
	cout<<"The regular value is ::"<<obj.getValue()<<endl;
	cout<<"The constant value is ::"<<obj.getCValue()<<endl;
	
	return 0;
}
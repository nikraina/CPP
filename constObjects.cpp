#include <iostream>
using namespace std;

class sampleClass{
private:
	int val;
public:

	sampleClass(){

	}

	int getValue() const{
		return 3;
	}

};

int main(){
	const sampleClass obj;
	cout<<"The value is ::"<<obj.getValue()<<endl;
	//Constant objects are maily read only and require user defined constructor!!
}
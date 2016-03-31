#include <iostream>
using namespace std;

class sampleClass{
private:
	int val;
public:
	sampleClass(){
		val = 0;
	}
	void getValue(){
		cout<<"The current value is :: "<<val<<endl;
	}

	friend void setValue(sampleClass &obj);
};

void setValue(sampleClass &obj){
	obj.val = 21;	//since this is friend it can access the private member too
}
int main(){

	sampleClass obj;
	obj.getValue();

	setValue(obj);
	obj.getValue();

	return 0;

}
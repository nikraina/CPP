#include <iostream>
using namespace std;

class numValue{
private:
	int val;
public:
	numValue(){};
	numValue(int x) :val(x){};
	numValue operator+(numValue obj){
		numValue new_obj;
		new_obj.val = this->val + obj.val;
		return new_obj;
	}
	int getValue(){
		return this->val;
	}
};

int main(){
	numValue val1(20);
	numValue val2(30);
	numValue val3;
	val3 = val1+val2;
	cout<<"The value in val3 is :: "<<val3.getValue()<<endl;
	return 0;
}
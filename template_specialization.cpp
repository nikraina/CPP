#include <iostream>
using namespace std;

template<class T>
class sampleClass{
public:
	void getInfo(){
		cout<<"Handle all non integers here"<<endl;
	}
};

template<>			//specialization for a sampleClass
class sampleClass<int>{
public:
	void getInfo(){
		cout<<"Handle all integers here"<<endl;
	}
};

int main(){
	sampleClass<int> int_obj;
	sampleClass<float> float_obj;
	int_obj.getInfo();
	float_obj.getInfo();
	return 0;
}
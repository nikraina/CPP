#include <iostream>
using namespace std;

template<class T>
class sampleClass{
private:
	T first, second;
public:
	sampleClass(T a, T b): first(a), second(b){}

	T getBigger(){
		return (first>second?first:second);
	}

	T getSmaller();
};

//if you want to define the method outside teh class this can be done as::
template<class T>
T sampleClass<T>::getSmaller(){
	return (first<second?first:second);
}


int main(){
	sampleClass<int> obj(10,12);
	cout<<"The bigger number is :: "<<obj.getBigger()<<endl;
	cout<<"The smaller number is :: "<<obj.getSmaller()<<endl;
	return 0;
}
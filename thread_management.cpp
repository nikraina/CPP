#include <iostream>
#include <thread>
using namespace std;

class dummyClass{
private:
	int val;
public:
	void setVal(int x){
		val = x;
		cout<<this<<endl;
	}
	void getVal(){
		cout<<val<<endl;
		cout<<this<<endl;
	}
};

int main(){
	dummyClass obj1;
	std::thread t1(&dummyClass::setVal,&obj1,3);	//pass the reference of the object to change the same object
	t1.join();
	cout<<"I have waited for thread 1"<<endl;
	std::thread t2(&dummyClass::getVal,&obj1);
	t2.join();
	cout<<"This is main class"<<endl;
	return 0;
}
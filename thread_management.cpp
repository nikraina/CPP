#include <iostream>
#include <thread>
using namespace std;

class dummyClass{
private:
	int val;
public:
	void setVal(int x){
		val = x;
	}
	int getVal(){
		return val;
	}
};

int main(){
	dummyClass obj1;
	std::thread t1(&dummyClass::getVal,obj1);
	t1.join();

	cout<<"This is main class"<<endl;
	return 0;
}
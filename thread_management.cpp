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
	std::thread t1((dummyClass()));

	cout<<"This is main class";
	return 0;
}
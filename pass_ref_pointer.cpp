#include <iostream>
using namespace std;

void change(int* x){		//using pointer to change the value
	*x = 20;
}

void change(int& x){		//using reference to change the value
	x = 30;
}

int main(){
	int x = 10;
	int* p = &x;
	change(p);
	cout<<"New value of x is ::"<<x<<endl;
	change(x);
	cout<<"New value of x is ::"<<x<<endl;

	return 0;
}
#include <iostream>
using namespace std;

template <class type>

type add(type x, type y){
	return x+y;
}

int main(){
	float x = 3.1;
	float y = 7;
	cout<<add(x,y)<<endl;
	return 0;
}
#include <iostream>
using namespace std;

template<class F, class S>

S smaller(F a, S b){
	return(a<b?a:b);
}

int main(){
	int a = 10;
	float b = 12.2;
	cout<<"The smaller number is :: "<<smaller(a,b)<<endl;
	return 0;
}
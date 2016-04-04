#include <iostream>
using namespace std;

int neg(int a){
	int neg = 0;
	int temp = (a<0?1:-1);

	while(a!=0){		//this loop basically adds (-1) a times to neg and returns it 
		neg += temp;
		a += temp;
	}

	return neg;
}

int main(){
	int x = neg(2);
	cout<< 3 + x <<endl;

	return 0;
}
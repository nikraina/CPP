#include <iostream>
using namespace std;

int count(int n){
	if(n == 0){
		return 1;
	}else if(n<0){
		return 0;
	}

	return count(n-1) + count(n-2) + count(n-3);
}

int main(){
	cout<<"Please give in the number of stairs"<<endl;
	int n;
	cin>>n;

	cout<<"The number of ways to climb stairs with "<<n<<" steps is :: "<<count(n)<<endl;
	return 0;
}
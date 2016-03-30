#include <iostream>

using namespace std;

int retNumEle(int *cpy){
	cout<<"The address of the cpy is ::"<<cpy<<endl;
	cout<<"The fifth element is ::"<<cpy[5]<<endl;
	cout<<"Size of copy array in bytes is ::"<<sizeof(cpy)<<endl;
	cout<<"Size of one copy element in bytes is ::"<<sizeof(cpy[0])<<endl;
	return sizeof(cpy)/sizeof(cpy[0]);
}

int main(){
	int arr[5];
	arr[5] = 5;
	cout<<"The address of the array is ::"<<&arr<<endl;
	cout<<"Size of array in bytes is ::"<<sizeof(arr)<<endl;
	cout<<"Size of one element in bytes is ::"<<sizeof(arr[0])<<endl;
	cout<<retNumEle(arr)<<endl;
	return 0;
}
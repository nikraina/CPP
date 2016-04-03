#include <iostream>
#include <thread>
#include <mutex>
#include <string>

using namespace std;

mutex mu;	//global mutex

void share_cout(string str,int val){
	//mu.lock();		//caution with such usage of mutex, if the cout throws an exception the mutex will never be unlocked
	//another way of achieving lock and unlock is using lock_guard
	std::lock_guard<std::mutex> guard(mu);
	cout<<str<<val<<endl;
	//mu.unlock();
}

void function_dec(){
	for(int i = 0; i>-100; i--){
		share_cout(string("output from child thread :: "),i);
	}
}

int main(){
	std::thread t1(function_dec);

	for(int i = 0; i<100; i++){
		share_cout(string("output from main thread :: "),i);	
	}

	t1.join();

	return 0;
}
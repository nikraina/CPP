#include <iostream>
#include <thread>
using namespace std;

void print(){
	cout<<"Hello world, using child thread"<<endl;
}

int main(){
	std::thread child(print);	//child thread starts execution
	//child.join();	//main thread waits for the child thread to finish
	child.detach();	//child thread will run independently of the main thread
	cout<<"Hello world using main thread"<<endl;
	return 0;
}

//compile using  g++ -pthread -std=c++11 -o basic_threading basic_threading.cpp 
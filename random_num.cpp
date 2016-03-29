#include <iostream>
#include <cstdlib>	//has rand()
#include <ctime> 	//has time()

using namespace std;

int main(){

	//srand(23);	//pass in any int vale to truly get random numbers each time the pgm is run
	//better solution to include time 
	srand(time(0));
	cout<<rand()<<endl;	//basic random number

	//if we wann generate the random number for a dice throw
	cout<< (rand() % 6) + 1 <<endl;		//the problem here is that if we run it multiple times we get the same random number again and again
	return 0;
}
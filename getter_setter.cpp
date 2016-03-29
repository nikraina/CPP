#include <iostream>
#include <string>
using namespace std;

class BasicGetSet{
private:
	string name;
public:
	BasicGetSet(string val){		//Constructor
		setName(val);
	}

	void setName(string val){
		name = val;
	}

	void getName(){
		cout<<name<<endl;
	}
};

int main(){
	BasicGetSet ramsy("Ramsy");
	BasicGetSet wolf("Wolfpack");
	//ramsy.setName("Ramsy");			//Another way is to pass this as pram to constructor
	cout<<"The UNC name is :: ";
	ramsy.getName();

	//wolf.setName("Wolfpack");			//Another way is to pass this as pram to constructor
	cout<<"\nThe NCSU name is :: ";
	wolf.getName();
}
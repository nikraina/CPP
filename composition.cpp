#include <iostream>
#include <string>
using namespace std;

class Birthday{
private:
	int day;
	int month;
	int year;
public:
	void setBirthday(int d, int m, int y){
		day = d;
		month = m;
		year = y;
	}
	void getBirthday(){
		cout<<"The birthday is on day :: "<<day<<" month :: "<<month<<" & year :: "<<year<<endl;
	}
};

class Person{
private:
	string name;
	Birthday bday;
public:
	Person(string n, Birthday b) : name(n), bday(b) {}
	void getInfo(){
		cout<<"The name of the person is :: "<<name<<endl;
		bday.getBirthday();
	}
};

int main(){
	Birthday bday;
	bday.setBirthday(05,10,1991);

	Person person("Linux",bday);
	person.getInfo();

	return 0;
}
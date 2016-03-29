#include <iostream>
using namespace std;

class BasicClass{
public:
	void getValue(){
		cout<<"Hello I am public"<<endl;
		cout<<"This is the value of val::"<<val<<endl;
	}
	void setValue(int x){
		val = x;
	}
private:
	int val;
};

int main(){
	BasicClass basic;
	basic.setValue(3);
	basic.getValue();
	return 0;
}

//Below is the same code using functionality using new() operator
// int main(){
// 	BasicClass* basic = new BasicClass();
// 	basic->setValue(3);
// 	basic->getValue();
// 	delete basic;
// 	return 0;
// }

//You can create multiple objects as well
// int main(){
// 	BasicClass* basic = new BasicClass[3];
// 	basic[1].setValue(3);
// 	basic[1].getValue();
// 	delete basic;
// 	return 0;
// }
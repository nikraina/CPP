#include <iostream>
using namespace std;

int moves(int a, int b){
	if(a==0 && b==0){
		return 1;
	}else if(a==0 && b>0){
		return moves(a,b-1);
	}else if(a>0 && b==0){
		return moves(a-1,b);
	}else{
		return moves(a-1,b)+moves(a,b-1);
	}
}

int main(){
	int x,y;
	cout<<"give in value for X"<<endl;
	cin>>x;

	cout<<"give in value for Y"<<endl;
	cin>>y;

	cout<<"The number of moves possible :: "<<moves(x,y)<<endl;

	return 0;

}
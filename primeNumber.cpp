#include<iostream>
using namespace std;
int main(){
	int a;
	cout<<"Enter the number you want to check:\t";
	cin>>a;
	if(a%2==1){
		cout<<"Entered number is a prime number"<<"\n";
	}else{
		cout<<"Number is not a prime number"<<"\n";
	}
	
	system("pause");
	return 0;
}

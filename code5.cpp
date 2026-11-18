// program to calculate the largets numbers the numbers should be in decimal;

#include<iostream>
using namespace std;

int main(){
	float n1,n2,n3;
	
	cout<<"Enter three numbers: ";
	cin>>n1>>n2>>n3;
	
	if(n1>n2 && n1>n3){
		cout<<"n1 is greater than n2 and n3";
	} else if(n2>=n1 && n2>=n3){
		cout<<"n2 is greater than n1 and n3";
	} else if(n3>=n1 && n3>=n2){
		cout<<"n3 is greater than n1 and n2";
	} else{
		cout<<"Wrong input";
	}
	
	return 0;
}

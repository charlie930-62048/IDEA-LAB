// program to calculate simple interest

#include<iostream>
using namespace std;

int main(){
	float PA, ROI, T;
	
	cout<<"Enter the values for Principal Amount, rate of interest and time: ";
	cin>>PA>>ROI>>T;
	
	float SI = (PA*ROI*T)/100;
	
	cout<<"The Simple Interest is: "<<SI<<endl;
	
	return 0;}

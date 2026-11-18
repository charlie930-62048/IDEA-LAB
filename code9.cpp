//program to accept the names and marks of 5 students

#include<iostream>
#include<string>
using namespace std;

int main(){
	string s[5];
	int m1[5],m2[5],m3[5];
	int total[5];
	float percentage[5];
	char grade[5];
	string result[5];
	
	for(int i=0 ; i<5; i++){
	
		cout << "\n--- Student " << (i + 1) << " ---\n";
		cout<<"Enter your name : \n";
		cin>> s[i];
		
		cout<<"Enter marks of Maths: \n";
		cin>>m1[i];
		
		cout<<"Enter marks of Science: \n";
		cin>>m2[i];
		
		cout<<"Enter marks of English: \n";
		cin>>m3[i];
		
		total[i] = m1[i]+m2[i]+m3[i];
		
		percentage[i] = ((float)total[i]/300.0)*100;
		
		if(total[i]>=85 && total[i]<=100){
			grade[i] = 'A';
		}else if(percentage[i]>=70 && percentage[i]<85){
			grade[i] = 'B';
		}else if(percentage[i]>=55 && percentage[i]<70){
			grade[i] = 'C';
		}else if(percentage[i]>=40 && percentage[i]<55){
			grade[i] = 'D';
		}else{
			grade[i] = 'F';
		}
		
		if(percentage[i]>=40 ){
			result[i] = "Pass";
		} else{
			result[i] = "Fail";
		}
	}
	
	cout<<"\n----- Student Report Card-----\n";
	
	for(int i = 0; i<5; i++){
		cout<<"\nName: "<< s[i];
		cout<<"\nTotal marks: "<< total[i]<<" /300";
		cout<<"\nPercentage: "<< percentage[i]<< "%";
		cout<<"\nGrade: "<< grade[i];
		cout<<"\nResult: "<< result[i];
	}

	
	return 0;
	
	
}


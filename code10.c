//program to accept the names and marks of 5 students

#include<stdio.h>
#include<string.h>

int main(){
	char s[5][50];
	int m1[5],m2[5],m3[5];
	int total[5];
	float percentage[5];
	char grade[5];
	char result[5][5];
	
	for(int i=0 ; i<5; i++){
	
		printf("\n--- Student %d---\n",(i+1));
		printf("Enter your name : \n");
		scanf("%s", s[i]);
		
		printf("Enter marks of Maths: \n");
		scanf("%d", &m1[i]);
		
		printf("Enter marks of Science: \n");
		scanf("%d", &m2[i]);
		
		printf("Enter marks of English: \n");
		scanf("%d",&m3[i]);
		
		total[i] = m1[i]+m2[i]+m3[i];
		
		percentage[i] = (((float)total[i]/300.0)*100);
		
		if(percentage[i]>=85 && percentage[i]<=100){
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
			strcpy(result[i] ,"Pass");
		} else{
			strcpy(result[i] , "Fail");
		}
	}
	
	printf("\n----- Student Report Card-----\n");
	
	for(int j=0; j<5; j++){
		printf("\nName: %s", s[j]);
		printf("\nTotal marks: %d /300", total[j]);
		printf("\nPercentage: %.2f%%",percentage[j]);
		printf("\nGrade: %c ", grade[j]);
		printf("\nResult: %s\n",result[j]);
	}

	
	return 0;
	
}

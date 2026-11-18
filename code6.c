// program to calculate the largets numbers the numbers should be in decimal;

#include<stdio.h>

int main(){
	int n1,n2,n3;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d", &n1,&n2,&n3);
	
	if(n1>n2 && n1>n3){
		printf("n1 is greater than n2 and n3\n");
	} else if(n2>n1 && n2>n3){
		printf("n2 is greater than n1 and n3\n");
	} else if(n3>n1 && n3>n2){
		printf("n3 is greater than n1 and n2\n");
	} else{
		printf("Wrong input\n");
	}
	
	return 0;
	
}

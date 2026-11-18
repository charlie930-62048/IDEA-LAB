// program to calculate the Area and perimeter of the rectangle in c

#include<stdio.h>

int main(){
	int l,b,A,P;
	
	printf("Enter the value for length and breadth: ");
	scanf("%d%d", &l,&b);
	
	A = l*b;
	
	printf("The Area of the rectangle is: %d \n", A);
	
	P = 2*(l+b);
	
	printf("The perimeter of the rectangle is: %d\n", P);
	
	return 0;
}

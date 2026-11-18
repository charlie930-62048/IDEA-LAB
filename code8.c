//program to accept numbner from user and display table

#include<stdio.h>

int main(){
	int n;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	int i;
	for(i=1; i<11; i++){
		printf("%d X %d = %d\n", n, i, n*i);
	}
	
	return 0;
}

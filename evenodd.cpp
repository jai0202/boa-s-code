#include <stdio.h>
int main(){
	int num;
	
	printf("Enter a number: ");
	
	if (scanf("%d", &num) != 1){
		printf("Error: Invalid input.");
		printf("\nChoose between 1 to 10 numbers only!");
	} else if (num == 2 || num==4 || num==6 || num==8 || num==10){
		printf("even number.");
	} else if (num == 1 || num==3 || num==5 || num==7 || num==9){
		printf("odd number.");
	
	}
	
	return 0;
	
}



#include <stdio.h>
#include <stdbool.h>
int main () {
	int choice;
	float balance = 1000.00;
	float amount;
	int pin=123;
	bool isPin = false;
	bool isTrue = true;
	char yesno[50];
	
while (!isPin){	
	printf("Input user PIN: ");
	if (scanf("%d", &pin) != 1) {
		printf("PIN must be numerical numbers only!\n");
		while (getchar () != '\n');
	} else if (pin == 123) {
    isPin = true;
    printf("Banking System\n1. Check Balance\n2. Withdraw Money\n3. Deposit Money\n4. Exit\n");
	
	printf("Enter choice: ");
	if (scanf(" %d", &choice) != 1){
		printf("Choose between 1 to 4 only!");
	} 
	} else {
    printf("PIN is incorrect. Please try again.\n");
}
}

while (isTrue) {
	
	switch(choice){
		case 1:
			printf("Your current balance is %.2f", balance);
		break;
		case 2:
			printf("Withdraw Amount: ");
			if (scanf("%f", &amount) != 1){
				printf("Input numerical numbers only!");
			} else if (amount <= 0 || amount > balance){
				printf("Not enough balance. Kindly, check your current balance first.\n");
			} else {
				printf("Amount $%.2f has been succesfully withdrawn.\n", amount);
				printf("Your current balance is $%.2f", balance -= amount);
			} while (getchar() != '\n');
		break;	
		case 3:
			printf("How much do you want to deposit?: ");
			if (scanf("%f", &amount) != 1) {
				printf("Input numerical numbers only!");
			} else
			printf("Amount $%.2f has been succesfully deposited.\n", amount);
			printf("Your current balance is $%.2f", balance += amount);
			while (getchar() != '\n');
		break;
		case 4:
			printf("Exiting program...");
			isTrue = false;
			break;
		default:
			printf("Invalid input");
		break;
	} 
	if (isTrue){
	
	printf("\ndo you still want to continue[y/n]?: ");
	scanf("%s", yesno);
	
	if (yesno[0] == 'Y' || yesno[0] == 'y'){
	continue;
	}  else
	printf("Exiting program...");
	isTrue = false;
		
	} 
	
}

return 0;
}

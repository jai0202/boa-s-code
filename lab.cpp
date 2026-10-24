#include <stdio.h>
int main(){
	char user[50];
	int pass=123;
	
	printf("Username: ");
	scanf("%s", user);
	
	printf("Password: ");
	scanf("%d", &pass);
	
	if (user[0]=='a' &&
		user[1]=='d' &&
		user[2]=='m' &&
		user[3]=='i' &&
		user[4]=='n' && user[5]=='\0') {
			
			if (pass == 123){
				
				printf("Login successfully!");
			} else {
				printf("Provide the correct credentials!");
			}	
			} else {
				printf("Provide the correct credentials!");
			}
			
	return 0;
}

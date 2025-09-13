


/*
Name:Brian Muiruri
Reg:CT100/G/26172/25
Description: To prompt the student to 
enter height,weight,phonenumber
*/


#include <stdio.h>

int main() {
    int height,weight,phnNumber;
//prompt to enter height
	printf("Enter you height");
	scanf("%d",&height);
//prompt to enter weight
	printf("Enter your weight");
	scanf("%d",&weight);
//prompt  to enter phone number
	printf("Enter your phone number");
	scanf("%d",&phnNumber);

//information Display
	printf("Height:%d metres\n",height);
	printf("Weight:%d kg\n",weight);
	printf("PhoneNumber: +254 %d",phnNumber);
    return 0;
}



#include <stdio.h>

int main()

{
  float num1 ,num2;
  int choice;
  float result;
  char again;
do{
    printf("Enter 1 for Addition:  \n");
    printf("Enter 2 for Subtraction:  \n");
    printf("Enter 3 for Multiplication:  \n");
    printf("Enter 4 for Division:  \n");
    fflush(stdin);  
    scanf("%d" ,&choice);
    if (choice>4) 
{
  printf("Enter Valid input !\n");
 }

    else{
      printf("Enter tow values: ");
      scanf("%f%f", &num1, &num2);
    }
	if (choice == 1) {
	  result = num1 + num2;
	  printf("The Sum of two numbers is : %f\n", result);
	}
	else if (choice == 2) {
	  result = num1 - num2;
	  printf("The subtraction of two numbers is : %f\n", result);
	}
	else if (choice == 3) {
	  result = num1 * num2;
	  printf("The Multiplication of two numbers is : %f\n", result);
	}
	else if (choice == 4) {
	  result = num1 / num2;
	  printf("The Division of two numbers is : %f\n", result);
	}
	else    
	  {
	    printf("\nInvalid Entry");
	  } 
	printf("press y to again use it and n to exit");  
	scanf("%c",&again); 
 } while(again=='Y'&& again!='N');    
 printf("%c",again);  
 getchar();
 return 0;
}

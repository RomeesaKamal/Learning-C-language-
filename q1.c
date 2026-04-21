#include<stdio.h>

int main (){
  int choice;
  float celsius,result;
  
  while(1){
  	printf("\nTemperature Conversion Menu\n");
  	printf("1. Celsius to Fahrenheit\n");
  	printf("2. Celsius to Kelvin\n");
  	printf("0. Exit\n");
  	
  	printf("Enter your choice:");
  	scanf("%d", &choice);
  	
  	if(choice == 0){
  		printf("programm exited\n");
  		break;
	  }
  	 printf("Enter temperature in Celsius: ");
        scanf("%d", &celsius);
        if(choice == 1){
        	result = (celsius * 9 / 5) + 32;
        	printf("Temperature in Fahrenheit = %.2f °F\n", result);
		}  else if (choice == 2) {
            result = celsius + 273.15;
            printf("Temperature in Kelvin = %.2f K\n", result);
        }

        else {
            printf("Invalid choice! Try again.\n");
        
  }
  return 0;
	
}
}

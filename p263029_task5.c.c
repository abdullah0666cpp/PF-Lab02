#include<stdio.h>
int main(){
	float a = 37.5;
	printf("========== TEMPERATURE CONVERSION ===============\n");
	printf("\n");
	printf("Temperature in Celsius:\t\t%.2f C\n",a);
	printf("Temperature in Fahrenheit:\t%.2f F\n",(a*9.0/5.0)+32.0);
	printf("Temperature in Calvin:\t\t%.2f K\n",a+273.15);
	printf("\n");
	printf("=================================================");
	
	return 0;
}

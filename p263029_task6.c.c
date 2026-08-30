#include<stdio.h>
int main(){
	float radius = 7.5, pi = 3.14159;
	printf("========== Circle Report Geometry ===============\n");
	printf("\n");
	printf("Given radius:\t\t\t%.3f cm\n",radius);	
	printf("Calculated Diameter:\t\t%.3f cm\n",2*radius);
	printf("Calculated Circumference:\t%.3f cm\n",2*pi*radius);
	printf("Calculated Area:\t\t%.3f sq.cm\n",pi*radius*radius);
	printf("\n");
	printf("=================================================");
	
	return 0;
}

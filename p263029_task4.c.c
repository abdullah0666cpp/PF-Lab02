#include<stdio.h>
int main(){
	char a = 'M';		
	int b = 42;
	float c = 3.141590;
	double d = 98.765432;
	printf("Type Name");
	printf("\t");
	printf("Variable Value");
	printf("\t");
	printf("\tSize in Memory\n");
	printf("----------------------------------------------------------------\n");
	printf("char\t\t %c\t\t\t%zu byte(s)\n",a,(int)sizeof(a));
	printf("int\t\t %d\t\t\t%zu byte(s)\n",b,(int)sizeof(b));
	printf("float\t\t%f\t\t%zu byte(s)\n",c,(int)sizeof(c));
	printf("double\t\t%f\t\t%zu byte(s)\n",d,(int)sizeof(d));
	printf("-----------------------------------------------------------------");	
	
	
	
	return 0;
}

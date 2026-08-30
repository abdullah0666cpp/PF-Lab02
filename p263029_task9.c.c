#include<stdio.h>
int main(){
	double BS = 85000.00;
	float HRA, MA, GS, ITD, NS;
	HRA = 0.20*BS;
	MA = 0.10*BS;
	GS = BS+HRA+MA;
	ITD = 0.05*GS;
	NS = GS-ITD;
	printf("========== MONTHLY SALARY SLIP ================\n");
	printf("\n");
	printf("Basic Salary:\t\t\tPKR %.2f\n",BS);
	printf("House Rent Allowance (20%%):\tPKR %.2f\n",HRA);
	printf("Medical Allowance (10%%):\tPKR %.2f\n",MA);
	printf("-----------------------------------------------\n");
	printf("Gross Salary:\t\t\tPKR %.2f\n",GS);
	printf("Tax Deduction (5%%):\t\tPKR %.2f\n",ITD);
	printf("Net Payable Salary:\t\tPKR %.2f\n",GS);
	printf("================================================");
					
	return 0;
}

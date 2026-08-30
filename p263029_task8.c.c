#include<stdio.h>
int main(){
	double principal = 250000.00;
	float rate = 8.5;
	int time = 3;
	float i, a, mi;
	i = (principal*rate*time)/100.0;
	a = principal + i;	
	mi = a/(time*12.0);
	printf("========== BANK LOAN INTEREST SUMMARY ==========\n");
	printf("Principal Amount:\t\tPKR %.2f\n",principal);
	printf("Anual Interest Rate:\t\t%.2f%%\n",rate);
	printf("Loan Duration:\t\t\t%d Years (36 Months)\n",time);
	printf("-------------------------------------------------\n");
	printf("Total Accrued Interest:\t\tPKR %.2f\n",i);
	printf("Total Payable Amount:\t\tPKR %.2f\n",a);
	printf("Monthly Installment:\t\tPKR %.2f\n",mi);
	printf("=================================================");
	
	
	
	
	
	
	
	return 0;
}

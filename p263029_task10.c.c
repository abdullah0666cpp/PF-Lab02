#include<stdio.h>
int main(){
	float pf = 88.0, maths = 76.5, physics = 82.0;
	int credit_h_pf = 3, credit_h_maths = 3, credit_h_physics = 2;
	float t_score, t_credit_h, t_avpercentage;
	t_score = (88.0*3)+(76.5*3)+(82.0*2);
	t_credit_h = 3+3+2;
	t_avpercentage = t_score/t_credit_h;
	printf("===================== SEMESTER ACADEMIC REPORT ====================\n");
	printf("\n");
	printf("Course \t\t\t Credit Hours \t\t Obtained Marks\n");
	printf("-------------------------------------------------------------------\n");
	printf("Programming Fund. \t\t%d\t\t%.2f\n",credit_h_pf,pf);
	printf("Calculus \t\t\t%d \t\t%.2f\n",credit_h_maths,maths);
	printf("Applied Physics \t\t%d \t\t%.2f\n",credit_h_physics,physics);
	printf("-----------------------------------------------------------\n");
	printf("Total Credits:\t%d \tWeighted Average:\t%.2f%%\n",3+3+2,t_avpercentage);
	printf("======================================================================");
					
	return 0;
}

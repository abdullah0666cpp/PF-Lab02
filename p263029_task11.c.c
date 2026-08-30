#include<stdio.h>
int main(){
	int Tea = 3, Samosa = 4, Chickenroll = 2;
	float tea = 60.00, samosa = 40.50, chickenroll = 120.00;
	int total_items = (3+4+2);
	float tb_tea = (60.00*3);
	float tb_samosa = (40.50*4);
	float tb_chickenroll = (120.00*2);
	float billsubtotal = (tb_tea+tb_samosa+tb_chickenroll);
	float GST = (0.16*billsubtotal);
	float TOTAL = (billsubtotal+GST);
	printf("=============== FAST CAFETERIA RECEIPT =========================\n");
	printf("\n");
	printf("Item \t\t");
	printf(" Qty \t");
	printf("Unit Price (PKR)\t");
	printf("Subtotal (PKR)\n");
	printf("----------------------------------------------------------------\n");
	printf("Tea\t\t");
	printf("%d\t\t",Tea);
	printf("%.2f\t\t",tea);
	printf("%.2f\n",tb_tea);
	printf("Samosa\t\t");
	printf("%d\t\t",Samosa);
	printf("%.2f\t\t",tea);
	printf("%.2f\n",tb_samosa);
	printf("Chicken Roll\t");
	printf("%d\t\t",Chickenroll);
	printf("%.2f\t\t",chickenroll);
	printf("%.2f\n",tb_chickenroll);
	printf("-----------------------------------------------------------------\n");
	printf("Subtotal:\t\t\t\t\tPKR %.2f\n",billsubtotal);
	printf("GST (16%%):\t\t\t\t\tPKR %.2f\n",GST);
	printf("-----------------------------------------------------------------\n");
	printf("Grant Total:\t\t\t\t\tPKR %.2f\n",TOTAL);
	printf("\n");
	printf("================= THANKYOU FOR YOUR VISIT ========================");
	
	
	return 0; 
}

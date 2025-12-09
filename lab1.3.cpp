#include<stdio.h>

main(){
	int A,B,C;
	float total1,total2,total3;
	float vat1,vat2,vat3;
	
	scanf("%d",&A);
	total1 = A*0.95;
	vat1 = total1*1.07;
	printf("%.2f\n",vat1);
	
	scanf("%d",&B);
	total2 = (A+B)*0.85;
	vat2 = total2*1.07;
	printf("%.2f\n",vat2);
	
	scanf("%d",&C);
	total3 = (A+B+C)*0.70;
	vat3 = total3*1.07;
	printf("%.2f\n",vat3);
}

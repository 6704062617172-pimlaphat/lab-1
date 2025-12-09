#include<stdio.h>

main(){
	int A,B,C;
	float total1,total2,total3;
		
	scanf("%d",&A);
	total1 = A*0.95;
	printf("%.2f\n",total1);
	
	scanf("%d",&B);
	total2 = (A+B)*0.85;
	printf("%.2f\n",total2);
	
	scanf("%d",&C);
	total3 = (A+B+C)*0.70;
	printf("%.2f\n",total3);
}

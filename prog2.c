#include<stdio.h>
int main(){
int cost,discount,dis;
printf("Enter the cost,discount percentage: ");
scanf("%d%d",&cost,&discount);
dis=discount*cost/100;
printf("total cost=%d\n",cost-dis);
return 0;
}



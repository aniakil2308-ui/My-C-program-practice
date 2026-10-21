#include<stdio.h>
int main(){
int d;
printf("Enter the no of days:");
scanf("%d",&d);
printf("No of weeks=%d\n",d/7);
printf("No of remaining days=%d\n",d%7);
return 0;
}

#include<stdio.h>
int main(){
int amount=10000,tax_percentage=50,tax;
tax=tax_percentage*amount/100;
printf("final amount=%d",amount+tax);
return 0;
}

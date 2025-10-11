#include <stdio.h>
int main(){
int prin, interest, si;

printf("Enter the principle amount:");
scanf("%d",&prin);

printf("Enter the interest rate:");
scanf("%d",&interest);

si = (prin/100)*interest;
printf("Your interest for one month is: %d",si);

int months, total;
printf("\nHow many months are you paying the interest:");
scanf("%d",&months);

total = si*months;

printf("Your total interest for %d months is: %d\n",months, total);
}

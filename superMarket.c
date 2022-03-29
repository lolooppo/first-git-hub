//supermarket programm v.1 by (lolooppo)


#include <stdio.h>

#include <string.h>

int main(){

int num;

printf("Please enter the number of products:  ");

scanf("%d",&num);

int i,j=0,budget,total=0;

int list2[num];char list1[num][20];

for(i=0;i<num;i++)
{

    printf("Enter name and price of product from lowwer to higher cost:  ");

    scanf("%s%*c%d",list1[i],&list2[i]);
}

printf("now,,,Please enter your avilable budget:  ");

scanf("%d",&budget);

while(total<budget)
{
total+=list2[j];

if(total<=budget)
{
    printf("%s-----> %d $\n",list1[j],list2[j]);
    j+=1;
    }
else
{
    total-=list2[j]
    ;break;
    }
    }
printf("total is %d $\n",total);

printf("reminded in your budget %d $\n",budget-total);

return 0;
}
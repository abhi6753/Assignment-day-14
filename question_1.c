//1. Write a program to calculate the sum of numbers stored in an array of size 10. Take\
array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,arr[size],i,sum=0,sum2;
    printf("Enter the size of array:\n");
    scanf("%d",&size);
    printf("Enter %d numbers to calculate its sum:\n",size);
    for(i=0;i<size;i++)
    {
       scanf("%d",&arr[i]);
       sum +=arr[i]; 
    }
    //sum2 = sum;
    printf("Sum of %d entered number is %d",size,sum);
    return 0;
}
//#include<stdio.h>

/*int main()
{
int size,i,sum=0,sum2=0;

printf("Enter the size of array:\n");
scanf("%d",&size);
int arr[size];
printf("Enter %d numbers to calculate its sum:\n",size);
for(i=0;i<size;i++)
{
scanf("%d",&arr[i]);
sum +=arr[i];
}
sum2 = sum;
printf("Sum of %d entered number is %d",size,sum2);
return 0;
}*/
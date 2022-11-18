//3. Write a program to calculate the sum of all even numbers and sum of all odd\
numbers, which are stored in an array of size 10. Take array values from the user.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int size,i,Even_sum=0,Odd_sum=0;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
          Even_sum += arr[i];
        else
          Odd_sum += arr[i];
    }
    printf("Sum of Even number is %d\n",Even_sum);
    printf("Sum of Odd number is %d",Odd_sum);
    getch();
    return 0;
}
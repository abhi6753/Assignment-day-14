//8. Write a program to find the second smallest number in an array.Take array values\
from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,smallest,second_smallest,greatest;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    smallest= arr[0];
    greatest = arr[0];
    for(i=1;i<size;i++)
    {
        if(smallest>arr[i])
           smallest = arr[i];
        else
           greatest = arr[i];
    }
    second_smallest = greatest;
    for(i=0;i<size;i++)
    {
        if(arr[i]<second_smallest && arr[i]>smallest)
        {
           second_smallest = arr[i];  
        }
    }
    printf("Second smallest number is %d",second_smallest);
    getch();
    return 0;
}

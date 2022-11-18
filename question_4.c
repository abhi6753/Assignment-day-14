//4. Write a program to find the greatest number stored in an array of size 10. Take array\
values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,greatest;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number:\n",size);
    for ( i = 0; i < size; i++)
    {
       scanf("%d",&arr[i]);
    }
    greatest = arr[0];
    for(i=1;i<size;i++)
    {
        if(greatest<arr[i])
        {
            greatest = arr[i];
        }
    }
    printf("Greatest number in %d number is %d",size,greatest);
    getch();
    return 0;
}
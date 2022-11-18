//7. Write a program to find second largest in an array.Take array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,largest,smallest,second_largest;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    smallest = arr[0];
    for(i=1;i<size;i++)
    {
        if(largest<arr[i])
        {
            largest = arr[i];
        }
        else
           smallest = arr[i];
    }
    second_largest = smallest;
    for ( i = 0; i < size; i++)
    {
        if(arr[i]>second_largest && arr[i]<largest)
        {
            second_largest = arr[i];
        }
    }
    printf("Second largest number is %d",second_largest);
    getch();
    return 0;  

}
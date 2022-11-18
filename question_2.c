//2. Write a program to calculate the average of numbers stored in an array of size 10.\
Take array values from the user
#include<stdio.h>
#include<conio.h>
void input(int[],int);
int average(int[],int);
int main()
{
    int i,size;
    int avg,sum=0;
    printf("Enter the size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    printf("Average of %d entered number is %d",size, average(arr,size));  // sum/size
    getch();
    return 0;
}
void input(int b[],int size)
{
    int i;
    printf("Enter %d number to calculate the average:\n",size);
    for(i=0;i<size;i++)
      scanf("%d",&b[i]);      
}
int average(int b[],int size)
{
    int i,sum=0,avg;
    for(i=0;i<size;i++)
    {
        sum = sum+b[i];
    }
    return avg = sum/size;
}
//10. Write a program in C to copy the elements of one array into another array.Take array\
values from the user
#include<stdio.h>
#include<conio.h>
void input(int[],int);
void copy(int[],int[],int );
void print(int[],int); 
int main()
{
    int size;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    int array[size];
    input(arr,size);
    copy(arr,array,size);
    print(array,size); 
    getch();
    return 0;
}
void input(int a[],int size)
{
    int i;
    printf("Enter %d number in first array:\n");
    for(i=0;i<size;i++)
    {
       scanf("%d",&a[i]);
    }
}
void copy(int a[],int b[],int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        b[i] = a[i];
    }
}
void print(int b[],int size)
{
    int i=0;
    printf("print second array after copied:\n");
    while(i<size)
    {
      printf("%d ",b[i]);
      i++;
    }
}
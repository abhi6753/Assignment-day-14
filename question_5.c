//5. Write a program to find the smallest number stored in an array of size 10. Take array\
values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int smallest = arr[0];
    for(i=1;i<size;i++)
    {
        if(smallest>arr[i])
          smallest = arr[i];
    }
    printf("Smallest number in %d number is %d",size,smallest);
    getch();
    return  0;
   

    
}

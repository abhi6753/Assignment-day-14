//9. Write a program in C to read n number of values in an array and display it in reverse\
order. Take array values from the user.
#include<stdio.h>
#include<conio.h>
void input(int[],int);
void reverse(int[],int);
void print(int[],int);
int main()
{
    int size,i,j,temp;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    reverse(arr,size);
    print(arr,size);
    getch();
    return 0;
}

// Note: arr array ko hi dusra name de rhe hai b,c,d,\
big bracket [] lga kr bta rhe hai ki ye ek array variable ka name hai

void input(int b[],int size) // This function takes input in array only
{
    int i;
    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
}
void reverse(int c[],int size) //This function do reverrse array only
{
    int i,j,temp;
    i=0;j=size-1;
    while(i<j)
    {
        temp = c[i];
        c[i] = c[j];
        c[j] = temp;
        i++,j--;
    }
}
void print(int arr[],int size) // This function print array
{
    int i;
    printf("After reverse:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
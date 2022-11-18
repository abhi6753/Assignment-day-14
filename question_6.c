//6. Write a program to sort elements of an array of size 10. Take array values from the user.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,j=0,k,l,temp;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
       if(arr[i]>arr[j])
       {
           temp = arr[i];
           arr[i] = arr[j];
           arr[j] = temp;
       }
       l = i-1;
       k=i;
       while(l>=0)   // ye check krega ki i se 0 index tak me koi value isse bda to ni or agr bda h to fir
       {            // uske jagh pe i ko vej diya jaaye
           if(arr[l]>arr[k])
           {
               temp = arr[l];
               arr[l] = arr[k];
               arr[k] = temp;
               k--;
           }
           l--;
       }
       j++;
    }
    printf("After sorting:\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    getch();
    return 0;
}
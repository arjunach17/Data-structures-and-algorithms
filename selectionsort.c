#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[30],i,j,min,temp;

    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
              min=j;


        }
         
         temp=a[min];
         a[min]=a[i];
         a[i]=temp;


    }

      printf("Array elements after sorting  ");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}
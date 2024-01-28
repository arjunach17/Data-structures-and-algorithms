#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,a[30],i,j,temp;

    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
        
        for(j=0;j<n-1-i;j++)
        {
            if(a[j+1]<a[j])
            { temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
            }
              


        }
         
        


    }

      printf("Array elements after sorting  ");
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
    return 0;
}
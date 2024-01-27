#include<stdio.h>
#include<stdlib.h>

int main()
{
    int key,a[30],i,n;

    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);
    
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
       { printf("Elemennt %d found at position %d",key,i);
        exit(0);
       }
    }
    
    if (i==n)
    {
        printf("Element not found");
    }
    
    return 0;

}

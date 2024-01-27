#include<stdio.h>
#include<stdlib.h>

int main()
{
    int key,n,first,mid,last,a[30],i,pos;
    printf("Enter the number of elements");
    scanf("%d",&n);
    printf("Enter the elements in sorted order");
    for (  i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key element");
    scanf("%d",&key);

    first=0;
    last=n-1;
    mid=(first+last)/2;
    
   
        if(a[mid]==key){
        printf("Element %d found at position %d ",key,mid+1);
         exit(0);
        }

        if(a[mid]>key)
        last=mid-1;

        if(a[mid]<key)
        first=mid+1;

        for(i=first;i<=last;i++)
        {
            if(a[i]==key){
            printf("Element %d found at position %d",key,i+1);
            exit(0);
            }
        }
        if(i==last+1)
        printf("Element not found");
       

       return 0;

}
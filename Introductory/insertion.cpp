#include <stdio.h>

void Inset(int ar[],int size)
{
    int k,item,i ; 
    printf("Enter inset position and Value: ");
    scanf("%d%d",&k,&item);
    
    for(i=size ; i>k ; i--)
    {
        ar[i] = ar[i-1];
    }
    
    ar[k] = item;
    
    printf("\n\nAfter Insertion: ");
    for(i=0; i<= size ; i++)
    {
        printf("%d ",ar[i]);
    }
}

int main() {
    int n,i;
    printf("Enter array size: ");
    scanf("%d",&n);
    int LA[n];
    
    printf("Enter array: ");
    for(i=0; i<n ; i++)
    {
        scanf("%d",&LA[i]);
    }
    Inset(LA,n);

    return 0;
}
#include<stdio.h>

void merge(int A[],int mid,int low,int high)
{
    int i,j,k,B[50];
    i=low;
    j=mid+1;
    k=low;

    while(i<=mid && j<=high)
    {
        if(A[i]<A[j])
        {
            B[k]=A[i];
            i++;
        }
        else
        {
            B[k]=A[j];
            j++;
        }
        k++;
    }


    while(i<=mid)
    {
        B[k]=A[i];
        i++;
        k++;
    }
    while(j<=high)
{
    B[k]=A[j];
        j++;
        k++;
    }


    for(int i=0; i<=high; i++)
{
    A[i]=B[i];
    }

}


void partition(int A[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        partition(A,low,mid);
        partition(A,mid+1,high);
        merge(A,mid,low,high);
    }
}

int main()
{
    int A[]= {12,16,17,8,35,15,40,22,55,25,20,10};
    int low,high,size ;

    size=sizeof(A)/sizeof(A[0]);
    low=0;
    high=size-1;


    printf("\nBefore Sorting: ");
    for(int i=0; i<=high; i++)
    {
        printf(" %d  ",A[i]);
    }

   
    partition(A,low,high);


    printf("\n\nAfter Sorting in Decending Order: ");
    for(int i=high; i>=1; i--)
    {
        printf(" %d  ",A[i]);
    }


}

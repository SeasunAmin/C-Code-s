#include<stdio.h>
#include<conio.h>

void printArray(int A[],int size)
{
    for(int i=0;i<size;i++)
    {
        printf("%d  ",A[i]);
    }
    printf("\n");
}

void Merge(int A[],int mid,int low,int high)
{
    int i,j,k,temp[50];

    i=low;
    j= mid+1;
    k=low;

    while((i<=mid) && (j<=high))
    {
        if(A[i]<A[j])
        {
            temp[k]=A[i];
            i++;
            k++;
        }
        else{
            temp[k]=A[j];
            j++;
            k++;
        }
    }

    while(i<=mid)
    {
        temp[k]=A[i];
            i++;
            k++;
    }

    while(j<=high)
    {
         temp[k]=A[j];
            j++;
            k++;
    }

    for(int l=0;l<=high;l++)
    {
        A[l]=temp[l];
    }


}

void Partition(int A[],int low,int high)
{
    int mid;
    if(low<high)
    {
        mid = (low+high)/2;
        Partition(A,low,mid);
        Partition(A,mid+1,high);
        Merge(A,mid,low,high);
    }

}


int main()
{
    int A[]={3,7,6,9,4};
    //int A[]={7,3};

    int size,low,high,mid;



    size = sizeof(A)/sizeof(A[0]);
    low = 0;
    high = size-1;

    printf("\nBefore Sorting : ");
    printArray(A,size);

    Partition(A,low,high);


    printf("\nAfter  Sorting : ");
    printArray(A,size);


}


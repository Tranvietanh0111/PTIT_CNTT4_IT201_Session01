#include <stdio.h>
int repeatMax(int arr[],int n)
{
    int count[1001]={0};
    for(int i=0;i<n;i++)
    {
        count[arr[i]]++;
    }
    int max=0,most=0;
    for(int i=0;i<=1000;i++)
    {
        if(count[i]>max)
        {
            max=count[i];
            most=i;
        }
    }
    return most;
}
int main()
{
    int arr[]={1,2,1455,5,4,1,1,2,21,55,4}
    int n=sizeof(arr)/sizeof(arr[0]);
    int maxRepeat=repeatMax(arr,n);
    printf("phan tu xuat hien nhieu nhat la %d",maxRepeat);
    return 0;
}
#include <stdio.h>

int main()
{
    int n;
    int repeat=0;
    int arr[]={1,2,3,4,1,7,8,43,21,1,2};
    printf("mang gom cac phan tu:");
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        printf("%d ,",arr[i]);
    }
    printf("\n");
    printf("nhap so can kiem tra lan lap:");
    scanf("%d",&n);
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        if(n==arr[i])
        {
            repeat++;
        }
    }
    printf("số %d xuất hiện %d lần trong mảng\n",n,repeat);
    return 0;

}
//độ phức tap về khng gian O(1)
//độ phức tap về thời gian O(n)

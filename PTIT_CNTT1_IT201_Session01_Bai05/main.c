#include <stdio.h>

int main(void)
{
    int n;
    printf("nhap so luong phan tu:");
    scanf("%d", &n);
    int arr[n];
    printf("nhap %d so nguyen", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n-1; i++)
    {
        for (int j= 0; j < n-i-1 ;j++){
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("mang sau khi xep");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
// độ phức tap về không gian O(1)
// độ phức tạp ề thời gian O(n^2)
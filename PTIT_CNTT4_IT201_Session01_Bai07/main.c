#include <stdio.h>

int cach1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
            {
                return 1;
            }
        }
    }
    return 0;
}
int cach2(int arr[], int n)
{
    int flag[1001]={0};
    for (int i = 0; i < n; i++)
    {
        if (flag[arr[i]] == 1)
        {
            return 1;
        }
        flag[arr[i]] = 1;
    }
    return 0;
}
int main()
{
    int arr[]={1,2,3,232,1,2,312,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    if (cach1(arr, n))
    {
        printf("co trung lap\n");
    }else
    {
        printf("khong trung lap\n");
    }
    if (cach2(arr, n))
    {
        printf("co trung lap\n");
    }else
    {
        printf("khong trung lap\n");
    }
    return 0;
}

//cach 1 có độ phúc tạp ề không gian và thời gian lanluot là O(1) và O(n^2)
//cach2 có độ phực tạp veef không gian và thời gian lanluot la O(1) và O(n)
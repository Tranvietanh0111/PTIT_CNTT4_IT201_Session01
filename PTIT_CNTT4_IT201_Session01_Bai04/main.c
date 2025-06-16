#include <stdio.h>

void cach1(int n){
    int i;
    int sum=0;
    for (i=1;i<n;i++)
    {
        sum+=i;
    }
}
//độ phúc tạp về không gian: O(1)
//độ phúc tạp về thời gian: O(n)

void cach2(int n){
    int sum=(n-1)*n /2;
}
//độ phúc tạp về không gian: O(1)
//độ phúc tạp về thời gian: O(1)
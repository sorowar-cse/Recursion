
//K

#include<stdio.h>
#include<stdlib.h>
int MAX(int a[],int max,int n)
{
    if(n<0)
        return max;
    if(a[n]>max)
        max= a[n];

    return MAX(a, max, n-1);
}

int main()
{
    int n, a[1032], i, max;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    long long int d= MAX(a,a[n-1],n-1);
    printf("%lld\n", d);
    return 0;
}






//M

#include<stdio.h>
long long int S_S(long long int a[], long long int n, long long int m)
{
    if(n<=m)
        return 0;
    return S_S(a,n-1,m)+a[n-1];
}

int main()
{
    long long n, m, i, a[100032];
    scanf("%lld%lld", &n, &m);
    for(i=0; i<n; i++)
        scanf("%lld", &a[i]);

    printf("%lld", S_S(a,n,n-m));
    return 0;
}





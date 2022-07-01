


//S

#include<stdio.h>
long long av(int a[], int n, long long s)
{
    if(n==-1)
        return s;
    s+=a[n];
    return av(a,n-1,s);
}

int main()
{
    int n, a[132], i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    long long d= av(a, n-1, 0);
    double s= d/(double)n;
    printf("%.6lf\n", s);
    return 0;
}




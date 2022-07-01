

//R

#include<stdio.h>
int a[100032];
int Is_pal(int n, int i, int x)
{
    int mid= n/2;
    if(i==mid)
        return 1;
    if(a[i]==a[n-1-i])
        x=1;
    else
        x=0;
    return Is_pal(n, i+1, x)*x;
}

int main()
{
    int n, m, i;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    int d= Is_pal(n, 0, 1);
    if(d==0)
        printf("NO\n");
    else
        printf("YES\n");
    return 0;
}




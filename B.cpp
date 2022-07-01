
#include<stdio.h>

void numPrint(int n)
{
    if(n<=0)
        return;
    numPrint(n-1);
    printf("%d\n", n);
}
int main()
{
    int n;
    scanf("%d", &n);
    numPrint(n);
    return 0;
}

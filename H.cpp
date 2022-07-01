

//H

#include<stdio.h>
void P_star(int st)
{
    if(!st)
        return;
    printf("*");
    P_star(st-1);
}

void P_space (int s)
{
    if(!s)
        return;
    printf(" ");
    P_space(s-1);
}

void Pattern (int n, int num)
{
    if(!n)
        return;
    Pattern(n-1, num-3);
    P_space(n-1);
    P_star(n-num+1);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    Pattern(n, n);
    return 0;
}





// E:

#include<stdio.h>

void find_bin(int n)
{
    int x;
    if(n==0)
        return;
    x= n%2;
    find_bin(n/2);
    printf("%d", x);
}

int main()
{
    int n,tc;
    scanf("%d", &tc);
    while(tc--)
    {
        scanf("%d", &n);
        if(n==0)
            printf("0");
        else
            find_bin(n);
        printf("\n");
    }
    return 0;
}

//             Author: Sorowar Mahabub,
//            studies B.Sc in CSE, IIUC

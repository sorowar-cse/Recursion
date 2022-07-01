// D:

#include<stdio.h>

void printdigit(int n)
{
    int r;
    if(n==0)
        return;

    r= n%10;
    printdigit(n/10);
    printf("%d ", r);
}

int main()
{
    int tc;
    scanf("%d", &tc);
    while(tc--)
    {
        int n;
        scanf("%d", &n);
        if(n==0)
            printf("%d", n);
        else
            printdigit(n);
        printf("\n");
    }
    return 0;
}

//             Author: Sorowar Mahabub,
//            studies B.Sc in CSE, IIUC

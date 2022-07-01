
#include<stdio.h>

long long int factors(int n)
{
    if (n>=1)
        return n*factors(n-1);
    else
        return 1;
}

int main()
{
    int n;
    scanf("%d", &n);

    printf("%lld\n", factors(n));
    return 0;
}


//             Author: Sorowar Mahabub,
//            studies B.Sc in CSE, IIUC

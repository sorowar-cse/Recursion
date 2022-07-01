//            Bismillahhir Rahnanir Rahim

#include<stdio.h>

void numPrint(int n)
{
    if(n<=0)
        return;

    if(n==1)
         printf("%d", n);
    else
         printf("%d ", n);
    numPrint(n-1);

}

int main()
{
    int n;
    scanf("%d", &n);
    numPrint(n);
    return 0;
}


//             Author: Sorowar Mahabub,
//            studies B.Sc in CSE, IIUC

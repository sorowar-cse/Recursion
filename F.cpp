// F:

#include<stdio.h>

void printingEven(int arr[], int n)
{
    if(n==-1)
        return;
    if(n%2==0)
        printf("%d ", arr[n]);
    printingEven(arr, n-1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n+9];
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printingEven(arr, n-1);
    return 0;
}

//             Author: Sorowar Mahabub,
//            studies B.Sc in CSE, IIUC


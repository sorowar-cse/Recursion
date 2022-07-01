#include<stdio.h>

long long int sum_array(long long int arr[], long long int n)
{
    if (n==0)
        return 0;

    return arr[n] + sum_array(arr, n-1);
}

int main()
{
     long long int tc;
    long long int sum;
    scanf("%lld", &tc);

    long long int array[1000008];
    for(long long int p= 1; p<=tc; p++)
        scanf("%lld", &array[p]);

    sum = sum_array(array,tc);
    printf("%lld\n", sum);
    return 0;
}


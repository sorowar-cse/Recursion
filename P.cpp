
//P

#include<stdio.h>
#include<math.h>
long long LOG(long long n, long long i)
{
    if(pow(2,i)>n)
        return i-1;
    if(pow(2,i)==n)
        return i;
    return LOG(n,i+1);
}

int main()
{
    long long int n;
    scanf("%lld", &n);

    printf("%lld",LOG(n, 0));
    return 0;
}





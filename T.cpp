
#include<bits/stdc++.h>
using namespace std;


long int ok(int n, int r)
{
    if(n==r)
        return 1;
    else if(r==0)
        return 1;

    if(r==1)
        return n;

    if(r>n)
        return 0;

    return ok(n-1, r) + ok(n-1, r-1);
}

int main()
{
    int n, r;
    cin >> n >> r;
    cout << ok(n, r) << endl;

    return 0;
}

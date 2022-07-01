#include<bits/stdc++.h>
using namespace std;


long long int ok(long long int n, long long int r)
{
    if(n==r)
        return 1;
    //else if(r==0)
       // return 1;
    else if(r>n)
        return 0;
    else
    {
        int a= ok(n, r*10);
        int b= ok(n, r*20);

        if(a==1 || b==1)
            return 1;
        else
             return 0;
    }
}

int main()
{
    long long int n, tc, r= 1;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        r= 1;
        if(ok(n, r)==1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}


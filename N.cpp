//#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void Add(int A[], int B[], int n, int p, int c)
{

    if(p>n)
        return;

    cout << A[p]+B[p] << " ";

    if(p%c == 0)
        cout << endl;

    return Add(A, B, n, p+1, c);
}

int main()
{

    int r, c;
    cin >> r >> c;
    int n= r*c;
    int A[n+1], B[n+1];

    for(int i=1; i<=n; i++)
        cin >> A[i];

    for(int j=1; j<=n; j++)
        cin >> B[j];

    int p=1;
    Add(A, B, n, p, c);

return 0;
}



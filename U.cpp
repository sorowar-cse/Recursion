#include<bits/stdc++.h>
#include <deque>
#define F  first
#define S  second
#define lld  long long int
#define pb push_back
#define vc vector
#define um unordered_map
#define EPS 1e-10
#define MP make_pair
#define pi acos(-1)
#include<stdio.h>
#include<string.h>
#define faster ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
using namespace std;
int main()
{

    lld i,j,k,n,m,x,y,z,w,v;
    cin>>n>>m;
    lld W[n+1],V[n+1];
    W[0]=0;
    V[0]=0;

    vector<vector<lld>> A(n + 1, vector<lld>(m + 1));

    for(i=1;i<=n;i++){
        cin>>W[i]>>V[i];
    }

    for(i=0;i<=n;i++){
        for(j=0;j<=m;j++){
            if(i==0 || j==0)A[i][j]=0;
            else if(j>=W[i]){
                A[i][j]=max((V[i]+A[i-1][j-W[i]]),A[i-1][j]);
            }
            else A[i][j]=A[i-1][j];
        }
    }
     cout<<A[n][m]<<endl;
}

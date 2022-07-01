#include<bits/stdc++.h>
#define lld long long int
#define D double
using namespace std;
#define faster ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);
lld flag=0,n,m,arr[1000000];
void reached(lld i,lld sum)
{
  if(i == n)
  {
    if(sum == m)
      flag  = 1;
    return;
  }
  reached(i+1, sum+ arr[i]);
  reached(i+1, sum - arr[i]);
}
int main()
{
   faster;
   #ifndef ONLINE_JUDGE
   freopen("input.txt","r", stdin);
   freopen("output.txt","w", stdout);
   #endif
   cin >> n >> m;
   for(int i = 0;i<n;i++)
    cin >> arr[i];
    reached(1,arr[0]);
  if(flag)
    cout << "YES" << endl;
  else cout << "NO" << endl;
}

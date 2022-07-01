
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include <iostream>
#include<vector>
#include<algorithm>
//#include<bits/stdc++.h>
#define lld long long int
using namespace std;
lld sequence(lld n,lld i){
      if(n==1)return i;
      if(n%2!=0){
           n=(3*n)+1;
           i++;
      }
      else n=n/2,i++;
      sequence(n,i);
}
int main()
{
    lld c,i=1,l,r,z=1,j,n;
    cin>>n;
    if(n==1)cout<<i<<endl;
    else{
     l=sequence(n,i);
     cout<<l<<endl;
    }
   /* vector<lld>a(n),b(2000);
    for(i=0;i<n;i++){
       cin>>a[i];
       b[a[i]]++;
    }
    for(i=0;i<=1000;i++){
        if(b[i]>((n+1)/2)){
            cout<<"NO"<<endl;
            z=1;
            break;
        }
    }

    if(z==0)cout<<"YES"<<endl;*/

}

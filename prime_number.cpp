#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{

ll n;
cin>>n;
int count=-1;
for(ll i=2;i<=sqrt(n);i++)
{
  if(n%i==0)
  {
    count++;
    break;
  }
}

if(count==0)
cout<<"NO";
else
cout<<"YES";
}



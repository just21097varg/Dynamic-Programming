#include <bits/stdc++.h>
using namespace std;
long long int part(vector<int> v,int n,int sum)
{
   long long int t[n+1][sum+1];
   for(int i=1;i<=sum;i++)
   {
       t[0][i]=0;
       
   }
   for(int i=0;i<=n;i++)
   {
       t[i][0]=1;
       
   }
   for(int i=1;i<=n;i++)
   {
       for(int j=1;j<=sum;j++)
       {
           if(v[i-1]<=j)
             t[i][j]=(t[i-1][j-v[i-1]] + t[i-1][j])%1000000007;
           else
             t[i][j]=t[i-1][j];
       }
   }
   return t[n][sum];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,a,sum;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        v.push_back(a);
	    }
	    cin>>sum;
	    long long int c=part(v,n,sum);
	    cout<<c<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;
bool part(vector<int> v,int n,int sum)
{
   bool t[n+1][sum+1];
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
             t[i][j]=(t[i-1][j-v[i-1]] || t[i-1][j]);
           else
             t[i][j]=t[i-1][j];
       }
   }
   return t[n][sum];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,a,sum=0;
	    cin>>n;
	    vector<int> v;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        v.push_back(a);
	        sum=sum+a;
	    }
	    int c=0;
	    if(sum%2==0 && v.size()>1)
	       c=part(v,v.size(),sum/2);
	    if(c==0)
	      cout<<"NO"<<endl;
	    else
	      cout<<"YES"<<endl;
	}
	return 0;
}

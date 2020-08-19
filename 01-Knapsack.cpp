#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,w,a;
	    vector<int> v1,v2;
	    cin>>n>>w;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        v1.push_back(a);
	        
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        v2.push_back(a);
	        
	    }
	    int arr[n+1][w+1];
	    for(int i=0;i<=n;i++)
	       arr[i][0]=0;
	    for(int i=0;i<=w;i++)
	       arr[0][i]=0;   
	    for(int i=1;i<=n;i++)
	    {
	        for(int j=1;j<=w;j++)
	        {
	
	            if(v2[i-1]<=j)
	              arr[i][j]=max(v1[i-1]+arr[i-1][j-v2[i-1]],arr[i-1][j]);
	            else
	             arr[i][j]=arr[i-1][j];    
	        }
	    }
	    cout<<arr[n][w]<<endl;
	}
	return 0;
}

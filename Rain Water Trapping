#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a;
	    vector<int> v,p1,p2;
	    cin>>n;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a;
	        v.push_back(a);
	    }
	    int m=v[0];
	    for(int i=0;i<n;i++)
	    {
	        if(v[i]>m)
	          m=v[i];
	        p1.push_back(m);
	    }
	    m=v[n-1];
	    for(int i=n-1;i>=0;i--)
	    {
	        if(v[i]>m)
	          m=v[i];
	        p2.push_back(m);
	    }
	    int s=0;
	    int j=n-1;
	    for(int i=0;i<n;i++,j--)
	    {
	        s=s+min(p1[i],p2[j])-v[i];
	    }
	    cout<<s<<endl;
	    
	}
	
	return 0;
}

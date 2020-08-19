#include <bits/stdc++.h>
using namespace std;
int sub(string s1,string s2,string s3,int n,int m,int l)
{
    int t[n+1][m+1][l+1];
    memset(t,0,sizeof(t));
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            for(int k=1;k<=l;k++)
            {
            if(s1[i-1]==s2[j-1] && s1[i-1]==s3[k-1])
              t[i][j][k]=t[i-1][j-1][k-1]+1;
            else
              t[i][j][k]=max(max(t[i-1][j][k],t[i][j-1][k]),t[i][j][k-1]);
            }
        }
    }
    return t[n][m][l];
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    string s1,s2,s3;
	    cin>>s1>>s2>>s3;
	    int s4=sub(s1,s2,s3,a,b,c);
	    
	    cout<<s4<<endl;
	}
	return 0;
}

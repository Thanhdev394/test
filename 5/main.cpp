#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int s,n,a[10007],maxx;
int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
        cin>>a[i];

        int m=INT_MAX,id=-1;
    for(int i=1;i<=n;i++)
        for (int j=1;j<n;j++)
        {
            if(j==i)
                continue;

        if(i-1==j)
        if(i<n)
            m=min(m,abs(a[i+1]-a[i-1]));
            else
            m=min(m,abs(a[j+1]-a[j]));
        if(maxx<m)
           {

            maxx=m;
        id=i;}
    }
    for(int i=1;i<=n;i++)
        if(id!=i)
        cout<<a[i]<< " ";
    return 0;
}

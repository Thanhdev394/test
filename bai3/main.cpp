#include <bits/stdc++.h>

using namespace std;
int in,n,m=0,k,a[1000007],b[1000007],c[1000007],d[1000007],sum;
bool nguyento(int n)
{
    if(n<2)
        return false;
    else if(n>2)
    {
        if(n%2==0)
            return false;
        for(int i=3;i<=(float)n/2;i++)
            if(n%i==0)
                return false;
        return true;
    }
}
int main()
{
    cin   >> k >> n;
    for(int i =1;i<=n;i++)
        cin >> a[i];
    for(int i =1;i<=n; i++)
    {
        if(nguyento(a[i])==true)
        {
            m++;
            d[m]=a[i];
        }
    }
    for(int i =1;i<=k;i++)
    {
        cin >> c[i];
        sum = d[1];
        in =0;
        {
            for(int j =2;j<=n ;j++)
            {
                if(sum>=c[i])
                {
                    cout << sum << endl;
                    in++;
                    break;
                }
                else
                    sum +=d[j];
            }
        }
        if(in ==0)
            cout << "-1" << endl;

    }
    return 0;
}

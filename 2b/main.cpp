#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int n, x;
float s;
int gt = 1;
int main()
{
    cin >> n >> x;
    s=x;
    for(int i = 1; i <= n; i++)
    {
        gt=gt*2*n*(2*n+1);
        if(n % 2 == 0){
            s = s+pow(x,n*2+1)/gt;
        }else
        s = s-pow(x,n*2+1)/gt;
    }
    cout << s;
    return 0;
}

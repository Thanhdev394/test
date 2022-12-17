#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int m; cin >> m;
    for(int i =1;i<=n;i++)
        cout << i*i << " ";
        cout << endl;
    cout << pow((int)sqrt(n)+1,2);
    return 0;
}

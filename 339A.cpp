#include <iostream>
#include <string>
#include <algorithm>

#define N 100


using namespace std;

int main()
{
    int m[N];
    int n = 0;
    while(cin >> m[n]) n++;

    sort(m, m+n);
    
    cout << m[0];
    for(int i = 1; i < n; i++)
        cout << '+' << m[i];
    cout << endl;

    return 0;
}
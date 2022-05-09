#include <iostream>
#include <string>
#include <vector>

#define N 100

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    while(n--)
    {
        string w;
        cin >> w;

        if (w.length() <= 10)
            cout << w << endl;
        else
            cout << w[0] << w.length()-2 << w[w.length()-1] << endl;
    }
    return 0;
}

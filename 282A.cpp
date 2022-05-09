#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x = 0;
    cin >> n;
    string statement;

    while(n--)
    {
        cin >> statement;
        if(statement[1] == '+')
            x++;
        else
            x--;
    }

    cout << x << endl;

    return 0;
}
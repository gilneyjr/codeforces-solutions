#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    while(n--)
    {
        int n_know = 0;
        int i = 3;
        while(i--)
        {
            int tmp;
            cin >> tmp;
            if(tmp == 1)
                n_know++;
        }

        if (n_know > 1)
            sum++;
    }
    cout << sum << endl;
    return 0;
}
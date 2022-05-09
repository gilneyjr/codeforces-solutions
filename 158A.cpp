#include <iostream>

using namespace std;

int main()
{
    int sum = 0;
    int n, k, k_score = -1;
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        if (i == k)
            k_score = tmp;
        if ((k_score == -1 || k_score == tmp) && tmp > 0)
            sum++;
    }
    cout << sum << endl;
    return 0;
}
#include <iostream>

using namespace std;

void solve(int &i, int &j) {
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= 5; j++) {
            int tmp;
            cin >> tmp;
            if(tmp == 1)
                return;
        }
    }       
}

int main()
{
    int i, j;
    solve(i, j);
    cout << abs(i-3) + abs(j-3) << endl;
    return 0;
}
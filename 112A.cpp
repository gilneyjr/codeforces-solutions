#include <iostream>
#include <string>


using namespace std;

string tolower(const string &str) {
    string res = "";
    for (auto c : str)
        res += tolower(c);
    return res;
}

int main()
{
    string a, b;
    cin >> a >> b;

    int result = tolower(a).compare(tolower(b));

    cout << (result < 0 ? -1 : (result > 0 ? 1 : 0)) << endl;
    return 0;
}
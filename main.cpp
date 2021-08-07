#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int result = 0;
    for (int i = 1; i <= c; i++)
    {
        result += i * a;
    }
    if (result < b)
    {
        cout << 0 << endl;
    }
    else
    {
        cout << result - b << endl;
    }
}
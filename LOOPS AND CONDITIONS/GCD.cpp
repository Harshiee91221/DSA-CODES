#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    if (b == 0)
    {
        return a;
    }
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
        return a;
    }
}
int main()
{
    int a, b;
    cout << "ENTER THE VALE OF A AND B" << endl;
    cin >> a >> b;
    cout << gcd(a, b);
}
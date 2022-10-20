#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a, b,i = 0;
    double ans=0;
    cin >> a;
    while (i > 0)
    {
        b = a & 1;
        ans += b * pow(10, i);
        i--;
        a =a>>1;
    }
    cout << ans;
}
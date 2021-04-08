#include <iostream>
#include <iomanip>
#include <cmath>
int main(void)
{
    int flag = 1;
    using namespace std;
    double exp, sum = 0;
    double num = 0;
    int x = 1;
    cin >> exp;
    sum += 1.0/x;
    while (fabs(1.0/x) >= exp)
    {
        flag *= -1;
        x += 2;
        num = flag * 1.0 / x;
        sum +=num;
    }
    cout << "Pi = ";
    cout << fixed << setprecision(4) << 4 * sum << endl;
    return 0;
}
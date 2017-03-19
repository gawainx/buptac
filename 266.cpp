#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int T, a, b;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &a, &b);
        if (a>b)
            swap(a, b);
        int x = (int)pow(2, b);
        int y = (int)pow(2, b-a) + 1;
        if (y==2)
        {
            y/=2;
            x/=2;
        }
        printf("%d/%d\n", y, x);
    }
    return 0;
}
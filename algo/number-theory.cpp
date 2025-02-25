#include <map>
using namespace std;

map<int, int> primeFactors(int n)
{
    map<int, int> factors;
    for (int i = 2; i * i <= n; ++i)
    {
        while (n % i == 0)
        {
            factors[i]++;
            n /= i;
        }
    }
    if (n > 1)
    {
        factors[n]++;
    }
    return factors;
}

int powerOf2LessThanN(int n)
{
    return 1 << (31 - __builtin_clz(n - 1));
}
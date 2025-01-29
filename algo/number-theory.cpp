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

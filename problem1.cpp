#include <iostream>
int main()
{
    int n;
    long long fact = 1, sum;
    std::cout << "enter the value on n:";
    std::cin >> n;
    if (n % 2 == 0)
    {
        sum = 0;
        for (int i = 1; i <= n; i++)
            sum += i;
        std::cout << sum;
    }
    else
    {
        int i = 1;
        while (i <= n)
        {
            fact *= i;
            i++;
        }
        std::cout << fact;
    }
    return 0;
}
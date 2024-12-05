#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;
#define MAX 21

unsigned long long int TrinomialValue(int dp[MAX][MAX], int n, int k)
{
    if (k < 0)
        k = -k;
    if (dp[n][k] != 0)
        return dp[n][k];
    if (n == 0 && k == 0)
        return 1;
    if (k < -n || k > n)
        return 0;
 
    return (dp[n][k] = TrinomialValue(dp, n - 1, k - 1) + TrinomialValue(dp, n - 1, k) + TrinomialValue(dp, n - 1, k + 1));
}
void sumTrinomial(int a)
{
    int dp[MAX][MAX] = { 0 };
    unsigned long long int resultado = 0;
    for (int i = -a; i < a+1; i++)
    {
        resultado += TrinomialValue(dp, a, i);
    }
    cout << resultado << endl;
}
int main()
{
    int input;
    cin >> input;
    sumTrinomial(input);
    return 0;
}
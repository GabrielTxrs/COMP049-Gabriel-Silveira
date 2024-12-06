#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define dbg(i) cout << #i << " " << i << endl;
#define forn(n, x)                   \
    cout << "[";                     \
    for (auto i = 0; i < n - 1; i++) \
    {                                \
        cout << x[i] << ", ";        \
    }                                \
    cout << x[n - 1] << "]" << endl;

string resizeString(int n, const string &str)
{
    string result;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            result += str[i];
        }
    }
    return result;
}

int main()
{
    int n;
    int m;
    int a;
    int b;
    int numLinhaResized;
    int numColunaResized;
    vector<string> imagem;
    vector<string> imagemResized;

    string linha;

    while (true)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            return 0;

        for (int i = 0; i < n; i++)
        {
            cin >> linha;
            imagem.push_back(linha);
        }
        cin >> a >> b;
        numLinhaResized = a / n;
        numColunaResized = b / m;

        for (size_t i = 0; i < numLinhaResized; i++)
        {
            for (size_t j = 0; j < numColunaResized; j++)
            {
                imagemResized.push_back(resizeString(numColunaResized, imagem[i]));
            }
        }
        for (const auto &str : imagemResized)
        {
            cout << str << "\n";
        }
        cout << endl;
        dbg(a);
        dbg(b);
    }

    return 0;
}
/*
n m
3 3
###
#__
###
6 9
0 0

#########
#########
###______
###______
#########
#########
*/
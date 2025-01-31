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

string resizeString(int n, string &str)
{
    string result;
    // dbg(str);
    for (int i = 0; i < str.length(); i++)
    {
        for (int j = 0; j < n; j++)
        {
            result += str[i];
        }
    }
    // dbg(result);
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


    while (true)
    {
        cin >> n >> m;
        if (n == 0 && m == 0)
            return 0;

        string linha;
        vector<string> imagem;
        for (int i = 0; i < n; i++)
        {
            cin >> linha;
            imagem.push_back(linha);
        }
        cin >> a >> b;
        numLinhaResized = a / n;
        numColunaResized = b / m;
        vector<string> imagemResized;
        for (size_t i = 0; i < a; i++)
        {
            // dbg(numColunaResized);
            // dbg(i/numLinhaResized);
            // dbg(imagem[i/numLinhaResized]);
            imagemResized.push_back(resizeString(numColunaResized, imagem[i/numLinhaResized]));
        }
        for (const auto &str : imagemResized)
        {
            cout << str << endl;
        }
        cout << endl;
        linha.clear();
        imagem.clear();
        imagemResized.clear();
    }
    return 0;
}
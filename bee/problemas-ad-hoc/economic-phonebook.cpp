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

bool compare(string a, string b)
{
    ll sz = a.length();

    for (ll i = 0; i < sz; ++i)
    {
        if (a[i] < b[i])
            return 1;
        if (a[i] > b[i])
            return 0;
    }

    return 1;
}

string longestCommonPrefix(vector<string> array)
{
    if (array.size() == 0)
        return "";
    string menor = array[0];
    ll len = menor.length();
    ll j = 0;
    for (ll i = 1; i < array.size(); i++)
    {
        for (j = 0; j < len && j < array[i].length(); j++)
            if (menor[j] != array[i][j])
                break;
        len = j;
    }
    return menor.substr(0, len);
}

int main()
{
    _ ll n;
    while (cin >> n)
    {
        vector<string> arrayTelefones;
        for (ll i = 0; i < n; i++)
        {
            string telefone;
            cin >> telefone;
            arrayTelefones.push_back(telefone);
        }
        sort(arrayTelefones.begin(), arrayTelefones.end(), compare);
        ll tamanho = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            vector<string> arrayDois;
            arrayDois.push_back(arrayTelefones[i]);
            arrayDois.push_back(arrayTelefones[i + 1]);
            tamanho += longestCommonPrefix(arrayDois).size();
        }
        cout << tamanho << endl;
    }

    return 0;
}
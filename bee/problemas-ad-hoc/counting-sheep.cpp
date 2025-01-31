#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    _ ll cont_externo;
    cin >> cont_externo;
    for (size_t i = 0; i < cont_externo; i++)
    {
        _ ll num_ovelhas;
        cin >> num_ovelhas;
        set<ll> ovelhas;
        ll contadorDeOvelhas = 0;
        for (size_t i = 0; i < num_ovelhas; i++)
        {
            ll ovelha;
            cin >> ovelha;
            if(ovelhas.insert(ovelha).second)
                contadorDeOvelhas++;
        }
        cout << contadorDeOvelhas << endl;
    }
    return 0;
}
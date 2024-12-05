#include <stdio.h>
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

void extractIntegerWords(string str, int *n, int *k)
{

    stringstream ss;
    ss << str;

    int valorInteiro;
    ss >> valorInteiro;
    if (stringstream(str) >> valorInteiro)
    {
        *n = valorInteiro;
    }

    for (int i = 0; i <= str.length(); i++)
    {
        if (str[i] == '!')
        {
            *k = *k + 1;
        }
    }

}

unsigned long long int calcular(int *n, int *k) {
    int numMulti = *n / *k;
    unsigned long long int resultado = *n;
    // cout << "numMulti = "<< numMulti << endl;
    for (int i = 1; i <= numMulti; i++) {
        // cout << "i = "<< i << endl;

        int fator = (*k) * i;
        // cout << "fator = "<< fator << endl;

        int termo = max((*n) - fator, 1);
        // cout << "termo = "<< termo << endl;

        resultado = resultado * termo;

        // cout << "resultado = "<< resultado << endl;
    }
    return resultado;
}

int main()
{
    int entradas;
    cin >> entradas;

    for (int i = 0; i < entradas; i++)
    {
        int k = 0;
        int n = 0;

        string input;
        cin >> input;

        extractIntegerWords(input, &n, &k);
        // cout << endl << n << endl;
        // cout << k << endl;

        unsigned long long int resultado = calcular(&n, &k);
        cout << resultado << endl;
    }

    return 0;
}
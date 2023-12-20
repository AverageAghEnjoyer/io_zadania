#include <iostream>
#include "funkcje.h"

using namespace std;

int main() {
    cout << logarytm(2) << endl;

    double tab[4] = { 1, 2, 3, 4 };
    cout << odchylenie(tab, 4) << endl;

    cout << eksponent(2) << endl;

    cout << maksimum(tab, 4) << endl;
}
#include <iostream>
#include <cmath>
#include "funkcje.h"

using namespace std;

double logarytm(double numer) {
    return log(numer);
}

double odchylenie(double tablica[], int rozmiar) {
    double suma = 0.0;
    for (int i = 0; i < rozmiar; i++) {
        suma += tablica[i];
    }

    double srednia = suma / rozmiar;
    double var = 0.0;
    for (int i = 0; i < rozmiar; i++) {
        var += pow(tablica[i] - srednia, 2);
    }
    return sqrt(var / rozmiar);
}

double eksponent(double numer) {
    return exp(numer);
}

double maksimum(double tablica[], int rozmiar) {
    double  max = -10000;
    for (int i = 0; i < rozmiar; i++) {
        if (max < tablica[i]) {
            max = tablica[i];
        }
    }
    return max;
}
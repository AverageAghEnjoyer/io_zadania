#include <iostream>
#include <algorithm>

using namespace std;

struct Product {
    string name;
    double price;
};

bool compareProducts(const Product& a, const Product& b) {
    return a.price > b.price;
}

int main() {
    // 2
    const int size = 3;
    int AA[size];
    int* BB = nullptr;
    int countNegative = 0;

    cout << "Podaj 10 liczb:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> AA[i];
        if (AA[i] < 0) {
            countNegative++;
        }
    }

    if (countNegative > 0) {
        BB = new int[countNegative];
        int index = 0;

        for (int i = 0; i < size; i++) {
            if (AA[i] < 0) {
                BB[index] = AA[i];
                index++;
            }
        }
    }

    cout << "Liczby ujemne: ";
    if (countNegative > 0) {
        for (int i = 0; i < countNegative; i++) {
            cout << BB[i] << " ";
        }
        cout << endl;
        cout << "Ilosc liczb ujemnych: " << countNegative << endl;
        cout << "Ilosc liczb pominietych: " << (size - countNegative) << endl;
    } else {
        cout << "Brak liczb ujemnych." << endl;
    }

    if (BB != nullptr) {
        delete[] BB;
    }

    // 4
    const int numProducts = 3;
    Product products[numProducts];

    for (int i = 0; i < numProducts; i++) {
        cout << "Podaj nazwe " << (i + 1) << ": ";
        cin >> products[i].name;
        cout << "Podaj cene " << (i + 1) << ": ";
        cin >> products[i].price;
    }

    sort(products, products + numProducts, compareProducts);

    cout << "Produkty od najdrozszych:" << endl;
    for (int i = 0; i < numProducts; i++) {
        cout << "Nazwa: " << products[i].name << ", Cena: " << products[i].price << endl;
    }

    return 0;
}

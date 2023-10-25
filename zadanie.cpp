
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Product{
public:
    string name;
    int price;

        Product(){
            
        }
        Product(string n, int p){
            name = n;
            price = p;
        }
        void showInfo(){
            cout << "name: " << name << ", price: " << price << endl;
        }
};

bool compare(Product a, Product b){
    return a.price < b.price;
}

int main()
{
     // 1
    //int AA[10] = {0, 1, 2, 3, 4, 5, -6, -7, -8, -9};
    const int items = 3;
    int AA[items];
    for (int i = 0; i < 3; i++){
        int number;
        cout << "enter number: ";
        cin >> number;
        AA[i] = number;
    }
    int *BB = new int[items];
    int counter = 0;
    for (int i = 0; i < items; i++){
        if (AA[i] < 0){
            BB[counter] = AA[i];
            counter++;
        }  
    }
    cout << "negative numbers: ";
    
   
    for (int i = 0; i < counter; i++){
        cout << BB[i] << " ";
    }
    
    cout << endl << "skipped numbers: " << items - counter << endl << endl;
    
    delete BB;
    
    // 2
    // Product tab[10];
    vector <Product> tab;
    counter = 0;
    for (int i = 0; i < 3; i++){
        string name;
        int price;
        cout << "enter name: ";
        cin >> name;
        cout << "enter price: ";
        cin >> price;
        tab[i] = Product(name, price);
    }
    sort( tab.begin(), tab.end(), compare);
    for (int i = 0; i < 10; i++){
        tab[i].showInfo();
    }
    cout << "done" << endl;
    return 0;
}

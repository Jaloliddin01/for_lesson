#include <bits/stdc++.h>

using namespace std;

class Kutubxona {

    map<string, int> kitoblar;

public:

    void add_book(int id) {

        string name;
        int number;

        cout << id << " - kitob nomini kiriting : ";
        getline(cin >> ws, name);

        cout << "'" <<  name << "'" << " nomli kitobdan qancha borligini kiriting: "; 
        cin >> number;

        kitoblar[name] += number;

    }

    void know_number() {
        string name;

        cout << "\nQaysi kitobni sonini bilmoqchisiz? Nomini kiriting : ";
        getline(cin >> ws, name);

        cout << "'" <<  name << "'" << " nomli kitobdan kutubxonada "  << kitoblar[name] << " ta bor!\n";
    }

};

int main() {

    Kutubxona book;
    int n;

    cout << "Nechta kitob kiritmoqchisiz: "; cin >> n;

    for(int i = 0; i < n; i++) {
        book.add_book(i+1);
    }

    book.know_number();
    
    return 0;
}
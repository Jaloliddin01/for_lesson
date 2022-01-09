#include <bits/stdc++.h>

using namespace std;

class Xodim{

protected:
    string ism;
    string sharif;
    string familiya;
    string manzil;
    double maosh;
    string birth_date;
    
};

class Uqituvchi : protected Xodim {
    string kafedra;
    vector<string> subjects;
    string unvon;
    int num; 
public:
    void set_data() {


        cout << "O`qituvchini ismi:  ";             getline(cin >> ws, (this->ism));
        cout << "O`qituvchini sharifi:  ";          getline(cin >> ws, (this->sharif));
        cout << "O`qituvchini familyasi:  ";        getline(cin >> ws, (this->familiya));
        cout << "O`qituvchini manzili:  ";          getline(cin >> ws, (this->manzil));
        cout << "O`qituvchini maosh(mln so`m):  ";  cin >> (this->maosh);
        cout << "O`qituvchini kafedrasi:  ";        getline(cin >> ws, (this->kafedra));
        cout << "O`qituvchini unvon:  ";            getline(cin >> ws, (this->unvon));
        cout << "O`qituvchini tug`ilgan sanasi:  "; getline(cin >> ws, (this->birth_date));
        cout << "O`qituvchini fanlari soni: ";      cin >> num;
        
        subjects.resize(num+1);

        cout << "O`qituvchini fanlari: \n";

        for(int i = 0; i <= num; i++)
            getline(cin, (this->subjects[i]));
    }

    void get_data(){
        cout << "\nO`qituvchini ismi:  ";               cout << (this->ism);
        cout << "\nO`qituvchini sharifi:  ";            cout << (this->sharif);
        cout << "\nO`qituvchini familyasi:  ";          cout << (this->familiya);
        cout << "\nO`qituvchini manzili:  ";            cout << (this->manzil);
        cout << "\nO`qituvchini maosh(mln so`m):  ";    cout << (this->maosh);
        cout << "\nO`qituvchini kafedrasi:  ";          cout << (this->kafedra);
        cout << "\nO`qituvchini unvon:  ";              cout << (this->unvon);
        cout << "\nO`qituvchini tug`ilgan sanasi:  ";   cout << (this->birth_date);
        cout << "\nO`qituvchini fanlari:  ";

        for(string s: this->subjects)
            cout << '\n' << s;

        cout << '\n';
    }
};

class Texnik_Xodim : protected Xodim {
    string bulim;
    string unvon;
public:
    void set_data() {


        cout << "Xodimni ismi: ";              getline(cin >> ws, (this->ism));
        cout << "Xodimni sharifi:  ";          getline(cin >> ws, (this->sharif));
        cout << "Xodimni familyasi:  ";        getline(cin >> ws, (this->familiya));
        cout << "Xodimni manzili:  ";          getline(cin >> ws, (this->manzil));
        cout << "Xodimni maosh(mln so`m):  ";  cin >> (this->maosh);
        cout << "Xodimni bo`limi:  ";          getline(cin >> ws, (this->bulim));
        cout << "Xodimni unvon:  ";            getline(cin >> ws, (this->unvon));
        cout << "Xodimni tug`ilgan sanasi:  "; getline(cin >> ws, (this->birth_date));
    }

    void get_data(){
        cout << "\nXodimni ismi:  ";               cout << (this->ism);
        cout << "\nXodimni sharifi:  ";            cout << (this->sharif);
        cout << "\nXodimni familyasi:  ";          cout << (this->familiya);
        cout << "\nXodimni manzili:  ";            cout << (this->manzil);
        cout << "\nXodimni maosh(mln so`m):  ";    cout << (this->maosh);
        cout << "\nXodimni bo`limi:  ";            cout << (this->bulim);
        cout << "\nXodimni unvon:  ";              cout << (this->unvon);
        cout << "\nXodimni tug`ilgan sanasi:  ";   cout << (this->birth_date);
        cout << "\nXodimni fanlari:  ";

        cout << '\n';
    }
};

int main() {

    Uqituvchi Otabek;
    Texnik_Xodim Jaloliddin;

    Otabek.set_data();
    Otabek.get_data();

    Jaloliddin.set_data();
    Jaloliddin.get_data();
    
    return 0;
}

#include <iostream>
#include "Collection.h"
#include "ATM.h"

using namespace std;

void menu() {
    cout << "\nMeniu\n";
    cout << "-----------------------------------------\n";
    cout << "1. Afisare bancnote din bancomat.\n";
    cout << "2. Adaugati o suma de plata.\n";
    cout << "3. Afisare istoric tranzactii.\n";
    cout << "0. Iesire din program.\n";
    cout << "-----------------------------------------\n";
}

int main() {
//    RepositoryCollection repoCollection;

    // Adaugam bancnotele de care avem nevoie
    ATM atm;
    Collection collection = atm.adaugareBancnote();

    vector<int> listElements;
    vector<int> occurElements;

    collection.getElems(listElements); /// Bancnote
    collection.getOccurences(occurElements); /// Frecventa fiecarei bancnote

    while (true) {
        menu();
        cout << "Alegeti o optiune:";

        int optiune = 0;
        cin >> optiune;

        switch(optiune){
            case 1:
                cout << "\nAvem urmatoarele bancnote in bancomat:\n";
                for (int i = 0; i < collection.getSize(); i++)
                    cout << occurElements[i] << " bancnote de " << listElements[i] << "." << "\n";
                break;
            case 2:
                cout << "\n";
                atm.plataCuBancnote(collection.getSize(), listElements, occurElements);
                break;
            case 3:
                cout << "\n";
                atm.afisareTranzactii();
                break;
            case 0:
                return 0;
            default:
                cout << "Comanda gresita, reincercati.\n";
                break;
        }
    }
}

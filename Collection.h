
#ifndef LAB2_COLLECTION_H
#define LAB2_COLLECTION_H

#include <iostream>
#include <vector>
#include "VectorDinamic.h"
#include "List.h"

using namespace std;

class Collection {
private:
    /*VectorDinamic elements = VectorDinamic(10);
    VectorDinamic occurences = VectorDinamic(10);*/

    List<int> elements;
    List<int> occurences;

public:
    Collection();
    ~Collection();

    vector<int> getElems(vector<int> &listElements);
    vector<int> getOccurences(vector<int> &occurElements);

    void add(int elem, int nrOccurencesDatDeUtilizator);
    int getAt(int position);
    int getSize();

//    bool remove(int elem);
//    bool search(int elem);
/*
    int searchByPossition(int position); // search element by position

    int size();

    int nrOccurrences(int elem);

    TElem * getAllElements();
    TElem * getAllOccurences();
*/


//    void show_bancnote_occurences();

    /*friend ostream &operator<<(ostream& os, Collection& collection)
    {
        for (int i = 0; i < collection.size(); i ++)
            os << elements[i] << " " << occurences[i] << "\n";
//            os << collection.elements[i] << " " << collection.occurrences[i] << "\n";
        return os;
    }*/
};

#endif //LAB2_COLLECTION_H

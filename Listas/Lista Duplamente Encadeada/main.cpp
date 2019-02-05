#include <bits/stdc++.h>
#include "lista_dupla.hpp"
using namespace std;

int main() {
    DoubleLinkedList lista;
   
    lista.push_back(4);
    lista.push_back(8);
    lista.print();

    lista.pop_back();
    lista.print();

    lista.push_front(8);
    lista.print();

    lista.pop_back();
    lista.print();

    return 0;
}
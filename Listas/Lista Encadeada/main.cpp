#include <bits/stdc++.h>
#include "lista_encadeada.hpp"
// #include "lista_dupla.hpp"
// #include "lista_circular.hpp"

using namespace std;

int main()
{
    LinkedList lista;

    lista.push_back(4);
    lista.push_back(8);
    lista.print();

    lista.push_front(1);
    lista.print();

    lista.pop_front();
    lista.print();

    lista.push_front(1);
    lista.insert(2,2);
    lista.print();

    lista.erase(2);
    lista.print();

    lista.find(4);
    lista.front();
    lista.back();

    return 0;
}

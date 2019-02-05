#include <bits/stdc++.h>

using namespace std;

int main() {

    /* 
        Lista de funções
            push_front(tipo de dado da lista)
            pop_front()
            insert_after(lista.begin() + 3, tipo de dado)
            erase_after(list.begin() + 2, tipo de dado)

        Ordenação e mesclagem 
            lista.sort()
            list.reverse()
            list.merge(lista2)

        Iteradores
            

    */

    forward_list<int> list;

    cout << "Lista vazia? " << (list.empty() ? "Sim" : "Não") << endl;

    for( int i = 0; i < 10; i++){
        list.push_front(i);
    }

    int size = distance(list.begin(), list.end());
    cout << "Tamanho da lista é: " << size << endl;

    list.pop_front();

    int size2 = distance(list.begin(), list.end());
    cout << "Tamanho da lista é: " << size2 << endl;

    cout << "Primeiro elemento é: " << list.front() << endl;

    int last = -1;
    for(auto it = list.begin(); it != list.end(); ++it){
        last = *it;
    }

    cout << "Último elemento é: " << last << endl;
    return 0;
}


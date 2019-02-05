#include <bits/stdc++.h>
#include <list>
/* Funções Implentadas na biblioteca <list>
   Iteradores:
    - begin()
    - end()

   Capacidade:
    - empty() / bool
    - size()

   Acesso a elementos:
    - front()
    - back()

   Modificadores:
    - push_front()
    - pop_front()
    - push_back()
    - pop_back()
    - insert()  insert(iterador, elem) , list.insert(list.begin() + 3, 4)
    - erase()   erase(iterador), list.erase(list.begin()+ 2)
    - clear()
*/
using namespace std;

void print(list<int> &lista){
    for (auto it = lista.begin(); it != lista.end(); ++it)
        cout << ' ' << *it; cout << '\n';
}

int main() {
    list<int> lista;

    for( int i = 1; i < 6; i++)
        lista.push_back(i);
    
    print(lista);
    
    cout << "Retirando o primeiro elemento com pop_front()" << endl;
    lista.pop_front();
    print(lista);

    cout << "Adicionando novamente o primeiro elemento com push_front()" << endl;
    lista.push_front(1);
    print(lista);

    cout << "Retirando o último elemento com pop_back()" << endl;
    lista.pop_back();
    print(lista);

    cout << "Inserir elemento em posição arbitrária com insert()" << endl;
    auto iterador = lista.begin();

    for(int i = 0; i < 2; i++)
        iterador++;

    lista.insert(iterador, 9);
    print(lista);

    cout << "Retirar elemento em posição arbitrária com erase()" << endl;
    iterador--;
    lista.erase(iterador);
    print(lista);

    cout << "Limpando a lista com clear()" << endl;
    lista.clear();
    print(lista);

    return 0;
}
#include <bits/stdc++.h>
#include "lista_encadeada.hpp"

using namespace std;

LinkedList::LinkedList()
{
    tail = head = NULL;
}

void LinkedList::push_back(int element)
{  
    auto n = new Node1;
    n->value = element;
    n->next = NULL;

    tail ? tail->next = n : head = n;
    tail = n;
}

void LinkedList::pop_back()
{
   if(!head)
       throw "Lista Vazia";
   
   auto prev = head;

   while(prev->next != tail)
        prev = prev->next;

    delete tail;

    tail = head ? (tail = head = nullptr) : (tail = prev, tail->next = nullptr);
}

void LinkedList::push_front(int element)
{
    auto n = new Node1;
    n->value = element;

    head ?  n->next = head : ( head = n,tail = n );
    head = n;
}

void LinkedList::pop_front()
{
    if(!head)
        printf("Lista vazia!");

    auto n = head;
    head = head->next;
    delete n;

    tail = head ? tail : nullptr;
}

void LinkedList::insert(int element, unsigned int index)
{
    if(head){
        int indice = 2;
        auto prev = head;
        while(indice < index){
            prev = prev->next;
            indice++;
        }

        auto n = new Node1;
        n->value = element;

        if(prev->next){
            n->next = prev->next;
            prev->next = n;
        }
        else {
            tail = n;
            n->next = nullptr;
        }
    }
    else {
        printf("Lista vazia!");
    }

}

void LinkedList::erase(unsigned int index)
{
    if(head){
        int indice = 2;
        auto prev = head;
        auto atual = prev->next;

        while(indice < index){
            prev = prev->next;
            atual = prev->next;
            indice++;
        }

        if(prev->next){
            prev->next = atual->next;
        }
        else {
            tail = prev;
            prev->next = nullptr;
        }
    }
}

int LinkedList::front()
{
    if(head) {
        return head->value;
    }
    else {
        throw "Empty List";
    }
}

int LinkedList::back()
{
    if(tail){
        return tail->value;
    }
    else {
        return -1;
    }
}

void LinkedList::clear()
{
    // Remove todos os nós da lista
    // Complexidade: O(n)

}

bool LinkedList::find(int element)
{
    if(head){
        auto prev = head;
        while(prev->next){
            if(prev->value == element){
                printf("existe\n");
                return true;
            }
            prev = prev->next;
        }
    }
    return false;
}

unsigned int LinkedList::size()
{
    // Retorna o número de nós que existem na lista
    // Complexidade: O(n)

    return 0;
}

bool LinkedList::empty()
{
    // Retorna se a lista está vazia ou não
    // Complexidade: O(n)

    return false;
}

void LinkedList::print()
{
    Node1 * node = head;

    cout << "--List Begin [" << head << "]-- Size = " << size() << "\n";

    while(node)
    {
        cout << "(" << node->value << ", " << node->next;
        if (node->next) cout << " [" << node->next->value << "]";
        cout << ")\n";

        node = node->next;
    }

    cout << "--List End [" << tail << "]--\n\n";
}

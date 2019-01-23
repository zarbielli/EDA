#include <bits/stdc++.h>

using namespace std;

int main() {

    vector<int> v;
    int p = 7;
    int valor = 78;

    for(unsigned int i = 0; i < 10; i++){
        v.push_back(i);
    }

    cout << "Onde está o número 7?" << endl;
    auto it = find(v.begin(), v.end(), p);
    cout << "No indice: " << it - v.begin() << endl;
    cout << "Valor contido no indice acima: "  << v.at( it - v.begin() ) << "\n\n";

    cout << "Primeiro elemento: " << v.front() << endl;
    cout << "Último elemento: " << v.back() << endl;
    cout << "Tamanho o vetor: " << v.size() << "\n\n";

    cout << "Vamos trocar os valores do primeiro com o último elemento" << endl;
    swap(v.front(), v.back() );
    cout << "Primeiro elemento agora é: " << v.front() << endl;
    cout << "Último elemento agora é: " << v.back() << "\n\n";

    cout << "Vamos retirar o último elemento do vetor" << endl;
    v.pop_back();
    cout << "O novo tamanho do vetor é: " << v.size() << endl; 
    cout << "Adicionar o último elemento novamente" << endl;
    v.push_back(0);
    cout << "Tamanho do vetor voltou a ser: " << v.size() << "\n\n";

    cout << "Vamos adicionar o numero 78 antes do número 4" << endl;
    v.insert(v.begin() + 4, valor);
    for(unsigned int j = 0; j < v.size(); j++){
        cout << v[j] << " ";
    }

    cout << "\n";
    return 0;
}
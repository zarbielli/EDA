#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,dif = 0;
    int it = 0;
    vector<int> chegada;
    vector<int> saida;
    vector<int> comp;

    while(1){
        cin >> n;
        if(n == 0)
            return 0;
        
        stack<int> pilha;

        for(int i = 0; i < n; i++){
            unsigned int entrada;
            cin >> entrada;
            saida.push_back(entrada);
            chegada.push_back(i);

            if(entrada == 0){
                cout << "\n";
                break;
            }
        }

        auto iterador = saida.end();
        while(it < n){

            if(pilha.top() == *iterador){
                comp.push_back(pilha.top());
                pilha.pop();
                iterador--;
            }
            else {
                pilha.push(chegada.back() );
                chegada.pop_back();
            } 
            it++;
        }
        
        for(int k = 0, l = n; k < n , l > 0; k++,l--){
            if(saida[k] != comp[l])
                dif++;
        }

        if(dif > 0)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
    
    return 0;
}
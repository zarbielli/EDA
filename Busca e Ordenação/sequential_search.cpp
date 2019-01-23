#include <bits/stdc++.h>

using namespace std;

int sequential_search(Vector &v, int valor) {
    for(unsigned int i = 0; i < v.size(); i++){
        if(v[i] == valor){
            return 1;
        }
    }
}
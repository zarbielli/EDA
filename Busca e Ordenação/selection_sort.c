selection_sort(vector<int> & v){
    for(int j = 0; j < v.size(); j++){
    int menor_pos = j;
        for(int i = j+ 1; i < v.size(); i++) {
            if(v[i] < menor_pos)
                menor_pos = i;
        }
        swap(v[menor_pos], v[j])
    }
};
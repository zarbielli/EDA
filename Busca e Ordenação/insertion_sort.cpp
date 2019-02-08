insert_sort(vector & v){
    for(int i = 1; i < v.size(); i++){
        int pos = v[i];
        for( int j = i; j > 0 and v[j-1] > pos; j--){
            v[j] = vec[j - 1];
        }
        v[j] = pos;
    }
}
#include <stdio.h>
#include <stdlib.h>

typedef struct Vector {
    int capacity;
    int size;
    int * elements;
}Vector;

Vector create(int capacity){
    Vector v;
    
    v.size = 0;
    v.capacity = capacity;
    v.elements = (int *) malloc(capacity*sizeof(int));
    return v;
}

void destroy(Vector * vector){
    if(!vector){
        vector->size = 0;
        vector->capacity = 0;
        free(vector->elements);
        vector->elements = NULL;
    }
}

void push_back(Vector * vector, int element){
    if(vector){
        if(vector->size == vector->capacity){
            vector->capacity = 2 * vector->capacity;
            vector->elements = (int *) realloc(vector->elements, vector->capacity*sizeof(int));
            vector->elements[vector->size] = element;
        }
        else {
            vector->elements[vector->size] = element;
        }
        vector->size++;
    }
}

void pop_back(Vector *vector){
    if(vector){
        vector->elements[vector->size] = 0;
        vector->size--;
    }

}


void erase(Vector * vector, int i){
    if(vector->size > i){
        for( int j = i; j < vector->size - 1; j++){
            vector->elements[j] = vector->elements[j+1];
        }
        vector->size--;
    }
    else {
        printf("Vector doesent have this position\n");
    }
}

void clear(Vector * vector){
    if(vector){
        for(int i = vector->size - 1; i >= 0; i--){
            vector->elements[i] = 0;
        }
        vector->size = 0;
    }
}

int back(Vector * vector) {
    if(vector){
        if(vector->size == 0){
            printf("Empty Vector\n");
        }
        else{
            return vector->elements[vector->size - 1];
        }
    }
}

int front(Vector * vector){
    if(vector){
        if(vector->size == 0){
            printf("Empty vector\n");
        }
        else{
            return vector->elements[0];
        }
    }
}

int at(Vector * vector, int i){
    if(vector){
        if(vector->size >= i){
            return vector->elements[i];
        }
        else{
            printf("Vector doesen't have this position\n");
        }
    }
}

unsigned int size(Vector * vector){
    return vector->size;
}

unsigned int capacity(Vector * vector){
    return vector->capacity;
}

void print(Vector * vector) {
    printf("[");
    for(int i = 0; i < size(vector); ++i) {
        printf("%d ", at(vector, i));
    }
    printf("]\n");
}

int main() {
    Vector v1 = create(10);

    print(&v1);

    for (int i = 0; i < 15; ++i) {
        push_back(&v1, i*2);
    }
    print(&v1);

    for (int i = 0; i < 3; ++i) {
        pop_back(&v1);
    }
    print(&v1);


    erase(&v1, 2);
    print(&v1);

    clear(&v1);
    print(&v1);
    

    for (int i = 0; i < 8; ++i) {
        push_back(&v1, i*3 + 1);
    }
    print(&v1);

    printf("v1[3] = %d\n", at(&v1, 3));
    printf("v1[4] = %d\n", at(&v1, 4));
    printf("v1[6] = %d\n", at(&v1, 6));
    printf("v1[7] = %d\n", at(&v1, 7));

    printf("\nfront: %d :: back: %d\n", front(&v1), back(&v1)); 

    destroy(&v1);

    return 0;
}

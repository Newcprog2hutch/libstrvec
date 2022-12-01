#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    int capacity;
    int size;
    int *arr;
}vector;

#define __init__(A) A.size = 0; A.capacity = 0
// macrooo


void push(vector*,int);
int pop_back(vector*);
int pop_front(vector*);
int* begin(vector*);
int* end(vector*);
int del(vector*,int);
#endif
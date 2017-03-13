#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int* tree;
int MaxSize;
int height;

void MakeTree(int);
void insert(int,int);
int AddEdge(int);
int MaxSum();
int FindTopEdge(int);
void PlusEdge();
void PrintTree();
int Result();

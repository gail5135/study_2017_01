#include "BT.h"

void MakeTree(int height) {
	tree = malloc((pow(2,height+1)-1));
	tree[0] = 0;
}

void insert(int position, int key) {
	printf("input %d key\n", MaxSize-1);
	for(; position < MaxSize; position++) {
		scanf("%d",&key);
		tree[position] = key;
	}
}

int AddEdge(int position) {
	int result = 0;
	while(position>0) {
		result += tree[position];
		if(position%2 == 1)
			position /= 2;
		else
			position = (position-1)/2;
	}
	return result;
}

int MaxSum() {
	int max = 0;
	for(int i = pow(2, height)-1; i < MaxSize; i++) {
		if(max < AddEdge(i)) {
			max = AddEdge(i);
		}
	}
	return max;
}
	
int FindTopEdge(int position) {
//	int min = 10000;
//	int k;
	while(position > 1) {
		/*if(min >= tree[position]) {
			min = tree[position];
			k = position;
		}*/
		if(position%2 == 0) {
			position = (position-1)/2;
		}
		else {
			position /= 2;
		}
	}
	if(position == 0) {
		position = 2;
	}
	return position;
}

void PlusEdge() {
	int max = MaxSum();
	for(int i = pow(2, height)-1; i < MaxSize; i++) {
		int k = FindTopEdge(i);
		while(max != AddEdge(i)) {
			tree[k]++;
			if(MaxSum() > max) {
				tree[k]--;
				if(i%2 == 0) {
					k = 2*k+2;
				}
				else {
					k = 2*k+1;
				}
			}
		}
	}
}

void PrintTree() {
	for(int i = 0; i < MaxSize; i++)
		printf("%d ",tree[i]);
	puts("");
}

int Result() {
	int result = 0;
	for(int i = 0; i < MaxSize; i++)
		result += tree[i];
	return result;
}	

#include "BT.h"

void MakeTree(int height) {
	tree = malloc((pow(2,height+1)-1));
	tree[0] = 0;
}

void insert(int position, int key) {
	tree[position] = key;
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
	

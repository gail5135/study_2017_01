#include "BT.h"

void main() {
//	int height;
	int key;	
	puts("put height");
	scanf("%d",&height);
	MaxSize = pow(2, height+1)-1;

	MakeTree(height);

	insert(1, key);
	

	PlusEdge();
	PrintTree();
	printf("result = %d", Result());
/*	for(int i = pow(2, height)-1; i < MaxSize; i++) {
		puts("1");
		printf("max : %d",max);
		int k = FindTopEdge(i);
		printf("  k : %d\n",k);
		puts("2");
		while(max != AddEdge(i)){
//			puts("2");
			//int k = FindMinEdge(i);
			tree[k]++;
			if(MaxSum() > max) {
				tree[k]--;
				if(i%2 == 0) {
					k = 2*k+2;
				}
				else {
					k = 2*k+1;
				}
			//	tree[k]++;
			}
		}
	}
	for(int i = 0; i < MaxSize; i++) {
		printf("%d",tree[i]);
	}
	for(int i = 0; i < MaxSize; i++) {
		result += tree[i];
	}
	printf("%d",result);*/
}	


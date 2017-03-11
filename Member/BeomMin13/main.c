#include "BT.h"

void main() {
	int height;
	int key;	
	int max = 0;
	int result = 0;

	puts("put height");
	scanf("%d",&height);
	MaxSize = pow(2, height+1)-1;

	MakeTree(height);

	for(int i = 1; i < MaxSize; i++) {
		scanf("%d",&key);
		tree[i] = key;
	}
	
//	puts("???");	

	for(int i = pow(2, height)-1; i < MaxSize; i++) {
//		puts("1");
		if(max < AddEdge(i))
			max = AddEdge(i);
//		puts("2");
	}
	printf("!!!! %d",max);
//	puts("3");


	for(int i = pow(2, height)-1; i < MaxSize; i++) {
		while(max > AddEdge(i)){
		//if(max > AddEdge(i)) {
			int position = i;
			int min = 10000;
			int k;
			while(position > 0) {
				if(min >= tree[position]) {
					min = tree[position];
					 k = position;
					
				}
				if(position%2 == 0) 
					position = (position-1)/2;
				else
					position /= 2;
			}
	
			while(max != AddEdge(i)) { 
//				tree[k]++;
				int j = i;
				if(i < MaxSize-pow(2, height-1)) {

				for(int j = i; j < MaxSize-pow(2, height-1); j++) {
				//while(j < MaxSize-pow(2,height-1)) {
					if(max == AddEdge(j)) {
						j = 0;	
						break;
					}
//					tree[k]++;
					
				}
				}
				else {
				puts("1");
				for(int j = i; j < MaxSize; j++) {
			//	while(j < MaxSize) {
					puts("2");
					if(max == AddEdge(j)) {
						j = 0;
						break;
					}
//					tree[k]++;
			//		j++;
				}
				}
				if(j==0) 
					break;
				tree[k]++;				
					
			//	if(AddEdge(i+1)==max)
			//		break;
			}
			
		}
	}
	for(int i = 0; i < MaxSize; i++) {
		printf("%d",tree[i]);
	}
	for(int i = 0; i < MaxSize; i++) {
		result += tree[i];
	}
	printf("%d",result);
}	


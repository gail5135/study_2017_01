#include <stdio.h>
#define Max 1000
int main(void){
  int q[Max];
  int n;
  int index=0;

  scanf("%d",&n);

  for(int i=0;i<n;i++){
    scanf("%d",&q[i]);
  }

  for(int i=0;i<n;i++){
    int k=0;

    for(int j=0;j<n;j++){
      if(q[i]<=q[j])
        k++;
    }

    if(k==q[i]){
        int count=0;
        for(int j=0;j<n;j++){
          if(k>q[j])
            count++;
        if(count<k)
          index = k;
        }
    }
  }

  printf("output :%d\n",index);
  return 0;
}

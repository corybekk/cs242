#include <stdio.h>

int G(int n){
  if(n==0) return 0;
  else return (n-G(G(n-1)));
}
main(){
  int x, i;
  printf("\nEnter a number: ");
  scanf("%d",&x);
  printf("\n");
  for (i=0; i<=x; i++){
    printf("G(%2d)=%2d ", i,G(i));
    if((i+1)%8==0) printf("\n");
  }
}

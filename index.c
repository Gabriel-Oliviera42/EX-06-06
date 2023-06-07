#include <stdio.h>

int main(void) {
  int N, I, IM;
  printf("coloque o numero: ");
  scanf("%d",&N);
  for (I=0;I<=N;I++){
    if ( (I % 2) > 0) {
      IM = I;
      printf("%d, ",IM);
    }
  }
  return 0;
}
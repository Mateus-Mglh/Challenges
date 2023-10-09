#include <stdio.h>

int main() {
  int h, i , j = 0;
  scanf("%d", &h);
    
  for(int i = 0; i < h; i = i + 1) {
    printf("\n");
    for(j = 0; j < h; j = j + 1) {
      if(i == h - 1 || j == 0 || i >= j)
        printf("*");
    }
  }
  return 0;
}
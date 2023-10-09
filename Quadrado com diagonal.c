#include <stdio.h>

int main() {
  int size;
  scanf("%d", &size);
  
  for(int i = 0; i < size; i = i + 1) {
    printf("\n");
    for(int j = 0; j < size; j = j + 1) {
      if(i == 0 || i == size - 1 || j == 0 || j == size - 1 || i == j)
        printf("* ");
        
      else
        printf("  ");
    }
  }
  return 0;
}
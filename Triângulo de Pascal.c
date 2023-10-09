#include <stdio.h>

void main() {
  int h;
  scanf("%d", &h);
  
  if(h > 0) {
    int triangle[h][h];
    for(int i = 0; i < h; i++) {
      for(int j = 0; j <= i; j++) {
        if(j ==0 || j == i) {
          triangle[i][j] = 1;
        }
        else { 
          triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
      }
    }
    
    for(int i = 0; i < h; i++) {
      for(int j = h - i; j >= 0; j--)
        printf("   ");
      
      for(int k = 0; k <= i; k++)
        printf("%5d ", triangle[i][k]);
      
      putchar('\n');
    }
    return;
  }
  else {
    printf("Dado invalido\n");
    printf("\nPressione qualquer tecla para continuar:");
    getch();
    system("cls");
    main();
  }
}
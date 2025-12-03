#include <stdio.h>

int main(){
  int a[3];
  int i;
  int x, y, z;

  for(i=0; i<3; i++){
    scanf("%d", &a[i]);
  }

  printf("The hex code is #");

  for(i=0; i<3; i++){
    x = a[i];
    y = x/16;
    z = x%16;

    if(x<10){
      printf("%d", y);
    }
    else if (y == 10) { printf("A"); }
    else if (y == 11) { printf("B"); }
    else if (y == 12) { printf("C"); }
    else if (y == 13) { printf("D"); }
    else if (y == 14) { printf("E"); }
    else if (y == 15) { printf("F"); }

    if(z<10){
      printf("%d", z);
    }
    else if (z == 10) { printf("A"); }
    else if (z == 11) { printf("B"); }
    else if (z == 12) { printf("C"); }
    else if (z == 13) { printf("D"); }
    else if (z == 14) { printf("E"); }
    else if (z == 15) { printf("F"); }
   }
  printf("\n");

  return 0;
}




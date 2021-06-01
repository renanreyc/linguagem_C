/*
 * Autor: Renan Rey
 * Data: maio/2021
 */

#include <stdio.h>

int main(void) {
  int i, dia1, dia2, dia3;
  scanf("%d %d %d", &dia1, &dia2, &dia3);

  if(dia1 > dia2 && dia2 <= dia3){
    printf(":)\n");

  }else if(dia1 < dia2 && dia2 >= dia3){
    printf(":(\n");

  }else if(dia1 < dia2 && (dia3-dia2)<(dia2-dia1)){
    printf(":(\n");

  }else if(dia1 < dia2 && (dia3-dia2)>=(dia2-dia1)){
    printf(":)\n");

  }else if(dia1 > dia2 && (dia1-dia2)>(dia2-dia3)){
    printf(":)\n");

  }else if(dia1 > dia2 && (dia1-dia2)<=(dia2-dia3)){
    printf(":(\n");
  
  }else if(dia1 == dia2){
    if(dia2<dia3){
      printf(":)\n");
    }else{
      printf(":(\n");
    }
  }
  return 0;
}
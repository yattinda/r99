#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>

//56
//ファイルを読み込み、戦闘をfscanfで読み込んだものを返した
int head(void){
  FILE* fp;
  int readnum = 0;

  fp = fopen("numbers.txt", "r");
  fscanf(fp, "%i", &readnum);
  fclose(fp);

  return readnum;
}

int main(void){
  printf("%i\n", head());
}

//57

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
// fgets()で改行ごとにNULLが返るまでcountを足していった
int lines(void) {
  FILE* fp;
  int count;
  char c_num[100];

  fp = fopen("numbers.txt", "r");
  for (count=0; fgets(c_num, 100, fp); ) {
    count++;
  }
  fclose(fp);

  return count;
}

int main(void) {
  printf("%i\n", lines());
  return 0;
}

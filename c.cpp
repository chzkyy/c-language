#include <stdio.h>
#include <string.h>
int main(){
 char dna1[200][200], dna2[200][200];
 int x,i;
 FILE* files = fopen("testdata.in", "r");
 fscanf(files, "%d", &x);
 for(int i=0 ; i<x ; i++){
  fscanf(files, "%s %[^\n]\n", &dna1[i], &dna2[i]);
 }
 fclose(files);
 for(i=0 ; i<x ; i++){
  char *a1;
  char *a2;
  char *a3;
  int j=0;
  int k=0;
  a1 = dna1[i]; a2 = dna2[i];
  int flag1 = 0, flag2=0;
  int panjang = strlen(dna2[i]);
  int panjang2 = strlen(dna1[i]);
  for(j = 0; j < panjang2; j++){
      if(*a1 == *a2){
          a3 = a1;
          for(k = 0; k < panjang; k++){
              if(*a3 == *a2){
            a3++; 
      a2++;
              }else break;
          }
          a2 = dna2[i];
          if(k == panjang){
           if(flag1!=0) printf(" "); flag2 = 1;
              printf("%d", j);
              flag1 = 1;
          }
      }
      a1++;
  }
  if(flag2 == 0){
   printf("N/A");
  }
  
  puts("");
 }
}

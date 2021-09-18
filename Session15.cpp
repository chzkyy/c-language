#include<stdio.h>
#include<string.h>


void toupper(char s[100]){
	int i=0;
	while(s[i] !='\0'){
		if(s[i]>='a' && s[i]<='z'){
			s[i] = s[i] - 32;
		}
		i++;
	}
}

void tolower(char s[100]){
	int i=0;
	while(s[i] !='\0'){
		if(s[i]>='A' && s[i]<='Z'){
			s[i] = s[i] + 32;
		}
		i++;
	}
}


int main(){
  char s[100];

  printf("Masukkan text	: ");
  scanf("%[^\n]",&s);
  toupper(s);
  printf("UPPERCASE	: %s\n",s);
  tolower(s);
  printf("Lowercase	: %s\n",s);

  return 0;
}

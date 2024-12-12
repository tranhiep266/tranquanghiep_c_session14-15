#include <stdio.h>
#include <string.h>

void inputString(char word[50]){
	printf("Nhap vao mot chuoi: ");
	fgets(word,50,stdin);
	fputs(word,stdout);
}

void countCharacters(char word[50]){
	int count=0;
	int length=strlen(word);
	for(int i=0;i<length;i++){
		if((word[i]>='A'&&word[i]<='Z')||(word[i]>='a'&&word[i]<='z')){
			count++;
		}
	}
	printf("So ky tu la chu cai trong chuoi: %d",count);
}

int main(){
	char word[50];
	inputString(word);
	countCharacters(word);
	return 0;
}

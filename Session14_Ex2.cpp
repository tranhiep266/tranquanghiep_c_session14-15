#include <stdio.h>
#include <string.h>

void inputString(char word[50]){
	printf("Nhap vao mot chuoi: ");
	fgets(word,50,stdin);
}

void outputString(int length, char word[50]){
	length=strlen(word);
	for(int i=0;i<length;i++){
		printf("%4c",word[i]);
	}
}

int main(){
	int length;
	char word[50];
	inputString(word);
	outputString(length,word);
	return 0;
}

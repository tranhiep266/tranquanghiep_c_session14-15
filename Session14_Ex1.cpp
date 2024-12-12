#include <stdio.h>
#include <string.h>

void inputString(char word[50]){
	printf("Nhap vao mot chuoi bat ki: ");
	fgets(word,50,stdin);
}

void outputString(char word[50]){
	fputs(word,stdout);
}

void lengthString(int length, char word[50]){
	length=strlen(word);
	printf("Do dai chuoi vua nhap: %d",length);
}

int main(){
	int length;
	char word[50];
	inputString(word);
	outputString(word);
	lengthString(length,word);
	return 0;
}

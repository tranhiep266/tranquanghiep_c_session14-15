#include <stdio.h>
#include <string.h>

void inputString(char word[50]){
	printf("Nhap gia tri cho chuoi: ");
	fgets(word,50,stdin);
	fputs(word,stdout);
}

void reverseString(int length, char word[50]){
	length=strlen(word);
	char temp;
	for(int i=0;i<length/2;i++){
		temp=word[i];
		word[i]=word[length-i-1];
		word[length-i-1]=temp;
	}
	printf("Dao nguoc chuoi: %s",word);
}

int main(){
	int length;
	char word[50];
	inputString(word);
	reverseString(length,word);
	return 0;
}

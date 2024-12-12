#include <stdio.h>
#include <string.h>

void createString(char word[50]){
	printf("Nhap vao mot chuoi: ");
	fgets(word,50,stdin);
	fputs(word,stdout);
}

void countCharacters(char find,char word[50]){
	int count=0;
	int length=strlen(word);
	printf("Tim ky tu: ");
	scanf("%c",&find);
	for(int i=0;i<length;i++){
		if(find==word[i]){
			count++;
		}
	}
	printf("So lan xuat hien cua %c: %d",find,count);
}

int main(){
	char word[50],find;
	createString(word);
	countCharacters(find,word);
	return 0;
}

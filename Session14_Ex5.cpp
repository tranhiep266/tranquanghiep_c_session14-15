#include <stdio.h>
#include <string.h>

void inputString(char word[50]){
	printf("Nhap vao mot chuoi: ");
	fgets(word,50,stdin);
	fputs(word,stdout);
}

void countString(char word[50]){
	int length=strlen(word);
	int count=0;
	for(int i=0;i<length;i++){
		if(word[i]==' '||word[i]=='\n'){
			count++;
		}
	}
	printf("So tu trong chuoi: %d",count);
}

int main(){
	char word[50];
	inputString(word);
	countString(word);
	return 0;
}

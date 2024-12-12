#include <stdio.h>
#include <string.h>

void createString(char word[50]){
	printf("Nhap vao mot chuoi: ");
	fgets(word,50,stdin);
	fputs(word,stdout);
}

void count(char word[50]){
	int length=strlen(word);
	int count1=0,count2=0,count3=0;
	for(int i=0;i<length;i++){
		if((word[i]>='A'&&word[50]<='Z')||(word[i]>='a'&&word[i]<='z')){
			count1++;
		}else if(word[i]>='0'&&word[i]<='9'){
			count2++;
		}else{
			count3++;
		}
	}
	printf("So ky tu chu cai la: %d\n",count1);
	printf("So ky tu chu so la: %d\n",count2);
	printf("So ky tu dac viet la: %d\n",count3-1);
}

int main(){
	char word[50];
	createString(word);
	count(word);
	return 0;
}

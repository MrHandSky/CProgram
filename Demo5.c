#include <stdio.h>
void main(){
	char c = 'A';
	if(c >= 'A' && c <= 'Z'){
		printf("这是大写字母");
	}else if(c >= 'a' && c <= 'z'){
		printf("这是小写字母");
	}	else{
		printf("这是其他字符");
	}
}
#include "stdio.h"
void main(){
	int month = 5;
	switch(month){
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:printf("This month has 31 days");break;
		case 2:printf("This month has 28 days or 29 days");break;
		case 4:case 6:case 9:case 11:printf("This month has 30 days");break;
		default:printf("This is error month");
	}
}
#include <stdio.h>
#include <conio.h>
#include <string.h>

/* Coded By. roissy */

void copy(char *p1,char *p2){
	int i; 
 	for(i=0;i<strlen(p2);i++) 
	*(p1+i)=*(p2+i); 
	*(p1+i+1)=NULL; 
} 
void main(void){
	char str[100]="Blue Code" ; 
	copy(str,"Red Code"); 
	printf("%s\n",str); 
	getch(); 
}

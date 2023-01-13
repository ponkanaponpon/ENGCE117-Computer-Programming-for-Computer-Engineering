#include<stdio.h>
#include<string.h>
char *gettext( ) ;
int main(){
	char *str ;
	str = gettext() ;
	printf("\n%s\n", str) ;
	return 0 ;
}
char *gettext( ) {
	char *text = new char[20] ;
	gets(text) ;
	return text ;
}

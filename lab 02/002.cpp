#include<stdio.h>
#include<string.h>
void gettext( char **text ) ;
int main(){
	char *str ;
	gettext(&str) ;
	printf("\n%s\n", str) ;
	return 0 ;
}
void gettext( char **text ) {
	*text = new char[20] ;
	gets(*text) ;
}

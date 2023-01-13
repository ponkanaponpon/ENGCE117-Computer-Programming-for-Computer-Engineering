#include<stdio.h>
#include<string.h>
char *gettext( ) ;
int main(){
	int wordNumber ;
	printf ( "Input Words number : " ) ;
	scanf( "%d", &wordNumber ) ;
	char *str ;
	getchar() ;
	for ( int i = 0 ; i < wordNumber ; i++) {
		printf( "%d'Word is :\t", i+1 );
		str = gettext() ;
		printf("Result :\t%s\n\n", str) ;		
	}
	return 0 ;
}
char *gettext( ) {
	char *text = new char[15] ;
	gets(text) ;
	return text ;
}

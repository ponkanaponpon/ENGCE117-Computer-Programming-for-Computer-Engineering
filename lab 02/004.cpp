#include<stdio.h>
#include<string.h>
int main(){
	int i ;
	printf( "Input string limit = " ) ;
	scanf( "%d", &i) ;
	char *str = new char[i] ;
	getchar() ;
	printf("Get String : ") ;
	gets(str) ;
	printf("\n%s\n", str) ;
	return 0 ;
}

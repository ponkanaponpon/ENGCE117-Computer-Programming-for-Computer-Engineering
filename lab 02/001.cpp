#include<stdio.h>
#include<string.h>
int main(){
	char text1[6] = "Hello" ;
	for ( int i = 0 ; i < strlen(text1) ; i++) {
		printf( "%d's character : %c\n", i + 1, text1[i] ) ;
	}
	printf("%d's character :\\0", strlen(text1) + 1) ;
	return 0 ;
}

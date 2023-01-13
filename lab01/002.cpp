#include<stdio.h>

int main(){
	
	
	int var[100][4] ;
	int (*a)[4] = var ;
	
	
	for ( int i = 0 ; i < 10 ; i++ ){
		for ( int j = 0 ; j < 4 ; j++ ){
			var[i][j] = i*10 + j ;
			printf( "%d\t", var[i][j] ) ;
		}
		printf( "\n" ) ;
	}
	a[1][2] = 99 ; 
	printf( "--------------\n" ) ;
	for ( int i = 0 ; i < 10 ; i++ ){
		for ( int j = 0 ; j < 4 ; j++ ){
			printf( "%d\t", var[i][j] ) ;
		}
		printf( "\n" ) ;
	}

	return 0 ;
}

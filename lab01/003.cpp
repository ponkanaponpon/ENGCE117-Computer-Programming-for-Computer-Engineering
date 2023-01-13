#include<stdio.h>

int add_data( int a) {
	int n ;
	int sum = 0 ;
	printf( "Number of input sum :" ) ;
	scanf( "%d", &n ) ;
	for ( int i = 0 ; i < n ; i++ ) {
		printf ( "Input Number'%d : ", i+1 ) ;
		scanf( "%d", &a ) ;
		sum = sum + a ;
	}
	return sum ;
}

int operat( int a, int (*function) ( int ) ) {
	return (*function) ( a ) ;
}

int main(){
	int a ;
	printf ( "sum = %d ", operat( a, add_data) ) ;
	return 0 ;
}

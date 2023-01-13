#include<stdio.h>
int sumit(int a, int b){
	for ( int i = 1 ; i <= b ; i++ ){
		a = a*i ;
	}
	return a ;
}
int main() {
	int a = 10 ;
	printf( "first value of this parameter : %d", a ) ;
	printf( "\nTotal from function : %d", sumit( a, 5) ) ;
	return 0 ;
}

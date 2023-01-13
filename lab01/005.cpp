#include<stdio.h>
void sumit(int &a, int b){
	for ( int i = 1 ; i <= b ; i++ ){
		a = a*i ;
	}
}
int main() {
	int a = 10 ;
	printf( "first value of this parameter : %d", a ) ;
	sumit( a, 5) ;
	printf( "\nAfter function : %d", a ) ;
	return 0 ;
}

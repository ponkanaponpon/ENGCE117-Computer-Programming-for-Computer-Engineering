#include <stdio.h>

long SumLoop( int ) ;
long SumRecur( int ) ;

int main() {
 printf( "SumLoop(n) = %d", SumLoop( 10 ) ) ;
 printf( "SumRecur(n) = %d", SumRecur( 10 ) ) ;
 return 0 ;
}//end function

long SumLoop( int x ) {
	int sum = 0 ;
	for(int i = 1 ; i <= x ; i++ ){
		sum = sum + i ;
	}
	return sum ;
}

long SumRecur( int x ) {
	int sum = 0 ;
	if ( x > 0){
		return x + SumRecur( x - 1 ) ;
	}
	return 0 ;
}

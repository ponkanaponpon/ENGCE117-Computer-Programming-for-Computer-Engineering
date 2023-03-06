#include <stdio.h>

void TowerHanoi( int m, int i, int j ) ;

int main() {
 TowerHanoi( 3, 1, 3 ) ;
 return 0 ;
}//end function

void TowerHanoi( int m, int i, int j ) {
	if ( m > 0 ) {
		int k = 6 - i - j ;
		TowerHanoi( m - 1, i, k ) ;
		printf( "Move disc %d from %d to %d\n", m, i, j ) ;
		TowerHanoi( m - 1, k, j ) ;
	}
}


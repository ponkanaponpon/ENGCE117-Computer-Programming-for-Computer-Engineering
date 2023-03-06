#include <stdio.h>

int BinSearch( int*, int, int) ;

int main() {
 int data[ 6 ] = { 1, 2, 3, 4, 5, 7 } ;
 int n = sizeof(data)/sizeof(data[0]) , find = 5 ;
 int pos = BinSearch( data, n, find ) ;
 return 0 ;
}//end function

int BinSearch( int *data, int n, int find ) {
	int pos = 0 ;
	for ( int i = 0 ; i < n ; i++) {
		if ( data[i] == find ){
			printf( "Found %d at %d", find, pos ) ;
			break;
		}
		pos++ ;
	}
	return pos ;
}

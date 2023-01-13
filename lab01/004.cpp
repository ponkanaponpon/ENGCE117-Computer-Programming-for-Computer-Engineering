#include<stdio.h>

int main() {
	int row, col ;
	printf( "Input your row and column: " ) ;
	scanf("%d %d", &row, &col) ;
	
	int *a ;
	a = new int( row*col ) ;
	
	for (int i = 0 ; i < row ; i++) {
		for (int j = 0 ; j < col ; j++ ) {
			printf( "a[%d][%d] = ", i, j ) ;
			scanf( "%d", &a[ i * col + j ] ) ;
		}
	}
	for ( int i = 0 ; i < row*col ; i++){
	printf("%d\t", a[i] ) ;
		if ( ( i + 1 )%col == 0 ){
			printf( "\n" ) ;
		}
	}
		
	return 0 ;
}

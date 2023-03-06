#include <stdio.h>
int *KnapsackGreedy( int *w, int *v, int n, int wx ) ;

int main() {
 int n = 5, wx = 11 ;
 int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
 int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
 int *x = KnapsackGreedy( w, v, n, wx ) ;
 for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
 return 0 ;
}//end function

int *KnapsackGreedy( int *w, int *v, int n, int wx ) {
	int i, j, weight, z ;
	int *x = new int[n] ; int *y = new int[n] ;
	float *vw = new float[n] ;
	for ( int i = 0 ; i < n ; i++){
		vw[ i ] = float(v[i])/float(w[i]);
		x[ i ] = 0 ;
		y[ i ] = 1 ;	
	}
	weight = 0 ; z = n ;
	while ( weight < wx && z > 0 ) {
		i = 0 ;
		for( j = 0 ; j < n ; j++ ) {
			if( y[ j ] == 1 ){
				if ( i <= 0 || vw[ i ] < vw [ j ] ){
					i = j ;
				} 
			}
		}
		y [ i ] = 0 ;
		if ( weight + w[i] <= wx ){
			x[ i ] = 1 ;	
			weight += w[ i ] ;
		}
		z--;	
	}
	return x ;
}

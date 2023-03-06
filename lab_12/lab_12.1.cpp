#include <stdio.h>

int *Dijkstra( int *L, int n ) ;

int main() {
 int n = 5, i = 0, j = 0, *d, *g ;
 g = new int[ n * n ] ;
 for( i = 0 ; i < n ; i++ )
  for( j = 0 ; j < n ; j++ )
   g[ i * n + j ] = -1 ;

 g[ 0 * n + 1 ] = 100 ; g[ 0 * n + 2 ] = 80 ;
 g[ 0 * n + 3 ] = 30 ; g[ 0 * n + 4 ] = 10 ;
 g[ 1 * n + 2 ] = 20 ; g[ 3 * n + 1 ] = 20 ;
 g[ 3 * n + 2 ] = 40 ; g[ 4 * n + 3 ] = 10 ;

 d = Dijkstra( g, n ) ;
 for( i = 0 ; i < n - 1 ; i++ )
  printf( "%d ", d[ i ] ) ;
 return 0 ;
}//end function

int *Dijkstra( int *L, int n ) {
	int *d = new int[ n - 1 ] ;
	int *c = new int[ n - 1] ;
	int i, j, v, dv ; 
	for (i = 0 ; i < n - 1 ; i++ ){
		d[i] = L[ (i+1) ] ;
		c[i] = 1 ;
	}
	for( i = 0 ; i < n - 2 ; i ++ ){
		v = -1 ;
		for( j = 0 ; j < n - 1 ; j++ ){
			if ( c[j] == 1 ){
				if ( v < 0 || d[j] < d[v] ) {
					v = j ;
				}
			}	
		}
		c[v] = 0 ;
		for( j = 0 ; j < n-1 ; j++ ){
			if( c[j] == 1 && L[ ( v + 1 )*n + ( j + 1 ) ] >= 0 ) {
				dv = d[v] + L[ ( v + 1)*n + ( j + 1) ] ;
				if( dv < d[j] ){
					d[ j ] = dv ;
				}
			}
		}
	}
	return d ;
}

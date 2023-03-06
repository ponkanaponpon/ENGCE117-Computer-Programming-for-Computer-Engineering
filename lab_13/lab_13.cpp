#include <stdio.h>

int *KnapsackDP( int *w, int *v, int n, int wx ) ;

int main() {
 int n = 5 , wx = 11 ;
 int w[ 5 ] = { 1, 2, 5, 6, 7 } ;
 int v[ 5 ] = { 1, 6, 18, 22, 28 } ;
 int *x ;
 x = KnapsackDP( w, v, n, wx ) ;
 for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
 return 0 ;
}//end function

int *KnapsackDP(int *w, int *v, int n, int wx) {
  int B[n + 1][wx + 1];
  for (int i = 0 ; i < n + 1 ; i++ ){
  	for( int j = 0 ; j < wx + 1 ; j++ ){
  		B[ i ][ j ] = 0 ;
	  }  
  }

  for (int i = 1; i <= n; i++) {
    for (int j = 0; j <= wx; j++) {
      B[i][j] = B[i - 1][j];
      if (j >= w[i - 1]) {
        int val = B[i - 1][j - w[i - 1]] + v[i - 1];
        if (val > B[i][j]) {
          B[i][j] = val;
        }
      }
    }
  }

  int *x = new int(n);
  for (int i = 0 ; i < n ; i++ ){
  		x[ i ] = 0 ;
  }

  int j = wx;
  for (int i = n; i >= 1; i--) {
    if (B[i][j] != B[i - 1][j]) {
      x[i - 1] = 1;
      j -= w[i - 1];
    }
  }

  return x;
}

#include <stdio.h>

int main()
{
    int loop ;
    int same ;
    int holder, mover ; 
    int collector[300] ;
    printf( "Input number of element to be install array : " ) ;
    scanf( "%d", &loop ) ;
    printf( "-----\n" ) ;
    for ( int i = 0 ; i < loop ; i++ ) {
        printf( "Element[%d] = ", i + 1 ) ;
        scanf( "%d", &collector[i] ) ;
    }
    for ( int j = 0 ; j < loop - 1 ; j++) {
        for ( int k = j + 1 ; k < loop ; k++ ) {
            if ( collector[k] < collector[j] ) {
                holder = collector[k] ;
                collector[k] = collector[j] ;
                collector[j] = holder ;
            }
        }
    }
    printf( "-----\n" ) ;
    for ( int exiter = 0 ; exiter < loop ; exiter++ ) {
        same = 0 ;
        for ( int i = 0  ; i < loop ; i++) {
            if ( collector[exiter] == collector[i] ) {
                same++;
            }
        }
        if ( collector[exiter] != collector[exiter+1] ){	
			printf( "%d -> %d\n", collector[exiter], same ) ;
		}
        
    }
    return 0 ;
}

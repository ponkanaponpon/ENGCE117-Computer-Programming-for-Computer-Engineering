#include<stdio.h>
#include<string.h>
#include<math.h> 
#include<stdlib.h> 

void operatcomma( int value ) {
    char cover[1000] ;
    itoa( value , cover, 10 ) ;
    int num = strlen(cover) ;
    int pos = 0 ;
    int move = 3 ;
    int comber=2 ;
    char re_output[1000] ;
    for ( int i = 0 ; i < num  ; i++ ) {
        re_output[pos] = cover[ num-1-i ] ;
        pos++ ;
        if (comber == num-1 && i == num-1 ) {
        	break ;
		}
        if ( pos%move == 0 ) {
            re_output[pos] = ',' ;
            pos ++ ;
            move = move + 4 ;
            comber = comber + 3 ;
        }
    }
    for (int j = 1 ; j <= pos ; j++ ){
        printf("%c", re_output[pos - j]) ;
    }
}

int main() {
    int a = 0 ;
    int N, holder ;
    printf( "User Input : ");
    scanf( "%d", &N ) ;
    printf( "----");
    printf( "\nSeries = ");
    for ( int i = 1 ; i <= N ; i++ ) {
        holder = 1 ;
        for ( int j = 1 ; j <= i; j++ ) {
            holder = holder*10 ;
        }
        a = a + holder - 1 ;
        printf( "%d ", holder - 1 ) ;
        if ( i != N )
        {
            printf( "+ " ) ;
        }
    }
    printf("\nSum = ");
    operatcomma( a ) ;
    return 0 ;
}

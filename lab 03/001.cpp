#include<stdio.h>
#include<string.h>

struct user{
	char 	name[30] ;
	char 	email[30] ;
	int 	number 	;
}typedef us;

int main() {
	us myuser ;
	printf( "Your name : " ) ;
	gets(myuser.name) ;
	printf( "Your email : " ) ;
	gets(myuser.email) ;
	printf( "Your number : " ) ;
	scanf( "%d", &myuser.number ) ;
	printf( "\nThis is your information\n") ;
	printf( "#%d name : %s\te-mail : %s ", myuser.number, myuser.name, myuser.email ) ;
	return 0 ;
}

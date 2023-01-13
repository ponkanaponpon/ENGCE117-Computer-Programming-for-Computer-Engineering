#include<stdio.h>
#include<string.h>

struct user{
	char 	name[30] ;
	char 	email[30] ;
	int 	number 	;
}typedef us;

us getdata(int position) {
	getchar() ;
	us data ;
	printf( "%d's data\nYour name : ", position + 1 ) ;
	gets(data.name) ;
	printf( "Your email : " ) ;
	gets(data.email) ;
	printf( "Your number : " ) ;
	scanf( "%d", &data.number ) ;
	printf( "\n" ) ;
	return data ;
}

int main() {
	us *myuser ;
	int data, pointdata;
	printf( "Input datas number : " ) ;
	scanf( "%d", &data ) ;
	myuser = new us[data] ;
	for ( int i = 0 ; i < data ; i++ ){
		myuser[i] = getdata(i) ;
	}
	printf( "Select data to read : " ) ;
	scanf( "%d", &pointdata ) ;
	printf( "\nThis is your information\n" ) ;
	printf( "#%d name : %s\te-mail : %s ", myuser[pointdata-1].number, myuser[pointdata-1].name, myuser[pointdata-1].email ) ;
	return 0 ;
}

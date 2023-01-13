#include<stdio.h>
#include<string.h>

struct user{
	char 	name[30] ;
	char 	email[30] ;
	int 	number 	;
}typedef us;

us getdata(us *data, int number) {
	for ( int i = 0 ; i < number ; i++ ){
		getchar() ;
		printf( "%d's data\nYour name : ", i + 1 ) ;
		gets(data[i].name) ;
		printf( "Your email : " ) ;
		gets(data[i].email) ;
		printf( "Your number : " ) ;
		scanf( "%d", &data[i].number ) ;
		printf( "\n" ) ;
	}
}

int main() {
	us *myuser, *pointdata ;
	int data, position;
	printf( "Input datas number : " ) ;
	scanf( "%d", &data ) ;
	myuser = new us[data] ;
	getdata( myuser, data) ;
	printf( "Select data to read : " ) ;
	scanf( "%d", &position ) ;
	pointdata = &myuser[position-1] ;
	printf( "\nThis is your information\n" ) ;
	printf( "#%d name : %s\te-mail : %s ", pointdata->number, pointdata->name, pointdata->email ) ;
	return 0 ;
}

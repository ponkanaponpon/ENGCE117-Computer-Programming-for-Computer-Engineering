#include<stdio.h>
#include<string.h>

struct user{
	char 	name[30] ;
	char 	email[30] ;
	int 	number 	;
}typedef us;

void getdata(us *data, int number) {
	for ( int i = 0 ; i < number ; i++ ){
		getchar() ;
		printf( "%d's data\nYour name : ",i+1 ) ;
		gets(data[i].name) ;
		printf( "Your email : " ) ;
		gets(data[i].email) ;
		printf( "Your number : " ) ;
		scanf( "%d", &data[i].number ) ;
		printf( "\n" ) ;
	}
}

int main() {
	us *myuser ;
	int data, pointdata;
	printf( "Input datas number : " ) ;
	scanf( "%d", &data ) ;
	myuser = new us[data] ;
	getdata( myuser, data) ;
	printf( "Select data to read : " ) ;
	scanf( "%d", &pointdata ) ;
	printf( "\nThis is your information\n" ) ;
	printf( "#%d name : %s\te-mail : %s ", myuser[pointdata-1].number, myuser[pointdata-1].name, myuser[pointdata-1].email ) ;
	return 0 ;
}

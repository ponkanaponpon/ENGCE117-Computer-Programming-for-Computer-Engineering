#include <stdio.h>
#include <string.h>


struct studentNode {
 char name[ 20 ] ;
 int age ;
 char sex ;
 float gpa ;
 struct studentNode *next ;
} ;

class LinkedList {
 protected :
  struct studentNode *start, **now ;
 public :
  LinkedList() ; 
  ~LinkedList() ; 
  void InsNode( char n[], int a, char s, float g ) ; 
  void DelNode() ; 
  GoNext() ; 
  virtual void ShowNode()  ; 
} ; //end class

LinkedList :: LinkedList () {
	this -> start = NULL ;
	(this->now) = &(this->start) ;
}

LinkedList :: ~LinkedList () {
	printf("\nreturn memery by 1 list.") ;
}

void LinkedList :: InsNode( char n[], int a, char s, float g ) {
	if ( (*this->now) == NULL ){
		(*this->now) = new struct studentNode ;
		(*this->now)->next = NULL ;
		strcpy((*this->now)->name, n) ;
		(*this->now)->age = a ;
		(*this->now)->sex = s ;
		(*this->now)->gpa = g ;
	}
	else {
		struct studentNode *holder ;
		holder = new struct studentNode  ;
		strcpy((holder)->name, n) ;
		(holder)->age = a ;
		(holder)->sex = s ;
		(holder)->gpa = g ;
		(holder)->next = (*this->now) ;
		(*this->now) = holder ;
	}
}

void LinkedList :: DelNode() {
	struct studentNode *holder = new struct studentNode ;
	holder = (*this->now)->next ;
	(*this->now) = holder ;
}

LinkedList :: GoNext() {
	(this->now) = &(*this->now)->next ;
}

void LinkedList :: ShowNode() {
  	printf( "%s ", (*this->now)->name ) ;
  	printf( "%d ", (*this->now)->age ) ;
  	printf( "%c ", (*this->now)->sex ) ;
  	printf( "%.2f \n", (*this->now)->gpa ) ;
}

class NewList : public LinkedList {
 public :
  GoFirst() ; 
  virtual void ShowNode() ; 
} ; //end class

NewList :: GoFirst() {
	(this->now) = &(this->start) ;
}

void NewList :: ShowNode() {
 struct studentNode *holder = this->start ;
 while( holder != NULL ) {
  	printf( "%s ", holder->name ) ;
  	holder = holder->next ;
 }//end while
 printf( " \n" ) ;
}

int main() {
 LinkedList listA ;
 NewList listB ;
 LinkedList *listC ;
 
 listA.InsNode( "one", 1, 'A', 1.1 ) ;
 listA.InsNode( "two", 2, 'B', 2.2 ) ;
 listA.InsNode( "three", 3, 'C', 3.3 ) ;
 listA.GoNext() ;
 listA.ShowNode() ;

 listB.InsNode( "four", 4, 'D', 4.4 ) ;
 listB.InsNode( "five", 5, 'E', 5.5 ) ;
 listB.InsNode( "six", 6, 'F', 6.6 ) ;
 listB.GoNext() ;
 listB.DelNode() ;
 listB.ShowNode() ;

 listC = &listA;
 listC->GoNext() ;
 listC->ShowNode() ;

 listC = &listB ;
 listC->ShowNode() ;

 return 0 ;
}//end function


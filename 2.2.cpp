#include <stdio.h>

char* reverse( char str1[]) {
	
	int i = 0;
	int j = 0;
	int length = 50;
	char holdname;
	char str2[50];
	int show1 = 0;
	int show2 = 0;
	
	for(i = length ; i >= 0; i-- ){
			
			holdname = str1[i];
			str2[j] = holdname;
			j++;
	}//end for
	
	printf("\n str 1 = ");
	
	while(str1[show1] != '/0' && show1 <= 50){
		
		printf("%c",str1[show1]);
		show1 ++;
		
	}
	
	printf("\n str 2 = ");
	
	while(str2[show2] != '/0' && show2 <= 50){
		
		printf("%c",str2[show2]);
		show2 ++;
		
	}
		
		
}
	
	


int main() {
 //char text[ 50 ] = "I Love You" ;
  char text[ 50 ] = "hello word" ;
 char *out ;
 out = reverse( text ) ;
 
 
}//end function


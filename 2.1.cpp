#include <stdio.h>

void reverse( char str1[], char str2[] );


int main() {
 char text[ 50 ] = "I Love You" ;
 //char text[ 50 ] = "Hello world" ;
 char out[ 50 ] ;
 reverse( text, out ) ;
}//end function


void reverse( char str1[], char str2[] ){
	
	int i = 0;
	int j = 0;
	char holdname;
	int lenght = 10;
	
	
	//function sawap char form back to font
	for(i = lenght; i>=0; i--){
	
			holdname = str1[i];
			str2[j] = holdname;
			
			j++;	
	}//end function
	
	
	//function show str1
	printf("str 1 = ");
	for(i=0; i<lenght;i++){
		
		printf("%c",str1[i]);
		
	}
	

	
	//function show str2
	printf("\nstr 2 = ");
	for(j=1; j<=lenght;j++){
	
		printf("%c",str2[j]);
		
	}
	
	
}
	

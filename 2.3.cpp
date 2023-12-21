#include <stdio.h>

void explode( char str1[],char splitter,char str2[][10], int *count );
		
		
		
	

	
 

	




int main() {
	char out[ 20 ][ 10 ] ;
	int num ;
	explode( "I/Love/You",'/',out,&num ) ;
	return 0 ;
}//end function



void explode( char str1[],char splitter,char str2[][10], int *count ){
	
	int i = 0;
	int j = 0;
	int showtext = 0;
	int len = 10;
	int lenght = 0;
	
	 //show str 1 simple
	printf(" str 1 = ");
	for( showtext = 0 ; showtext < len; showtext++ ){
		
		printf("%c",str1[showtext]);
	}
	
	printf("\n splitter = %c \n ",splitter);
	
	
	
	while(str1[i] != '\0'){   //   text = I/Love/You
		
		
		if( str1[i] == splitter ){
			
		
			(*count) ++;
			j = i+1;
			
			printf("\n str2[%d] = " ,*count);
			
			while(str1[j] != '/' && str1[j] != '\0'){
				 
			str2[ *count ][ j ] = str1[j];
			
			printf("%c",str2[ *count ][ j ]);
			i++;
			j++;
		
			}
		
			
		} else {
			
			printf("\n str2[%d] = " ,*count);
			
			while(str1[j] != '/' && str1[j] != '\0'){
				
				str2[ *count ][ j ] = str1[j];
			
				printf("%c",str2[ *count ][ j ]);
				j++;
			}
	
		}
		
	
		i++;
		
	}//end while
	
	
	printf("\n count = %d",*count + 1);

}// end function
		


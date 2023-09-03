#include<stdio.h>



int main(void){
	
	//1,2,3,4, triangle
//	void traingle(int height){
//		int i, j, k;
//	    for (i = 1; i <= height; i++) {
//	
//	        for (k=height-1; k>=i;k--){
//	            printf(" ");
//	        }
//	
//		    for (j = 1; j <= 2 * i - 1; j++) {
//		        if (j % 2 == 1) {
//		            printf("*");
//		        } else {
//		            printf(" ");
//		        }
//		    }
//		    printf("\n");
//	
//	
//	    }
//	}
	
	
	//1,3,5 triangle
	void traingle(int height){
		int i,j;
		for ( i = 1; i <= height; i++) {
	        // Print spaces before the stars
	        for ( j = 1; j <= height - i; j++) {
	            printf(" ");
	        }
	
	        // Print stars
	        for ( j = 1; j <= 2 * i - 1; j++) {
	           printf("*");
	        }
	
	        printf("\n"); // Move to the next line after each row
	    }
		
	}
	

	
	void rectangle(int rows, int cols){
		int i,j;
		
		for(i = 0; i < rows; i++){
            for(j = 0; j < cols; j++){
                printf("* ");
            }
            printf("\n");
        }//
	}
	
	
	traingle(3);
	printf("\n\n");
	rectangle(4, 5);
	
	
}	

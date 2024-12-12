/*
    Program: Inverted Triangle
    Version: 1.0
    Author: Kenura R. Gunarathna
    Date: 2024/12/12
 */

#include <stdio.h>

int main(){
	int count = 0;

    printf("Enter the height: ");
    scanf("%d", &count);

	if(count > 0){
		for(int row = count; row > 0; row--){
            for(int col = 1; col <= row; col++){
                printf("*");
            }
            printf("\n");
		}
	}

    return 0;
    
}

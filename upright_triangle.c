/*
    Program: Upright Triangle
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
		for(int x = 1; x <= count; x++){
            for(int y = 1; y <= x; y++){
                printf("*");
            }
            printf("\n");
		}
	}

    return 0;
    
}

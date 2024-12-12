/*
    Program: Centered Triangle
    Version: 1.0
    Author: Kenura R. Gunarathna
    Date: 2024/12/12
 */

#include <stdio.h>
#include <string.h>

int main(){
	int height = 0;

    printf("Enter the height: ");
    scanf("%d", &height);

    /*

    Per row
    --------------------
      *     - 1
     ***    - 1 + 2
    *****   - 1 + 2 + 2

    
    Start position
    --------------------
      *     - 2 = height - 1 = heigth + n -1
     ***    - 1 = height - 2 = heigth + n -1
    *****   - 0 = height - 3 = heigth + n -1

    height: 3
    ==========
    height_per_col: 3
    width_per_row: 6
    new_line_position: 6
    start_position: varies
    store_position: varies
    ===========
    array_lenght: 2*height*height // 2, 4, 6, 8, 10
    height_per_col: height
    width_per_row: 6
    new_line_position: 6
    start_position: varies
    store_positions: varies
    ===========

    [
        ' ', ' ', '*', ' ', ' ', '\n', 
        ' ', '*', '*', '*', ' ', '\n', 
        '*', '*', '*', '*', '*', '\n'
    ]

    */

    int height_per_col = height;
    int width_per_row = 2 * height; // 2, 4, 6, 8, 10
    int array_lenght = height_per_col * width_per_row;
    int new_line_position = 2;
    int start_position = 1; // 2, 1, 0
    int store_lenght = 1; // 2 + 1, 1 + 3, 0 + 5

    char graphic[array_lenght];
    memset(graphic, ' ', sizeof(graphic)); // Fill with spaces

    for(int y = 1; y <= height_per_col; y++){
        
        new_line_position = width_per_row*y-1;
        start_position = (width_per_row*(y-1)-1) + (height_per_col + (y-1) * -1);
        store_lenght = 1 + (y-1) * 2;

        //printf("start_position: %d - lenght: %d - new_line_position: %d\n", start_position, store_lenght, new_line_position);

        for(int x = 1; x <= store_lenght; x++){
            graphic[start_position + x - 1] = '*';
            //printf("%d", start_position + x - 1);
        }
        //printf("\n");
        graphic[new_line_position] = '\n';
    }

    printf("%s", graphic);

    return 0;
}

#include <stdio.h>

int main() {
    int array[3];
    int flag, i, j;

    scanf("%d %d %d", &array[0], &array[1], &array[2]);

    for(i = 0; i < 3; i++) {	
        for(j = 0; j < 2; j++) {	
            if(array[j] >= array[j+1]) {				
            flag = array[j];				
            array[j] = array[j+1];				
            array[j+1] = flag;			
            }
        }
    }

    printf("%d\n", array[1]);    

    return 0;
}
#include <stdio.h>

int main(){

    int mat[2][3]= {
        {1,2,3},
        {4,5,6}
    };

    printf("\n");

    
    printf("%p\n", mat);
    printf("%p\n", mat[0]);
    printf("%p\n", &mat[0][0]);

    printf("\n");

    return 0;
}

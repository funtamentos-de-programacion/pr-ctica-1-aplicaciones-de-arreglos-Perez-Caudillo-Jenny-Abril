#include <stdio.h>

int main(){
    int arreglo[]={1,2,3,4,5};
    char arreglo1[]={'a','b','c','d','e'};
    double arreglo2[]={1.2,3.5,5.6,7.9,4.5};

    int i;

    printf("\nUsando int\n");
    
    for(i=0;i<5;i++){
        printf("%p\n", &arreglo[i]);
    }

    printf("\nUsando char\n");

    for(i=0;i<5;i++){
        printf("%p\n", &arreglo1[i]);
    }

    printf("\nUsando double\n");

     for(i=0;i<5;i++){
        printf("%p\n", &arreglo2[i]);
    }

    printf("\n");

    return 0;
}

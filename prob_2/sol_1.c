#include <stdio.h>

int main(){
    int num,i,acum;
    acum = 0;
    int f_num_valid;
    f_num_valid = 0;

    while(!f_num_valid){

        printf("Ingrese numero: ");
        scanf("%d",num);
        if((num < 580) && (num > 0)){
            f_num_valid = 1;
            printf("número valido!");
        }
        else {
            if (num == 0){
                break;
            }
            else {
                f_num_valid=0;
                printf("numero erroneo, vuelva a ingresar numero");
            }
        }
    }

        for (i = 1; i <= num; ++i) {
            if (num % i == 0) {
                acum = acum + i;
            }
        }

        if((num == acum) && (num != 0)){
            printf("%d es un numero PERFECTO",num);
        } else {
            if(num>acum){
                printf("%d es un numero DEFICIENTE",num);
            }
            else { 
                if(num>acum){
                    printf("%d es un numero ABUNDANTE",num); 
                }
                }
    }
    printf("Eso es todo amigos");
    
}
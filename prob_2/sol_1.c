#include <stdio.h>

int main(){
    int num,i,acum;
    acum = 0;
    int f_num_valid;
    f_num_valid = 0;

    while(!f_num_valid){

        printf("Ingrese numero: ");
        scanf("%d",&num);
        if((num < 580) && (num > 0)){
            f_num_valid = 1;
            printf("numero valido!");
            printf("\n"); 
            for (i = 1; i <= num; ++i) {
                if (num % i == 0) {
                    acum = acum + i;
                }
            }

            if(num == acum){
                printf("%d es un numero PERFECTO",num);
                printf("\n");    
            } else if(num>acum){
                printf("%d es un numero DEFICIENTE",num);
                printf("\n"); 
            } else if(num<acum){
                printf("%d es un numero ABUNDANTE",num);
                printf("\n");  
            }

        }
        else if (num == 0){
                break;
        }
        else {  f_num_valid=0;
                printf("numero erroneo, vuelva a ingresar numero");
                printf("\n"); 
        } 
        f_num_valid = 0;   
    }
    printf("Eso es todo amigos");
    printf("\n"); 
    
}
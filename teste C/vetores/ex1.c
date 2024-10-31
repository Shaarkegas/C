#include <stdio.h>
#include <stdlib.h>

int main(){

int lugares[40] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40};
int reservas[3] = {3,13,38};
int len_fileiras = 40;
int len_reservas = 3;
printf("BEM VINDO, QUE POLTRONA DESEJAS RESERVAR?\n");
printf("temos poltronas de 1 a 40\n");
printf("DIGITE O NUMERO DA POLTRONA QUE QUER, OU 0 PARA SAIR");
int reserva = 0;
scanf("%i",&reserva);

 if (reserva == 0){
    printf("ADEUS");
 }

 else{
    for(int i = 0; i<len_fileiras; i++){
        if (reserva != 0){
        if(reserva == lugares[i]){
        for(int n = 0; n < len_reservas;n++){
        if(reserva == reservas[n]){
            printf("poltrona ja ocupada, gostaria de escolher outra?");
            scanf("%i",&reserva);
        }
        }
        }
        }
        else{
            printf("ADEUS");
        }
    }
 }

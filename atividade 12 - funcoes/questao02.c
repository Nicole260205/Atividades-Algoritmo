    /*Uma locadora de vídeos tem guardada, em um vetor A de 500 posições, a quantidade de filmes retirados por seus clientes durante o ano de 2020. Agora, esta locadora está fazendo uma promoção e, para cada 15 filmes retirados, o cliente tem direito a uma locação grátis. Faça um procedimento que receba o vetor A por parâmetro e retorna um vetor contendo a quantidade de locações gratuitas a que cada cliente tem direito. */


#include<stdio.h>
#include<stdlib.h>

int locacoesGratuitas(int vetor[500], int filmesGratis[500]){
    for (int i = 0; i < 500; i++){
    filmesGratis[i] = vetor[i]/15;
    }
}


int main(){

    int A[500];
    int filmeGratis[500];

    for (int i = 0; i < 500; i++){
        A[i] = rand() % 100 + 1;
    }

    for (int i = 0; i < 10; i++){
        printf("\n%d", A[i]);
    }
    
  
}

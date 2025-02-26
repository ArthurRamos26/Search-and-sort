//algoritmo de busca 
#include<stdio.h>
void swap (int *a,int *b){
    int temp = *a;
    *a = *b ;
    *b = temp;

}
void selection_sort(int vet[],int n ){
    int i , j ,menor  ; // o i é o básico e o j serve para percorrer 

    for( i = 0; i < n-1 ; i ++ ){//n-1 pq quando chegar no ultimo elemento todos ja estarao  ordenados por coseguinte ele também 
        menor = i ; 
        for(j = i + 1; j < n ; j++){
            if(vet[j] < vet[menor]){
                menor = j ; 
            }
           

        }
        swap(&vet[i],&vet[menor]);
    }

}
int main(){
    int vet[] = {10,5,3,11,25,1,2,5,1,14,654,564,654};
    int n = 13 ;
    
    selection_sort(vet , n );

    for(int i = 0 ;i < n ; i++){
        printf("%d , ",vet[i]);
    }
}
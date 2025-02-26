// it works by ordering the elements of the array in a ascending or a descending order it compares the element with all his predecessors 
#include <stdio.h>
void  insertion_sort(int vet[],int n ){
    int i , j ; //starts at one so it can compare with the one at the left
    int key;//the number that will be sorted at the loop
    for(i = 1 ; i < n ; i++){
        key = vet[i];
        j = i -1 ; 
        while(j >= 0 && vet[j]> key ){//se a posição existe e se o valor armazenado nela for maior que o valor apontado pelo loop e nesse while vai comparando do  i -1 (primeiro elemento depois do key )até o j ser menos 0 (começo do vetor )
             vet[j+1] = vet[j];
             j = j-1;
        }
        vet[j+1] = key ; 
    }
    

}
int main(){
    int vet[] = {10,5,3,11,25,1,2,5,1,14,654,564,654};
    int n = 13 ;
    
    insertion_sort(vet , n );

    for(int i = 0 ;i < n; i++){
        printf("%d , ",vet[i]);
    }
}

//Algoritmo de bubble sort
//tenho que ordenar n-1 elementos pq o ultimo se organiza altomaticamente 
#include<stdio.h>
void swap (int*a , int*b){
    int temp = *a;
    *a = *b;
    *b  = temp ;
}
void bubble_sort(int vet[] , int n ){
    
    for(int i = 0 ; i < n-1 ; i++){
        for (int j = 0; j < n - 1 - i; j++) {
            if(vet[j]> vet[j+1]){
                    swap(&vet[j],&vet[j+1]);
            }
        }
    }
}
int main(){
    int vet[] = {10,5,3,11,25,1,2,5,1,14,654,564,654};
    int n = 13 ;
    
    bubble_sort(vet , n );

    for(int i = 0 ;i < n; i++){
        printf("%d , ",vet[i]);
    }
}

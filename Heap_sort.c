// -Heap Sort
//Função Do Heap Sort: 
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void heapify(int vet[],int n , int i){//Fuction to let the heap be biger from up to bottom 
    int temp , max,left_index,right_index;//the temp is a temporary variable to easier the change of values   ,the max is the one to be held at the top of the binary tree ,both right and left index are the child branches 
    max = i ; //this value wiil be incremented in each loop of the recursive function (if one of the id cases are matched) , it receices the position of the max value at the time 
    left_index = 2*i +1;//the left child formula 

    right_index = 2*i + 2 ; //the right child formula 

    if (left_index < n && vet[left_index] >  vet[max] ){ //if clause that checks the left branch 
        max = left_index;
    }
    if(right_index < n && vet[right_index] > vet[max]){//if clause that checks the right branch 
        max = right_index;
    }

    if(max  != i ){ // this if block changes the position of the highest  number to the depending on the logic that if the position of the max is diferent from the position that was at the begining of the loop it will be changed 
        temp = vet[i];
        vet[i] = vet[max];
        vet [max]= temp ;
        heapify(vet,n ,max);  //the recursive call to keep it untill it is done   
    }
    
    }
void heapsort (int vet[], int n ){
    int i , temp ; 

    for(i = n/(2 -1) ; i>=0 ; i--){
        heapify(vet,n,i);

        }
    for(i = n - 1 ; i > 0; i--){
        temp = vet[0];
        vet[0]= vet[i];
        vet[i] = temp;
        heapify(vet, i , 0 );

        }
    }
    int main(){
        int vet[] = {102,3,5,85,9,12,23,20};
        int n = 8 ; //n is how long the vetor is  
        
       printf("Vetor Antes Do Heap Sort : ");
       for(int i = 0 ; i < n ; i++){
        printf("%d ",vet[i]);
       }
       printf("\nDepois do Heapsort :");
       heapsort(vet , n );

       printf("Vetor Depois  Do Heap Sort : ");
       for(int i = 0 ; i < n ; i++){
        printf("%d ",vet[i]);
       }
       return 0 ; 


    }



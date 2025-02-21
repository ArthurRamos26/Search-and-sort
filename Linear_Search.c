#include<stdio.h>

int linear_search (int vet[],int size , int key ){
     
    for (int i = 0 ; i < size ; i++){ // it compares each number of the array 
        if(vet[i] == key  ){
            return i ; 
        }
        
    }
   
    return -1 ; // if the condition  inside the for is not matched it returns false 
}
int main (){
    int vet[] =  {11,12,13,16,19,85,210};
    int n = 7 ;
    int elem ; 
    
    printf("Type the element that has to be found : ");
    scanf("%d",&elem);
    
    int position = linear_search(vet ,n, elem);
    
    if (position >= 0 ){
        printf("Found It at the position: %d", position  );
    }
    else{
        printf("Element Was not found! ");
    }
    return 0 ; 
}
//Quick Sort 
// it divides the array into two sub-arrays the one bugger than the pivot and the one smaller than the pivot it has two variables i and j with are used to compare the smaler and the greater elements than the pivot 
// i increments till  finds an element bigger than the pivot and j will stop if it gets an element smaller than pivot wich can be selected the first , last or a random element 
//after the quick sort the pivot will be in the correct place so it will go to taken out and the two sub arrays will be called recursively 
// this structure basically has two functions wich are partition responsible for divide the elements in bigger and smaller than the pivot and swap which changes the start and the end if its bigger
#include <stdio.h>
#include<stdlib.h>
void swap(int* a , int* b ){//just canges ftom a to b 
    int temp = *a;
    *a = *b ; 
    *b = temp ;
}

int partition(int vet[],int low , int high ){
    int pivot = vet[high];  //here it will receive the pivot position which will be from random d

    int i = low - 1 ;//establisher the i as the last  and j as the loe so it will go to the right and i to the left


    for(int j = low ; j<high ;j++){
        if(vet[j]<= pivot ){// checks if it goes to the left 
            i++;// it increments before because i is thelast elemtnt before the pivot so its to be in the correct place 
            swap(&vet[i], &vet[j]); 
            

        }
    }
    swap(&vet[i +1],&vet[high]);// the last swap also i + 1 to correcet the position 
   
    return i + 1 ; 

        }

void quicksort (int vet[],int low , int high ){
        if(low < high ){//while it is going at each place at the array 

            int parti = partition (vet,low,high);

            quicksort(vet , low , parti-1); //the left sub-array
            quicksort(vet , parti +1 ,high ); // the right sub array 


        }
    }
 
    int main() {
        int vet[] = {10, 7, 8, 9, 1, 5};
        int n = sizeof(vet) / sizeof(vet[0]);
    
        quicksort(vet, 0, n - 1);
        for (int i = 0; i < n; i++) {
            printf("%d ", vet[i]);
        }
        
        return 0;
    }
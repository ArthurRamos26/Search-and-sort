#include<stdio.h>
 
int binary_search(int vet[],int low , int high ,int key_elem ){ //the array that this function gets has to be sorted its int because it returns the value position of the number 
     
    int mid;
    
    if (low == high){
        
        if(vet[low] == key_elem){//in case of the array having only one element ant this element being the one searched 
            return low ; 
        }
        else{

        printf("\nElement not found"); //if the only element in the array is not the one wanted then it is not in the array 
        return -1 ;
        } 
    }
    else {
        mid = (low + high)/2;
        
        if (key_elem == vet[mid]){
            
            return mid ;
        }
    
        if (key_elem < vet[mid]){
            // high = mid -1 ; //this way it will disconsder the part of the array that is not needed for example it will disconsider the part that is positioned the array 
            return binary_search(vet,low,mid -1  ,key_elem ); 
        }
        if(key_elem > vet[mid]){
            // low = mid + 1 ;
            return binary_search(vet,mid + 1 ,high  ,key_elem ); // that  could be iterated like this (vet,low +1,high ,key_elem ) but i chose this aproach to be more comprehensible 
        }
    }
    
}
int main (){
    int vet[] =  {11,12,13,16,19,85,210};
    int n = 7 ;
    int elem ; 
    
    printf("Type the element that has to be found : ");
    scanf("%d",&elem);
    
    int position = binary_search(vet ,0,n-1, elem);//the initial low is 0 and the high number is the quantity minus one so it wont access the wrong part and elem is the wanted number 
    
    if (position >= 0 ){ //this if else checks if its a valid number 
        printf("Found It at the position: %d", position  );
    }
    else{
        printf("Element Was not found! ");
    } 

}
#include<stdio.h>

int binary_search(int arr[], int low, int high, int key){
    int mid = 0;
    if(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            return binary_search(arr, mid + 1, high, key);
        }
        else if(arr[mid] > key){
            return binary_search(arr, low, mid - 1, key);
        }
    }
    return -1;
}

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter elements of array in sorted order: ");
    for(int i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
    int key;
    printf("Enter search element: ");
    scanf("%d", &key);
    int low = 0;
    int high = (size - 1);
    int position = binary_search(arr, low, high, key);
    if(position == -1){
          printf("Element not found");
      }
      else{
          printf("Element found at %d position", position);
      }
      printf("\n");
  return 0;
  }

/*  1.
     INPUT:
     Enter size of array: 5
     Enter elements of array in sorted order: 1 2 3 4 5
     Enter search element: 2
     
     OUTPUT:
     Element found at 1 position.
     
     2.
      INPUT:
      Enter size of array: 4
      Enter elements of array in sorted order: 4 5 6 7
      Enter search element: 8
      
      OUTPUT:
      Element not found.
      
     */

     


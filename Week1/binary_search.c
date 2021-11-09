#include<stdio.h>

int binary_search(int arr[], int size, int key){
    int high = (size - 1);
    int low = 0;
    int mid = 0;
    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] < key){
            low = mid + 1;
        }
        else if(arr[mid] > key){
            high = mid - 1;
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
    int position = binary_search(arr, size, key);
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
     Enter search element: 5
     
     OUTPUT:
     Element found at 4 position.
     
    2.
     INPUT:
     Enter size of array: 6
     Enter elements of array in sorted order: 5 6 7 8 9 10
     Enter search element: 4
     
     OUTPUT:
     Element not found

  */
      

     






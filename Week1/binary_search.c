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






#include<stdio.h>

int linear_search(int arr[], int size, int index, int key){
    int position = 0;
    if(index < size){
        if(arr[index] == key){
            return index;
        }
    else{
        return linear_search(arr, size, index + 1, key);
    }
    }
    return -1;
}

int main(){
      int size, index = 0;
      printf("enter size of array: ");
     scanf("%d", &size);
      int arr[size];
      printf("Enter elements of array: ");
      for(int i = 0; i < size; i++){
          scanf("%d", &arr[i]);
      }
      int key;
      printf("search element: ");
      scanf("%d", &key);
      int position = linear_search(arr, size, index, key);
      if(position == -1){
          printf("Element not found");
      }
      else{
          printf("Element found at %d position", position);
      }
      printf("\n");
  return 0;
 }


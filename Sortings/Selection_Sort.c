#include<stdio.h>

void selection_Sort(int a[], int n){
    int i, j, min, x;
    for(i = 0; i < n - 1; i++){
        min = i;
        for(j = i + 1; j < n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        x = a[min];
        a[min] = a[i];
        a[i] = x;
    }
}

int main(){
    int n, i;
    printf("Enter the size\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the array elements\n");
    for(i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    selection_Sort(a, n);
    printf("After sort\n");
    for(i = 0; i < n; i++){
        printf("%d", a[i]);
    }

}

/*
OUTPUT:

Enter the size
6
Enter the array elements
7
1
8
2
9
3
After sort
1 2 3 7 8 9

*/

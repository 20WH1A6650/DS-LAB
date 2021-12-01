#include<stdio.h>
#include<stdlib.h>

#define SIZE 6

int top = -1;
int stack[SIZE];

int push(int ele){
    stack[++top] = ele;
}

int pop(){
    return stack[top--];
}

int peek(){
    return stack[top];
}

void display(){
    for(int i = top; i >= 0; i--){
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main(){
    int choice, ele;
    while(1){
    printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
        switch(choice){
            case 1:
                if(top == SIZE - 1){
                    printf("Stack overflow");
                }
                else{
                    printf("Enter element to be pushed: ");
                    scanf("%d", &ele);
                    push(ele);
                }
                break;
            case 2:
                if(top == -1){
                    printf("Stack underflow");
                }
                else{
                    printf("Deleted element is %d\n", pop());
                }
                break;
            case 3:
                if(top == -1){
                    printf("Stack underflow");
                }
                else{
                    printf("peek element is %d\n", peek());
                }
                break;
            case 4:
                if(top == -1){
                    printf("Stack underflow");
                }
                else{
                    display();
                }
                break;
            case 5:
                exit(0);
        }
    }
    return 0;
    }


/* 
OUTPUT:
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 1
Enter element to be pushed: 5
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 1
Enter element to be pushed: 4
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 1
Enter element to be pushed: 3
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 1
Enter element to be pushed: 2
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 1
Enter element to be pushed: 1
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 4
1 2 3 4 5 
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 2
Deleted element is 1
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 4
2 3 4 5 
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 3
peek element is 2
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 5
  */

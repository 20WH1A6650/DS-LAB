#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node* link;
};
struct node* top = NULL, *temp, *cur;

void push(int ele){
    cur = (struct node*)malloc(sizeof(struct node));
    cur -> data = ele;
    if(top == NULL){
        cur -> link = NULL;
    }
    else{
        cur -> link = top;
    }
    top = cur;
}

int pop(){
    temp = top;
    if(top == NULL)
        printf("Stack underflow\n");
    else{
        top = top -> link;
    }
        int ans = temp -> data;
        free(temp);
    return ans;
}

int peek(){
    return (top -> data);
}

void display(){
    temp = top;
    while(temp != NULL){
        printf("%d\n", temp -> data);
        temp = temp -> link;

    }
}


int main(){
    int choice, ele;
    while(1){
    printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
        switch(choice){
            case 1:
                    printf("Enter element to be pushed: ");
                    scanf("%d", &ele);
                    push(ele);
                break;
            case 2:
                if(top == NULL){
                    printf("Stack underflow");
                }
                else{
                    printf("Deleted element is %d\n", pop());
                }
                break;
            case 3:
                if(top == NULL){
                    printf("Stack underflow");
                }
                else{
                    printf("peek element is %d\n", peek());
                }
                break;
            case 4:
                if(top == NULL){
                    printf("Stack underflow");
                }
                else{
                    display();
                }
                break;
            case 5:
                exit(0);
                break;
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
Enter your choice: 4
2
3
4
5
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 2
Deleted element is 2
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 4
3
4
5
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 3
peek element is 3
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 5
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
Enter your choice: 2
Deleted element is 5
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 2
Stack underflow
1.push
2.pop
3.peek
4.display
5.exit
Enter your choice: 5
*/



#include <stdio.h>
#include <stdlib.h>
struct node
{
        int data;
        struct node *link;
};
struct node *head = NULL, *cur, *temp, *temp1, *t1;

struct node *create()
{
    int n;
    printf("Enter no of nodes : ");
    scanf("%d", &n);
    while (n--) {
        cur = (struct node *)malloc(sizeof(struct node));
        printf("Enter node data : ");
        scanf("%d", &(cur->data));
        if (head == NULL) {
            cur->link = cur;
            head = cur;
        } else {
             temp = head;
             while (temp->link != head) {
                  temp = temp->link;
             }
             temp->link = cur;
             cur->link = head;
             }
        }
        return head;
}

struct node *insert_begin(int ele)
{
        cur = (struct node *)malloc(sizeof(struct node));
        cur->data = ele;
        temp = head;
        while (temp->link != head)
            temp = temp ->link;
            temp->link = cur;
            cur->link = head;
            head = cur;
            return head;
}

struct node *delete_end(struct node *head)
{
        temp = head;
        while (temp->link != NULL)
        {
             temp1 = temp;
             temp = temp->link;
        }
        temp1->link = NULL;
        printf("Deleted Element : %d\n", temp->data);
        free(temp);
        return head;
}

struct node *delete_begin(struct node *head)
{
        temp = head;
        while (temp->link != head)
               temp = temp->link;
                t1 = head;
               temp->link = head->link;
               head = head->link;
                            // head = temp -> link;
               printf("Deleted element : %d\n", t1->data);
               free(t1);
       return head;
}

void display(struct node* head){
            temp = head;
            while(temp -> link != head){
            printf("%d->", temp -> data);
            temp = temp -> link;
                                                        }
            printf("%d\n", temp-> data);
}


int main(){
    int ch, ele, pos, key;
    while(1){
        printf(" 1 : create  2 : insert_begin  3 delete_begin  4 : display  5 : exit\n");
        printf("Enter choice : ");
        scanf("%d", &ch);
        switch(ch){
        case 1:
            head = create();
            break;
        case 2:
            printf("Element to be inserted : ");
            scanf("%d", &ele);
            head = insert_begin(ele);
            break;
        case 3:
            head = delete_begin(head);
            break;
        case 4:
            display(head);
            break;
        case 5:
            exit(0);
        }
}

}



/* 
OUTPUT:

1 : create  2 : insert_begin  3 delete_begin  4 : display  5 : exit
Enter choice : 1
Enter no of nodes : 4
Enter node data : 5
Enter node data : 4
Enter node data : 3
Enter node data : 1
 1 : create  2 : insert_begin  3 delete_begin  4 : display  5 : exit
Enter choice : 4
5->4->3->1
 1 : create  2 : insert_begin  3 delete_begin  4 : display  5 : exit
Enter choice : 2
Element to be inserted : 6
 1 : create  2 : insert_begin  3 delete_begin  4 : display  5 : exit
Enter choice : 4
6->5->4->3->1
 1 : create  2 : insert_begin  3 delete_begin  4 : display  5 : exit
Enter choice : 3
Deleted element : 6
 1 : create  2 : insert_begin  3 delete_begin  4 : display  5 : exit
Enter choice : 4
5->4->3->1
 1 : create  2 : insert_begin  3 delete_begin  4 : display  5 : exit
Enter choice : 5

*/

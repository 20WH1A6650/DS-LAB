#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node *link;
};
struct node *head = NULL, *cur, *temp, *temp1;

struct node* Create(){
	int n;
	printf("Enter no. of nodes:");
	scanf("%d", &n);
	while(n--){
		cur = (struct node*)malloc(sizeof(struct node));
		printf("Enter data:");
		scanf("%d", &(cur -> data));
		cur -> link = NULL;

		if(head == NULL)
			head = cur;
		else{
			temp = head;
			while(temp -> link != NULL){
				temp = temp -> link;
			}
			temp -> link = cur;
	}
	}
return head;
}

struct node* Insert_begin(int ele){
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> link = head;
	head = cur;
	return head;
}

struct node* Insert_end(int ele){
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	cur -> link = NULL;
	temp = head;
	while(temp -> link != NULL){
		temp = temp -> link;
	}
	temp -> link = cur;
	return head;
}

struct node* Insert_pos(int pos, int ele){
	int c = 1;
	cur = (struct node*)malloc(sizeof(struct node));
	cur -> data = ele;
	temp = head;
	while(c < (pos - 1)){
		temp = temp -> link;
		c++;
	}
	cur -> link = temp -> link;
	temp -> link = cur;
return head;
}

struct node* Delete_begin(struct node*){
	temp = head;
	head = temp -> link;
	printf("Deleted data: %d \n", temp -> data);
	free(temp);
return head;
}

struct node* Delete_end(struct node*){
	temp = head;
	while(temp -> link != NULL){
		temp1 = temp;
		temp = temp -> link;
	}
	temp1 -> link = NULL;
	printf("Deleted data: %d \n", temp -> data);
	free(temp);
return head;
}	

struct node* Delete_pos(int pos, struct node*){
	temp = head;
	int c = 1;
	while(c < pos){
		temp1 = temp;
		temp = temp -> link;
		c++;
	}
	temp1 -> link = temp -> link;
	printf("Deleted data: %d \n", temp -> data);
	free(temp);
return head;
}

void Display(struct node*){
	temp = head;
	while(temp != NULL){
		printf("%d -> ", temp -> data);
		temp = temp -> link;
	}
	printf("NULL \n");
}

void reverse_display(struct node* head){
	if(head != NULL){
		reverse_display(head -> link);
		printf("%d", head -> data);
	}
}

int Search(struct node* head, int key){
	int c = 1;
	temp = head;
	while(temp != NULL){
		if(key == temp -> data){
			return c;
		}
		temp = temp -> link;
		c++;
	}
return -1;
}

struct node* Sort(struct node* head){
	temp =head;
	int x;
	while(temp != NULL){
		temp1 = head;
		while(temp1 != NULL){
			if(temp1 -> data > temp1 -> link -> data){
				x = temp1 -> data;
				temp1 -> data = temp1 -> link -> data;
				temp1 -> link -> data = x;
			}
			temp1 = temp1 -> link;
	}
	temp = temp -> link;
}
return head;
}

int main(){
	int choice, ele, pos, key;
	while(1){
	printf("1.Create \n2.Insert_begin \n3.Insert_end \n4.Insert_pos \n5.Delete_begin \n6.Delete_end \n7.Delete_pos \n8.Display \n9.Reverse_display \n10.Search \n11.Sort \n12.Exit \n");
	printf("Enter choice:");
	scanf("%d", &choice);
	switch(choice){
		case 1:
			head = Create();
			break;
		case 2:
			printf("Element to be inserted:");
			scanf("%d", &ele);
			head = Insert_begin(ele);
			break;
		case 3:
			printf("Element to be inserted:");
			scanf("%d", &ele);
			head = Insert_end(ele);
			break;
		case 4:
			printf("Element to be inserted and position:");
			scanf("%d %d", &ele, &pos);
			head = Insert_pos(pos, ele);
			break;
		case 5:
			head = Delete_begin(head);
			break;
		case 6:
			head = Delete_end(head);
			break;
		case 7:
			printf("Enter position for deletion:");
			scanf("%d", &pos);
			head = Delete_pos(pos, head);
			break;
		case 8:
			Display(head);
			break;
		case 9:
			riversedisplay(head);
			break;
		case 10:
			printf("Enter key:");
			scanf("%d", &key);
			pos = Search(head, key);
			if(pos == -1)
				printf("Element not found");
			else
				printf("Element found at %d position", pos);
			break;
		case 11:
			head = Sort(head);
			break;
		case 12:
			exit(0);

	}

	}

}	

/*  OUTPUT:
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:1
Enter no. of nodes:4
Enter data:1 2 3 4
Enter data:Enter data:Enter data:1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:8
1 -> 2 -> 3 -> 4 -> NULL 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:2
Element to be inserted:9
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:8
9 -> 1 -> 2 -> 3 -> 4 -> NULL 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:3
Element to be inserted:8
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:8
9 -> 1 -> 2 -> 3 -> 4 -> 8 -> NULL 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:4
Element to be inserted and position:5 4
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:8
9 -> 1 -> 2 -> 5 -> 3 -> 4 -> 8 -> NULL 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:5
Deleted data: 9 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:8
1 -> 2 -> 5 -> 3 -> 4 -> 8 -> NULL 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:6
Deleted data: 8 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:8
1 -> 2 -> 5 -> 3 -> 4 -> NULL 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:7
Enter position for deletion:3
Deleted data: 5 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:8
1 -> 2 -> 3 -> 4 -> NULL 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:9
4 ->3 ->2 ->1 ->1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:10
Enter key:4
Element found at 4 position1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:11
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:8
1 -> 2 -> 3 -> 4 -> NULL 
1.Create 
2.Insert_begin 
3.Insert_end 
4.Insert_pos 
5.Delete_begin 
6.Delete_end 
7.Delete_pos 
8.Display 
9.Reverse_display 
10.Search 
11.Sort 
12.Exit 
Enter choice:

*/
	









































































































			

			
		

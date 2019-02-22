#include "node.h"
#include <stdio.h>
#include <stdlib.h>

typedef list {
	Node* head;
	//Node*tail;
} List;

void add(Node* head, int number);
void print(List* pList);

//typedef struct _node {
//	int value;
//	struct _node *next;
//} Node;

int main(int argc, char const *argv[])
{
	List list;
	int number;
	list.head = NULL;
	do {
		scanf("%d", &number);
		if (number != -1) {
			head = add(&list, number);
		}			
	} while (number != -1);
	print(&list);
	scanf("%d", &number);
	Node *p;
	int isFound = 0; 
	for(p=list.head, p; p= p->next) {
		if (p->value == number) {
			printf("找到了\n");
			isFound = 1;
			break;
		}
	}
	if 	(!isFound) {
		printf("没找到\n"); 
	}
	Node *q;
	for(q=NULL, p=list.head, p; q=p, p=p->next) {
		if (p->value == number) {
			if (q) {
				q->next = p->next;
			} else {
				list.head = p->next;
			}			
			free(p);
			break;
		}
	}	
	for (p=head;p;p=q) {
		q = p->next;
		free(q);
		break;
	}
	
	return 0;
}

void add(list* pList, int number)
{
	// add to linked-list
	Node *p = (Node*)malloc(sizeof(Node));
	p->value = number;
	p->next = NULL;
	// find the last
	if (last) {
		Node *last = pList->head;
		while (last -> next) {
			last = last -> next;
		}
		// attach
		last -> next = p;							
	} else {
		pList->head = p;
	}
}

void print(List* pList)
{
	Node *p;
	for (p=pList->head;p;p=p->next){
		printf("%d\t", p->value);
	}
	printf("\n");
	
}			

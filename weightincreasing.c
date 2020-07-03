#include <stdio.h>

struct node{
    int data;
    int weight;
    struct node * next;
};
typedef struct node NODE;
typedef NODE * WEIGHT;

WEIGHT tptr,start,newnode,prev;

void insert(int data){
    newnode=(WEIGHT)malloc(sizeof(NODE));
    newnode->next=NULL;
    newnode->data=data;

    for

}

int main() {
	//code
	while(scanf("%d",&n)!=EOF){
	    insert(n);
	}


	return 0;
}

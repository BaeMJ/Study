#include "DLinkedList.h"
#include <stdio.h>

void ListInit(List * plist){
	plist->head = (Node *)malloc(sizeof(Node));
//	plist->cur = (Node *)malloc(sizeof(Node));
//	plist->tail = (Node *)malloc(sizeof(Node));

	plist->head->data = NULL;
	plist->cur = plist->head;
	plist->tail = plist->head;
	plist->numOfData = 0;

}

void LInsert(List * plist, LData data){
	if (plist->head->data == NULL){
		plist->head->data = data;
		plist->head->next = NULL;
		(plist->numOfData)++;
	}
	else{
		Node *node = (Node *)malloc(sizeof(Node));
		node->data = data;
		node->next = NULL;
		plist->tail->next = node;
		plist->cur = node;
		plist->tail = node;
		(plist->numOfData)++;
	}
}

 int LFirst(List * plist, LData * pdata){
	if (plist->head->data != NULL){
		*pdata = plist->head->data;
		plist->cur = plist->head;

		return TRUE;
	}
	else
		return FALSE;
}
int LNext(List * plist, LData * pdata){
	if (plist->cur->next != NULL){
		plist->cur = plist->cur->next;
		*pdata = plist->cur->data;
		
		return TRUE;
	}
	else
		return FALSE;
}

LData LRemove(List * plist){

	LData data = plist->cur->data;
	
	Node *node = (Node *)malloc(sizeof(Node));
	node = plist->cur;

	/////////unfinished////////////


	(plist->numOfData)--;
	free(node);
	return data;
}
int LCount(List * plist){
	return plist->numOfData;
}
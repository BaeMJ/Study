#include <stdio.h>
#include <stdlib.h>
#include "CircularQueue.h"


void QueueInit(Queue * pqueue){
	pqueue->front = 0;
	pqueue->rear = 0;
}

int IsEmpty(Queue * pqueue){
	if (pqueue->front == pqueue->rear)
		return TRUE;
	else
		return FALSE;
}

void Enqueue(Queue * pqueue, Data data){

	if (pqueue->front == nextIndex(pqueue->rear)){
		printf("Queue is Full\n");
		exit(-1);
	}

	pqueue->rear = nextIndex(pqueue->rear);
	pqueue->queueArr[pqueue->rear] = data;


}

Data Dequeue(Queue * pqueue){

	if (IsEmpty(pqueue)){
		printf("Queue is Empty\n");
		exit(-1);
	}

	pqueue->front = nextIndex(pqueue->front);
	return pqueue->queueArr[pqueue->front];
}

Data Peek(Queue * pqueue){

	int tempIndex = 0;

	if (IsEmpty(pqueue)){
		printf("Queue is Empty\n");
		exit(-1);
	}

	tempIndex = nextIndex(pqueue->front);
	return pqueue->queueArr[tempIndex];
}

int nextIndex(int index){
	int next = 0;

	if (index == QUEUE_SIZE-1)
		next = 0;
	else
		next = index + 1;

	return next;
}
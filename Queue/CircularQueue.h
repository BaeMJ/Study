#ifndef __C_QUEUE_H__
#define __C_QUEUE_H__

#define TRUE	1
#define FALSE	0
#define QUEUE_SIZE	10

typedef int Data;

typedef struct _queue
{
	Data queueArr[QUEUE_SIZE];
	int front;
	int rear;
} queue;
typedef queue Queue;

void QueueInit(Queue * pqueue);
int IsEmpty(Queue * pqueue);

void Enqueue(Queue * pqueue, Data data);
Data Dequeue(Queue * pqueue);
Data Peek(Queue * pqueue);

int nextIndex(int index);

#endif
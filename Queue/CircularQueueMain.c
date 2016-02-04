#include <stdio.h>
#include "CircularQueue.h"

int main(void)
{
	Queue queue;
	QueueInit(&queue);


	Enqueue(&queue, 1); Enqueue(&queue, 2);
	Enqueue(&queue, 3); Enqueue(&queue, 4);
	Enqueue(&queue, 5); Enqueue(&queue, 6);
	Enqueue(&queue, 7); Enqueue(&queue, 8);
	Enqueue(&queue, 9); 
//	Enqueue(&queue, 10);

	while (!IsEmpty(&queue))
		printf("%d ", Dequeue(&queue));

	return 0;
}
#include <stdio.h>

void hanoi(int n, char boardA, char boardB, char boardC);

int main(){

	int n = 0;
	char boardA = 'A';
	char boardB = 'B';
	char boardC = 'C';

	n = 3;



	hanoi(n, boardA, boardB, boardC);

	return 0;
}

void hanoi(int n, char boardA, char boardB, char boardC){

	if (n == 1){
		printf("Block %d : %c -> %c\n", n, boardA, boardC);
	}

	else{
		hanoi(n - 1, boardA, boardC, boardB);

		printf("Block %d : %c -> %c\n", n, boardA, boardC);

		hanoi(n - 1, boardB, boardA, boardC);
	}
}
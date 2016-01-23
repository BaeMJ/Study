#include "ArrayList.h"

void ListInit(List *plist){

	int i = 0;
	for (i = 0; i < LIST_LEN; i++){
		plist->arr[i] = 0;
	}
	plist->numOfElements = 0;
	plist->curPosition = -1;
}


void LInsert(List *plist, LData data){
	plist->arr[++(plist->curPosition)] = data;	//���� ��ġ�� ������ ����
	(plist->numOfElements)++;

}

int LFirst(List *plist, LData *pdata){

	if ((plist->curPosition) > -1){
		plist->curPosition = 0;	//������ ������ ���� �ʱ�ȭ
		*pdata = plist->arr[plist->curPosition];		//pdata�� ����Ű�� �޸𸮿� ù ��° ������ ����

		return TRUE;
	}
	else
		return FALSE;
}

int LNext(List *plist, LData *pdata){

	if ( (plist->curPosition) < (plist->numOfElements)-1 ){
		(plist->curPosition)++;
		*pdata = plist->arr[plist->curPosition];		//������ ������ ���� �����Ͱ� pdata�� ����Ű�� �޸𸮿� ����
	

		return TRUE;
	}
	else
		return FALSE;

}
LData LRemove(List *plist){

	int i = 0;

	LData data = plist->arr[plist->curPosition];
	plist->arr[plist->curPosition] = 0;

	for (i = (plist->curPosition); i < (plist->numOfElements); i++){
		plist->arr[i] = plist->arr[i + 1];
	}	//����� �� ĭ�� ������ ä���

	(plist->numOfElements)--;
	(plist->curPosition)--;

	return data;
}
int LCount(List *plist){
	
	return plist->numOfElements;
}


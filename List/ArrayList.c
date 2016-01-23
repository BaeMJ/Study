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
	plist->arr[++(plist->curPosition)] = data;	//현재 위치에 데이터 저장
	(plist->numOfElements)++;

}

int LFirst(List *plist, LData *pdata){

	if ((plist->curPosition) > -1){
		plist->curPosition = 0;	//데이터 참조를 위한 초기화
		*pdata = plist->arr[plist->curPosition];		//pdata가 가리키는 메모리에 첫 번째 데이터 저장

		return TRUE;
	}
	else
		return FALSE;
}

int LNext(List *plist, LData *pdata){

	if ( (plist->curPosition) < (plist->numOfElements)-1 ){
		(plist->curPosition)++;
		*pdata = plist->arr[plist->curPosition];		//참조된 데이터 다음 데이터가 pdata가 가리키는 메모리에 저장
	

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
	}	//지우고 한 칸씩 앞으로 채우기

	(plist->numOfElements)--;
	(plist->curPosition)--;

	return data;
}
int LCount(List *plist){
	
	return plist->numOfElements;
}


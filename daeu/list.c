#include <stdio.h>



	struct NODE {
		int number;
		char name[20];
		struct NODE *next;
	};

	struct NODE *head;	


/* 追加処理 */
int add_node()
{
	struct NODE *new;
	struct NODE *prev;
	struct NODE *node;

	/* 追加メモリ確保 */
	new = (struct NODE*)malloc(sizeof(struct NODE));
	if(new == NULL)
		return -1;

	/* 追加データ入力 */
	printf("no >");
	scanf("%d",new->number);
	printf("name >");
	scanf("%s",new->name);


	/** 追加処理 **/

	/* 追加箇所検索 */
	node = head;
	while(node != NULL) {
		if(node->number > new->number)
			break;
		prev = node;

		node = node->next;
	}
	
	/* 先頭に追加の場合 */
	if(node == head) {
		new->next = head;
		head = new;
	}
	/* ２番目以降に追加の場合 */
	else {
		prev->next = new;
		new->next = node;

	return 0;
}


/* 削除処理 */
int del_node()
{
	struct NODE *node;
	struct NODE *prev;
 
	int del_no;


	/* 削除ノード入力 */
	printf("deleat no >");
	scanf("%d",&del_no);

	node = head;

	/* ノード検索 */
	while(node != NULL) {
		if(node->number == del_np) {
			break;
		}
		else {
			prev = node;
			node = node->next; 
		}
	}
	/* 先頭 */
	if(node == head) {
		head = node->next;
		free(node);
	}
	/* ２番目以降 */
	else {
		prev->next = node-next;
		free(node);	
	}
	/* 該当無し */
	else {
		if(node == NULL) {
			printf("該当無し\n");
		}
	}


	return 0;
}


/* 検索・表示 */
int search_node()
{
	

/* 終了処理 */
void free_node() 
{
	struct NODE *tmp;
	
	while(head != NULL) {
		tmp = head->next;	
		free(head);
		head = tmp;
	}
}





int main(void)
{

	int syori;

/* 処理選択 */
	
	do {  
		do {
			printf("１追加 ２削除 ３検索 ４終了 >");
		 	scanf("%d", &syori);
		while( syori < 1 || 4 < syori);
       
		switch( syori) {
		   	/* ノード追加 */
			case 1:
				if( add_node() == -1) {
					free_node();
					syori = 4;
				}
				break;
   
			/* ノード削除 */
			case 2:
				del_node();
				break;
   
			/* 検索 */
			case 3:
				search_node();
				break;
		}
	while( syori != 4);
			
	/* 終了処理 */
	free_node();

	return 0;
}

#include<stdio.h>
#include<stdlib.h>

typedef struct cell
{
	int val;
	struct cell* next;
} CELL;

void Create(CELL* list, int val);
void Index(CELL* list);

int main(void) {
	int data;
	CELL first_cell;
	first_cell.next = NULL;

	printf("D‚«‚È”Žš‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

	while (true)
	{
		printf("“ü—Í‚·‚é’l:");
		scanf_s("%d", &data);
		Create(&first_cell, data);
		Index(&first_cell);
	}

	return 0;
}

void Create(CELL* list, int val)
{
	CELL* newCell;
	newCell = (CELL*)malloc(sizeof(CELL));
	
	if(newCell)
	{
		newCell->val = val;
		newCell->next = NULL;
	}

	while (list->next != NULL)
	{
		list = list->next;
	}

	list->next = newCell;
}

void Index(CELL* list)
{
	printf("{");

	while (list->next != NULL)
	{
		list = list->next;
		printf("%d,", list->val);
	}

	printf("}\n\n");
}
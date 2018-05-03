/*
 * main.c
 *
 *  Created on: 02/05/2018
 *      Author: rebeca
 */


//Exemplo de arvore binaria usando In-Order Traversal

#include <stdio.h>
//#include <conio.h> bibilioteca não funciona no linux
#include <stdlib.h>

struct Node{
	int data;
	struct Node *left;
	struct Node *right;
};

struct Node *root = NULL;
int count = 0;
int value;

//struct Node* insert(struct Node*, int);
//void display(struct Node*);

//Arvores utilizam recursão dentro de suas funções

struct Node *insert(struct Node *root, int value){
	struct Node *novoNo;

	novoNo = (struct Node*)malloc(sizeof(struct Node));

	novoNo->data = value;

	if(root == NULL){
		novoNo->left = novoNo->right = NULL;
		root = novoNo;
		count ++;
	} else {
		if(count % 2 != 0){
			root->left = insert(root->left, value);
		} else {
			root->right = insert(root->right, value);
		}
	}

	return root;
}

//Os elementos vão ser exibidos na ordem In-Traversaç

void display(struct Node *root){
	if(root != NULL){
		display(root->left);
		printf("%d \t", root->data);
		display(root->right);
	}
}

int main(){
	int op, value;

	//clrscr(); não funciona no linux

	system("clear"); //faz parte da biblioteca <stdlib.h>

	printf("Binary Tree \n");

	while(1){
		printf("Menu: \n");
		printf("\n\t 1 - Inserir"
			   "\n\t 2 - Display"
			   "\n\t 3 - Sair");

		switch(op){
			case 1:
				printf("\n Digite o elemento: ");
				scanf("%d", &value);

				root = insert(root, value);

				break;

			case 2:
				display(root);

				break;

			case 3:
				exit(0);

			default:
				printf("\n Escolha errada! \n");
				break;
		}


	}

}










//Arvore Binaria

#include <stdio.h>
#include <conio.h> //output/input

//estrutura
struct Node{
	int data;
	struct Node *left; //ponteiro para o lado esquerdo
	struct Node *right; //ponteiro para o lado direito
}/*tTree*/;

struct Node *root = NULL; //ponteiro para o primeiro elemento da arvore
int count = 0; //contador

struct Node* insert(struct Node *root, int value){
	struct Node *newNode;

	newNode = (struct Node*)malloc(sizeof(struct Node));

	newNode->data = value;

	if(root = NULL){
		newNode->left = newNode->right = NULL;
		root = newNode;
		count++;
	} else {
		if(count % 2 != 0){
			root->left = insert(root->left, value);
		} else {
			root->right = insert(root->right, value);
		}
	}

	return root;


}


void Display(struct Node* root){
	if(root != NULL){
		Display(root->left); //recursividade
		printf("%d \t", root->data);
		Display(root->right);
	}

}




void ApresentaMenu(){
	printf("\n 			Menu		"
		   "\t\n 1 - Inserir"
		   "\t\n 2 - Exibir"
		   "\t\n 3 - Sair");

}



int main(){
	int choice, value;
    clrscr(); //limpa a tela do prompt

	printf("\n ----- Binary Tree -----");

	while(1){
		ApresentaMenu();

		printf("\n Digite a sua escolha: ");
		scanf("%d", &choice);

		if(choice == 3){
			break;
		}

		switch(choice){
			case 1:
				printf("\n Digite o valor: ");
				scanf("%d", &value);

				root = insert(root, value);
				break;
			case 2:
				Display(root);
				break;
			default:
				printf("\n Escolha uma opcao correta!!!");
				break;
		}

	}

}


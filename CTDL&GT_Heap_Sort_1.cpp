// nguon https://codelearn.io/learning/data-structure-and-algorithms/878867
// cai dat
#include<iostream>

using namespace std;

struct node{
	int data;
	node *left;
	node *right;
};
node *insert(node *t, int x){
	if (t == NULL){
		node *temp = new node;
		temp->data =x;
		temp->left = NULL;
		temp->right = NULL;
		return temp;
	} else{
		if (x < t->data){
			t->left = insert(t->left, x);
		} else{
			t->right = insert(t->right, x);
		}
	}	
}
void printTree(node *t){
	if (t != NULL){
		printTree(t->left);
		cout << t->data << " " ;
		printTree(t->right);
	}
}

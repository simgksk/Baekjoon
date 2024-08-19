#include <iostream>

using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

node* MakeNode(int n)
{
	node* nd = new node;
	nd->data = n;
	nd->left = NULL;
	nd->right = NULL;

	return nd;
}

node* root = NULL;

void Insert(node* r, node* node)
{
	if (root == NULL) root = node;

	else if (r->data < node->data)
	{
		if (r->right == NULL)
			r->right = node;
		else
			Insert(r->right, node);
	}

	else if ((r->data > node->data))
	{
		if (r->left == NULL)
			r->left = node;
		else
			Insert(r->left, node);
	}
}
void postorder(node* nd)
{
	if (nd->left != NULL)
		postorder(nd->left);

	if (nd->right != NULL)
		postorder(nd->right);

	cout << nd->data << "\n";
}

int main() 
{
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int value;

	while (cin >> value)
	{
		Insert(root, MakeNode(value));
	}
	postorder(root);

	return 0;
}

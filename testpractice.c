//	General Tree

		()
	    /	    \
	()		()

()		()		()



int num_levels(struct TreeNode *root)
{
	if (root == NULL)
		return 0;
	int l = num_levels(root->left)+1;
	int r = num_levels(root->right)+1;
	return l>r ? l : r;

}

int sum_level(struct TreeNode *root, int k)
{
	if (root == NULL)
		return 0;
	if (k == 0)
		return root->key;
	return sum_level(root->left, k-1) + sum_level(root->right, k-1);
}

//	Binary Search Tree
//	
//            (10)
//	     /	  \
//	    (5)	  (13)
//	   /   \    \
//   	 (1)   (7) (20)
//   	 	   /  \
//   	 	(18)  (25)

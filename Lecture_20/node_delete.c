struct node *deleter(struct node *list, int n)
{
	struct node *cur, *prev;
	for(cur = list, prev = NULL; cur != NULL && cur->value!=n; prev = cur, cur = cur->next)
		;
//	| 15 |  | -> | 7 |  | -> | 30 |  | -> | 1 |  | -> NULL
//
}
struct node *printReverse(struct node *L)
{
	if(!L)
		return;
	printReverse(L->next);
	printf("%d ", L->value);
}

//Declaring a node type
struct node {
    int value;              //data stored in the node
    struct node *next;      //pointer to the next node
};

struct node *first = NULL       //setting first to NULL indicates that the list is initially empty

//3 Things to create a node
//-Allocate memory for the node
//-Store data in the node
//-Insert the node into the list

//Focusing on the first two steps
struct node *new_node;      //This will temporarily point to the new node
new_node = malloc(sizeof(struct node));     //large enough to hold a node structure

//These two are the same, but prefer the ->
(*new_node).value = 10;
new_node->value = 10;

scanf("%d", &new_node->value);  //don't forget the &

//To insert a node at the beginning of a linked list
new_node->next = first;     
first = new_node;       //making first point to the new node



//Searching a linked list
//Customary way to vist nodes in a linked list
for( p = first; p != NULL; p = p->next)
//p = p->next advances the p pointer from one node to the next

//search function
struct node *search_list (struct node *list, int n)
{
    struct node *p;

    for (p = list; p != NULL; p = p->next)
        if (p->value == n)
            return p;
    return NULL;
}

//alternate search function
struct node *search_list (struct node *list, int n)
{
    for(;list != NULL; list = list->next)
        if (list->value == n)
            return list;
    return NULL;        
}

//alternate
struct node *search_list (struct node *list, int n)
{
    for (;list != NULL && list->value != n; list = list->next)
    ;
    return list;
}

//alternate with a while loop
struct node *search_list (struct node *list, int n)
{
    while (list != NULL && list->value != n)
        list = list->next;
    return list;
}

//Deleteing a node from a linked list
//-Locate the node to be deleted
//-Alter the previous node so that it bypasses the deleted node
//-Call free to reclaim the space occupied by the delete node


//previous node prev, current node cur
//step 1
for (cur = list, prev = NULL;
     cur != NULL && cur->value != n;
     prev = cur, cur = cur->next)
     ;

//step 2
//This lets the previous node point to the node after the current node
prev->next = cur->next;  

//step 3
//Releasing the memory occupied by the current node
free(cur);

//Delete from list function
struct node *delete_from_list (struct node *list, int n)
{
    struct node *cur, *prev;

    for (cur = list, prev = NULL;
        cur != NULL && cur->value != n;
        prev = cur, cur = cur->next)
        ;
    if (cur == NULL)
        return list;                //n was not found
    if (prev == NULL)
        list = list->next;          //n is in the first node
    else
        prev->next = cur->next;     //n is in some other node
    free(cur);
    return list;
    
}


























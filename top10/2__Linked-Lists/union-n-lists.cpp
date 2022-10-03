// C++ program to find union
// and intersection of two unsorted
// linked lists
#include "bits/stdc++.h"
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node* next;
	Node(int x)
	{
		data = x;
		next = NULL;
	}
};

/* A utility function to insert a
node at the beginning ofa linked list*/
void push(struct Node** head_ref, int new_data);

/* A utility function to check if
given data is present in a list */
bool isPresent(struct Node* head, int data);

/* Function to get union of two
linked lists head1 and head2 */
struct Node* getUnion(struct Node* head1,
					struct Node* head2)
{
	struct Node* ans = new Node(-1);
	struct Node* head = ans;
    // CREATE A SET VARIABLE TO LUMP ALL UNIQUE DATA FROM BOTH HEADS  <-- MAKES UNION
	set<int> st;
	while (head1 != NULL) {
		st.insert(head1->data);
		head1 = head1->next;
	}
	while (head2 != NULL) {
		st.insert(head2->data);
		head2 = head2->next;
	}
    // ADD UNIQUE TO NEW LINKED-LIST 
	for (auto it : st) {
		struct Node* t = new Node(it);
		ans->next = t;
		ans = ans->next;
	}
    // STRANGE LINES, WHY NOT RETURN ans? head IS A POINTER TO ans, MAYBE THAT'S WHY
	head = head->next;
	return head;
}

/* Function to get intersection of
two linked lists head1 and head2 */
struct Node* getIntersection(struct Node* head1,
							struct Node* head2)
{

	struct Node* result = NULL;
	struct Node* t1 = head1;

	// Traverse list1 and search each element of it in
	// list2. If the element is present in list 2, then
	// insert the element to result
    // PRETTY SELF EXPLANATORY; ONLY DATA PRESENT IN BOTH LISTS:
	while (t1 != NULL) {
		if (isPresent(head2, t1->data))
			push(&result, t1->data);
		t1 = t1->next;
	}
	return result;
}
/* A utility function to insert a
node at the beginning of a linked list*/
void push(struct Node** head_ref, int new_data)
{

	/* allocate node */
	struct Node* new_node
		= (struct Node*)malloc(sizeof(struct Node));

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* A utility function to print a linked list*/
void printList(struct Node* node)
{
	while (node != NULL) {
		cout << " " << node->data;
		node = node->next;
	}
}
bool isPresent(struct Node* head, int data)
{
	struct Node* t = head;
	while (t != NULL) {
		if (t->data == data)
			return 1;
		t = t->next;
	}
	return 0;
}

/* Driver program to test above function*/
int main()
{

	/* Start with the empty list */
	struct Node* head1 = NULL;
	struct Node* head2 = NULL;
	struct Node* intersecn = NULL;
	struct Node* unin = NULL;

	/*create a linked lists 10->15->4->20 */
	push(&head1, 20);
	push(&head1, 4);
	push(&head1, 15);
	push(&head1, 10);

	/*create a linked lists 8->4->2->10 */
	push(&head2, 10);
	push(&head2, 2);
	push(&head2, 4);
	push(&head2, 8);
	intersecn = getIntersection(head1, head2);
	unin = getUnion(head1, head2);
	cout << "\n First list is " << endl;
	printList(head1);
	cout << "\n Second list is " << endl;
	printList(head2);
	cout << "\n Intersection list is " << endl;
	printList(intersecn);
	cout << "\n Union list is " << endl;
	printList(unin);
	return 0;
}

// This code is contributed by zishanahmad786

// C++ program to illustrate if a given array can represent
// a preorder traversal of a BST or not

#include <bits/stdc++.h>
using namespace std;

// We are actually not building the tree
void buildBST_helper(int &preIndex, int n, int pre[],
                     int min, int max)
{
    if (preIndex >= n)
        return;

    if (min <= pre[preIndex] && pre[preIndex] <= max)
    {
        // build node
        int rootData = pre[preIndex];
        preIndex++;

        // build left subtree
        buildBST_helper(preIndex, n, pre, min, rootData);

        // build right subtree
        buildBST_helper(preIndex, n, pre, rootData, max);
    }
    // else
    // return NULL;
}

bool canRepresentBST(int arr[], int N)
{
    // code here
    int min = INT_MIN, max = INT_MAX;
    int preIndex = 0;

    buildBST_helper(preIndex, N, arr, min, max);

    return preIndex == N;
}

// Driver Code
int main()
{

    int preorder1[] = {2, 4, 3};
    /*
            2
             \
              4
             /
            3

*/
    int n1 = sizeof(preorder1) / sizeof(preorder1[0]);

    if (canRepresentBST(preorder1, n1))
        cout << "\npreorder1 can represent BST";
    else
        cout << "\npreorder1 can not represent BST :(";

    int preorder2[] = {5, 3, 4, 1, 6, 10};
    int n2 = sizeof(preorder2) / sizeof(preorder2[0]);
    /*
            5
         /    \
        3      1
         \	  / \
          4  6  10

*/
    if (canRepresentBST(preorder2, n2))
        cout << "\npreorder2 can represent BST";
    else
        cout << "\npreorder2 can not represent BST :(";

    int preorder3[] = {5, 3, 4, 8, 6, 10};
    int n3 = sizeof(preorder3) / sizeof(preorder3[0]);
    /*
          5
        /	 \
       3	  8
        \	 / \
         4  6   10

*/
    if (canRepresentBST(preorder3, n3))
        cout << "\npreorder3 can represent BST";
    else
        cout << "\npreorder3 can not represent BST :(";

    return 0;
}

// This code is contributed by Sourashis Mondal

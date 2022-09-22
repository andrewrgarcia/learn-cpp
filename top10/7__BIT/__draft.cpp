// C++ program for a Trie based O(n) solution to find max
// subarray XOR
#include <bits/stdc++.h>
using namespace std;

// Assumed int size
#define INT_SIZE 32

// A Trie Node
struct TrieNode
{
    int value; // Only used in leaf nodes
    TrieNode *arr[2];
    // TrieNode *arr0[0];
};

// Utility function to create a Trie node
TrieNode *newNode()
{
    TrieNode *temp = new TrieNode;
    temp->value = 0;
    temp->arr[0] = temp->arr[1] = NULL;
    return temp;
}

// temp->arr[val] = newNode();

int main()
{

    TrieNode *temp = new TrieNode;
    temp->value = 100;

    cout << temp->value << endl;

    // cout << temp->arr << endl;
    int len = sizeof(temp->arr) / sizeof(temp->arr[0]);
    for (int i = 0; i < len; i++)
    {
        cout << temp->arr[i] << endl;
    }
}
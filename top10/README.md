# Top 10 algorithms in Interview Questions

From [Top 10 algorithms in Interview Questions by Geeks for Geeks](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/). My comments on the `.cpp` files are in ALL CAPS. I May have deleted or edited some comments from GFG for my better understanding.
| Section | Progress | Progress Bar |
| -------- | --------| --------|
|1__Graphs |  10/10 | :white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button:
|2__Linked-Lists |  8/10 | :white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button:
|3__Dynamic-Programming |  9/10 | :white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button:
|4__Sort-Search |  10/10 | :white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button:
|5__Binary-Tree |  10/10 | :white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button:
|6__Number-Theory |  10/10 | :white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button:
|7__BIT |  8/10 | :white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button:
|8__String-Array |  6/10 | :white_square_button::white_square_button::white_square_button::white_square_button::white_square_button::white_square_button:
| TOTAL | 88% | :black_circle::black_circle::black_circle::black_circle::black_circle::black_circle::black_circle::black_circle::white_circle::white_circle: |
## Using this folder to review algorithms in C++

To keep a record of your progress you may use Git as a version control protocol, which would begin by [forking](https://docs.github.com/en/get-started/quickstart/fork-a-repo) the [main repository](https://github.com/andrewrgarcia/learn-cpp). After forking, you may clone it by copying the `SSH` or `HTTPS` address for your fork and [cloning it](https://git-scm.com/book/en/v2/Git-Basics-Getting-a-Git-Repository) with a `git clone` command. The `.cpp` files of this folder may be emptied and added individually from the [GFG "Top 10" site](https://www.geeksforgeeks.org/top-10-algorithms-in-interview-questions/) as the material is reviewed by the below protocol.

#### Reset Content

This will remove all `.cpp` files from the folders in this directory and reset the progress table counter to "0/10" for all topics. In a terminal under this directory:

```bash
find . -name \*.cpp -type f -delete     # to remove all C++ files in all folders
for f in `find . -name \*completion`; do echo "0/10" > $f; done     # to reset the progress table to 0
./make_readme.sh    # to recompile the progress table in this README
```

#### Update

To update the `completion` files in each exercises sub-folder and then run the .sh file.
Under any of the 8 subdirectories of the 8 data structure sections:

```bash
cat completion      # to see current progress of specific section (i.e. 1/10)
echo "X/10" > completion        # to update progress (i.e. if X = 2; it will update to 2/10)
../make_readme.sh       # to recompile the progress table in this README (note the ".." prefix instead of ".")
```
## Index
1\_\_ Graph

1. Breadth First Search (BFS)
2. Depth First Search (DFS)
3. Shortest Path from source to all vertices **Dijkstra**
4. Shortest Path from every vertex to every other vertex **Floyd Warshall**
5. To detect cycle in a Graph **Union Find**
6. Minimum Spanning tree **Prim**
7. Minimum Spanning tree **Kruskal**
8. Topological Sort
9. Boggle (Find all possible words in a board of characters)
10. Bridges in a Graph

2\_\_ Linked List

1. Insertion of a node in Linked List (On the basis of some constraints)
2. Delete a given node in Linked List (under given constraints)
3. Compare two strings represented as linked lists
4. Add Two Numbers Represented By Linked Lists
5. Merge A Linked List Into Another Linked List At Alternate Positions
6. Reverse A List In Groups Of Given Size
7. Union And Intersection Of 2 Linked Lists
8. Detect And Remove Loop In A Linked List
9. Merge Sort For Linked Lists
10. Select A Random Node from A Singly Linked List

3\_\_ Dynamic Programming

1. Longest Common Subsequence
2. Longest Increasing Subsequence
3. Edit Distance
4. Minimum Partition
5. Ways to Cover a Distance
6. Longest Path In Matrix
7. Subset Sum Problem
8. Optimal Strategy for a Game
9. 0-1 Knapsack Problem
10. Boolean Parenthesization Problem

4\_\_ Sorting And Searching

1. Binary Search
2. Search an element in a sorted and rotated array
3. Bubble Sort
4. Insertion Sort
5. Merge Sort
6. Heap Sort (Binary Heap)
7. Quick Sort
8. Interpolation Search
9. Find Kth Smallest/Largest Element In Unsorted Array
10. Given a sorted array and a number x, find the pair in array whose sum is closest to x

5\_\_ Tree / Binary Search Tree

1. Find Minimum Depth of a Binary Tree
2. Maximum Path Sum in a Binary Tree
3. Check if a given array can represent Preorder Traversal of Binary Search Tree
4. Check whether a binary tree is a full binary tree or not
5. Bottom View Binary Tree
6. Print Nodes in Top View of Binary Tree
7. Remove nodes on root to leaf paths of length < K
8. Lowest Common Ancestor in a Binary Search Tree
9. Check if a binary tree is subtree of another binary tree
10. Reverse alternate levels of a perfect binary tree

6\_\_ Number Theory

1. Modular Exponentiation
2. Modular multiplicative inverse
3. Primality Test | Set 2 (Fermat Method)
4. Euler’s Totient Function
5. Sieve of Eratosthenes
6. Convex Hull
7. Basic and Extended Euclidean algorithms
8. Segmented Sieve
9. Chinese remainder theorem
10. Lucas Theorem

7\_\_ BIT Manipulation

1. Maximum Subarray XOR
2. Magic Number
3. Sum of bit differences among all pairs
4. Swap All Odds And Even Bits
5. Find the element that appears once
6. Binary representation of a given number
7. Count total set bits in all numbers from 1 to n
8. Rotate bits of a number
9. Count number of bits to be flipped to convert A to B
10. Find Next Sparse Number

8\_\_ String / Array

1. Reverse an array without affecting special characters
2. All Possible Palindromic Partitions
3. Count triplets with sum smaller than a given value
4. Convert array into Zig-Zag fashion
5. Generate all possible sorted arrays from alternate elements of two given sorted arrays
6. Pythagorean Triplet in an array
7. Length of the largest subarray with contiguous elements
8. Find the smallest positive integer value that cannot be represented as sum of any subset of a given array
9. Smallest subarray with sum greater than a given value
10. Stock Buy Sell to Maximize Profit

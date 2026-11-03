/*
This is the "Omniscient Algorithm Compendium" — fully reorganized to progress 
strictly in order of increasing difficulty. It integrates the three missing 
foundational algorithms and scales from LeetCode Easy to ICPC World Finals.

Attempt to perform the following tasks completely from memory, working top to bottom. 
For algorithms that require recursion, structs, or complex state (like Trees or DSU), 
write them as standalone structures above main().
*/

#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <map>
#include <set>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <functional>
#include <bitset>
#include <climits>
#include <complex>
#include <cassert>

using namespace std;

// =================================================================================================
// HELPER SPACE (Implement classes, structs, and recursive functions here)
// =================================================================================================

int main() {
  //===========================================================================================================================
  //
  //  LEVEL 1: FOUNDATIONS (Basic Algorithms & Mathematics)
  //
  //===========================================================================================================================
  //Task 1.1 (Sorting) - Implement QuickSort using the Lomuto or Hoare partition scheme.
  //Task 1.2 (Sorting) - Implement MergeSort, allocating a temporary array for the merge step.
  //Task 1.3 (Binary Search) - Write a binary search to find the FIRST occurrence of a target in a sorted array without using STL.
  //Task 1.4 (Fixed Sliding Window) - Find the maximum sum of any contiguous subarray of strictly size K.
  //Task 1.5 (Sieve of Eratosthenes) - Generate all prime numbers up to N in O(N log log N) using a boolean vector.
  //Task 1.6 (Basic Prime Factorization) - Factorize an integer N in O(sqrt(N)) time by dividing out factors starting from 2.
  //Task 1.7 (BFS) - Find the shortest path in an unweighted 2D grid from (0,0) to (N,M) using a std::queue.


  //===========================================================================================================================
  //
  //  LEVEL 2: INTERMEDIATE (Core Competitive Programming)
  //
  //===========================================================================================================================
  //Task 2.1 (Two Pointers / 3Sum) - Sort an array and use a fixed pointer + left/right pointers to find unique triplets summing to 0.
  //Task 2.2 (Dynamic Sliding Window) - Find the length of the longest substring with at most K distinct characters using a frequency map.
  //Task 2.3 (Binary Search on Answer) - Write a while(low < high) loop to solve the "Allocate Minimum Number of Pages" problem.
  //Task 2.4 (Interval Scheduling) - Given a vector of {start, end} times, sort by end time and greedily find the max non-overlapping intervals.
  //Task 2.5 (DSU) - Write a Disjoint Set Union (Union-Find) class with path compression and union by rank.
  //Task 2.6 (Trie) - Write a Trie (Prefix Tree) supporting insert(), search(), and startsWith().
  //Task 2.7 (Dijkstra) - Implement Dijkstra's Algorithm using a min-heap priority_queue. Store distances in a vector initialized to INT_MAX.
  //Task 2.8 (Bellman-Ford) - Find the shortest path in a graph with NEGATIVE edge weights. Detect if a negative weight cycle exists.
  //Task 2.9 (Floyd-Warshall) - Find the All-Pairs Shortest Path using a 3D nested loop (k, i, j) over an adjacency matrix.
  //Task 2.10 (Kruskal's MST) - Sort a list of edges by weight, and use your DSU class to build a Minimum Spanning Tree.
  //Task 2.11 (Prim's MST) - Build an MST starting from node 0 using a min-heap priority_queue.
  //Task 2.12 (Topological Sort) - Implement Kahn’s Algorithm: count in-degrees, push nodes with 0 in-degree to a queue, and process them.
  //Task 2.13 (0/1 Knapsack) - Write the 1D space-optimized DP loop: dp[w] = max(dp[w], dp[w-weight] + val).
  //Task 2.14 (Coin Change) - Find the minimum number of coins to make a target amount using 1D DP.
  //Task 2.15 (Longest Common Subsequence) - Fill a 2D DP table to find the length of the LCS of two strings.
  //Task 2.16 (Extended Euclidean) - Find x and y such that ax + by = gcd(a, b).
  //Task 2.17 (Modular Exponentiation) - Compute (base^exp) % mod in O(log exp) time.
  //Task 2.18 (Combinatorics) - Precompute factorials. Write an O(1) nCr function using Fermat's Little Theorem.
  //Task 2.19 (Shoelace Formula) - Calculate the area of any simple polygon given its vertices in counter-clockwise order.


  //===========================================================================================================================
  //
  //  LEVEL 3: ADVANCED (Hard Algorithms & Classic Structures)
  //
  //===========================================================================================================================
  //Task 3.1 (Fenwick Tree) - Write a Fenwick Tree (Binary Indexed Tree) for point updates and prefix sums.
  //Task 3.2 (Segment Tree) - Write a Segment Tree with Lazy Propagation for range additions and range maximum queries.
  //Task 3.3 (Sparse Table) - Implement a Sparse Table for O(1) Range Minimum Queries (RMQ) using O(N log N) preprocessing.
  //Task 3.4 (Monotonic Queue) - Find the Sliding Window Maximum using a std::deque that maintains decreasing values.
  //Task 3.5 (SQRT Decomposition) - Divide an array of size N into blocks of sqrt(N) to process range updates/queries in O(sqrt(N)).
  //Task 3.6 (Ternary Search) - Find the maximum of a unimodal function by splitting the search space into thirds.
  //Task 3.7 (Rabin-Karp) - Implement Rolling Hash string matching using a large prime modulo to avoid collisions.
  //Task 3.8 (KMP Algorithm) - Build the LPS (Longest Prefix Suffix) array and search for a pattern in O(N+M) time.
  //Task 3.9 (Z-Algorithm) - Construct the Z-array to find the longest substring starting at index i which is also a prefix.
  //Task 3.10 (Longest Increasing Subsequence) - Implement O(N log N) LIS using a `tails` vector and std::lower_bound.
  //Task 3.11 (Matrix Chain Multiplication) - Write a gap-based interval DP to find the most efficient way to multiply N matrices.
  //Task 3.12 (DP on Trees) - Write a post-order DFS to calculate the Maximum Independent Set of a tree.
  //Task 3.13 (Bitmask DP) - Solve the Traveling Salesperson Problem (TSP) using dp[mask][current_city] and bitwise subset loops.
  //Task 3.14 (Matrix Exponentiation) - Solve linear recurrences (e.g., 10^18-th Fibonacci number) in O(K^3 log N).
  //Task 3.15 (Tarjan's SCC) - Write a DFS using 'discovery time' and 'low-link values' to find Strongly Connected Components.
  //Task 3.16 (Bridges & Articulation Points) - Modify Tarjan's logic to find all critical edges (bridges) and articulation points.
  //Task 3.17 (Lowest Common Ancestor) - Implement LCA on a tree using Binary Lifting (a sparse table of 2^i-th parents).
  //Task 3.18 (Eulerian Path) - Implement Hierholzer's Algorithm using a stack to find a path that visits every EDGE exactly once.
  //Task 3.19 (2-SAT) - Solve 2-Satisfiability. Build an implication graph and use Tarjan's SCC to check if X and !X are in the same component.
  //Task 3.20 (Ford-Fulkerson) - Write a BFS to find an augmenting path in a residual graph, then update the flows/reverse edges for Max Flow.
  //Task 3.21 (Basic Bipartite Matching) - Use standard DFS/Max Flow logic to find the maximum matching in a bipartite graph.
  //Task 3.22 (Graham Scan) - Find the Convex Hull of a set of 2D points using the Cross Product for left/right turns.
  //Task 3.23 (Point in Polygon) - Implement Ray-Casting to check if a point lies strictly inside a complex polygon.
  //Task 3.24 (Segment Intersection) - Robustly check if two line segments intersect using orientation cross products.
  //Task 3.25 (Minimax) - Traverse a game tree maintaining alpha (best max) and beta (best min) to prune unreachable branches.


  //===========================================================================================================================
  //
  //  LEVEL 4: EXPERT (ICPC Regional / Codeforces Master)
  //
  //===========================================================================================================================
  //Task 4.1 (Treap) - Implement a Cartesian Tree / Treap (Randomized BST) supporting split() and merge() operations.
  //Task 4.2 (Heavy-Light Decomposition) - Write the HLD setup (subtree sizes, heavy edges) to flatten a tree for Segment Tree path queries.
  //Task 4.3 (Mo's Algorithm) - Answer offline range queries on an array in O((N+Q) sqrt(N)) by sorting queries as (L / sqrt(N), R).
  //Task 4.4 (Manacher's Algorithm) - Find the longest palindromic substring in O(N) by expanding around centers with a preprocessed string.
  //Task 4.5 (Aho-Corasick) - Build a multi-pattern string matching automaton (Trie + Failure Links using BFS).
  //Task 4.6 (Suffix Array) - Build a Suffix Array in O(N log N) time using string equivalence classes and radix sort.
  //Task 4.7 (LCP Array) - Build the Longest Common Prefix array from a Suffix Array using Kasai's Algorithm in O(N) time.
  //Task 4.8 (Digit DP) - Find how many numbers in [L, R] have a specific property using index, tight_bound, leading_zeroes, current_sum.
  //Task 4.9 (Miller-Rabin) - Implement the Miller-Rabin Primality Test to check if a 64-bit integer is prime probabilistically.
  //Task 4.10 (Pollard's rho) - Implement Pollard's rho algorithm to find a non-trivial factor of a composite number.
  //Task 4.11 (Chinese Remainder Theorem) - Find X modulo (M1*...*Mk) given X = A_i (mod M_i) for pairwise coprime moduli.
  //Task 4.12 (Centroid Decomposition) - Find the centroid of a tree, recursively decompose it, and build a Centroid Tree.
  //Task 4.13 (Block-Cut Tree) - Extract biconnected components using articulation points to build a Block-Cut Tree.
  //Task 4.14 (Dinic's Algorithm) - Find Max Flow in O(V^2 E) by building a Level Graph with BFS and finding blocking flows with DFS.
  //Task 4.15 (Hopcroft-Karp) - Find Maximum Bipartite Matching in O(E sqrt(V)) time using BFS for alternating path levels and DFS.
  //Task 4.16 (Min-Cost Max-Flow) - Modify Ford-Fulkerson to use Bellman-Ford or SPFA to find augmenting paths of minimum cost.
  //Task 4.17 (Sweep-Line) - Solve "Closest Pair of Points" in O(N log N) time using a sweep-line and a std::set for active points.
  //Task 4.18 (Sprague-Grundy) - Solve an impartial game (like Nim). Compute the MEX of reachable states to find the Grundy number.


  //===========================================================================================================================
  //
  //  LEVEL 5: GRANDMASTER (ICPC World Finals / Academic Edge)
  //
  //===========================================================================================================================
  //Task 5.1 (Link-Cut Tree) - (Conceptual) Implement a Link-Cut Tree with Splay Trees to maintain a dynamic forest of trees (link, cut, find_root).
  //Task 5.2 (Suffix Automaton) - Build a Directed Acyclic Word Graph (DAWG) online in O(N) to represent all substrings.
  //Task 5.3 (Fast Fourier Transform - FFT) - Multiply two polynomials in O(N log N) time using std::complex and the Cooley-Tukey algorithm.
  //Task 5.4 (Number Theoretic Transform - NTT) - Adapt the FFT to work with integer modulo arithmetic using primitive roots.
  //Task 5.5 (Edmonds' Blossom Algorithm) - (Conceptual) Find the maximum matching in a general (non-bipartite) graph by shrinking odd-length cycles.

  return 0;
}
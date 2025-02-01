/* Representation of Graphs*/

/* Input
Directed or Undirected
n = no. of nodes
m = no. of edges
m lines that will represent edges
2 1
1 3
2 4
2 5
4 5
3 4... -> edge between 2 and 1, 1 and 3
*/

/* Ways to store
1. Matrix Way: Adjacency Matrix
declare adj[n+1][n+1]
mark wherever edges occur i.e. from example 1,2 and 2,1 will be 1
rest = 0

Space = N*N


2. Adjacency List
declare vector<int>adj[n+1]
every index will contaon empty vector
0->{}
1->{2}
2->{1,4}
3->{1,4}
4->{3,2,5}
5->{2,4}

space = O(2E) E = no.of edges

//for a weighted graph
  store a pair of(neihb., weight)
  vector<pair<int,int>>
*/
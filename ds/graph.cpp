// #include <iostream>
// #include <queue>
// #include <stack>
// #include <vector>

// using namespace std;

// class Graph {
// private:
//     int numVertices; // number of vertices 
//     vector<vector<int>> adjacencyMatrix; // of the graph
//     vector<vector<int>> adjacencyList; // of the graph

// public:
//     Graph(int vertices, const vector<pair<int, int>>& edges) : numVertices(vertices) {
//         adjacencyMatrix.resize(numVertices, vector<int>(numVertices, 0));
//         adjacencyList.resize(numVertices);

//         // Add edges to the graph
//         for (const auto& edge : edges) {
//             int src = edge.first;
//             int dest = edge.second;
//             adjacencyMatrix[src][dest] = 1;
//             adjacencyList[src].push_back(dest);
//         }
//     }

//     void breadthFirstSearch(int start) {
//         vector<bool> visited(numVertices, false);
//         queue<int> queue;

//         visited[start] = true;
//         queue.push(start);

//         while (!queue.empty()) {
//             int currentVertex = queue.front();
//             queue.pop();

//             cout << currentVertex << " ";

//             for (int neighbor : adjacencyList[currentVertex]) {
//                 if (!visited[neighbor]) {
//                     visited[neighbor] = true;
//                     queue.push(neighbor);
//                 }
//             }
//         }
//     }

//     void depthFirstSearch(int start) {
//         vector<bool> visited(numVertices, false);
//         stack<int> stack;

//         visited[start] = true;
//         stack.push(start);

//         while (!stack.empty()) {
//             int currentVertex = stack.top();
//             stack.pop();

//             cout << currentVertex << " ";

//             for (int neighbor : adjacencyList[currentVertex]) {
//                 if (!visited[neighbor]) {
//                     visited[neighbor] = true;
//                     stack.push(neighbor);
//                 }
//             }
//         }
//     }
// };

// int main() {
//     vector<pair<int, int>> edges = {
//         {0, 1},
//         {0, 2},
//         {1, 3},
//         {2, 3},
//         {2, 4},
//         {3, 4},
//         {3, 5},
//         {4, 5}
//     };

//     Graph graph(6, edges);

//     cout << "breadthFirstSearch traversal starting from vertex 0: ";
//     graph.breadthFirstSearch(0);
//     cout << endl;

//     cout << "depthFirstSearch traversal starting from vertex 0: ";
//     graph.depthFirstSearch(0);
//     cout << endl;

//     return 0;
// }
#include <iostream>
#include <queue>
#include <stack>
#include <vector>
using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjacencyList;

public:
    Graph(int numVertices, const vector<pair<int, int>>& edges) : numVertices(numVertices) {
        adjacencyList.resize(numVertices);

        //adding edges to list 
        for (const auto& edge : edges) {
            int source = edge.first;
            int destination = edge.second;
        // also add destination vertex to list
            adjacencyList[source].push_back(destination);
        }
    }
    // O(v+e)
    void breadthFirstSearch(int start) {
        vector<bool> visited(numVertices, false);
        queue<int> queue;// in bfs we use queue FIFO
        visited[start] = true;
        queue.push(start);
        while (!queue.empty()) {
            int currentVertex = queue.front();
            queue.pop();
            cout << currentVertex << " ";
            //visit all neighbors of the current vertex
            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    queue.push(neighbor);
                }
            }
        }}

    void depthFirstSearch(int start) {
        vector<bool> visited(numVertices, false);
        stack<int> stack;// in dfs we use stack LIFO
        visited[start] = true;
        stack.push(start);
        while (!stack.empty()) {
            int currentVertex = stack.top();
            stack.pop();
            cout << currentVertex << " ";
            //visit all neighbors of the current vertex
            for (int neighbor : adjacencyList[currentVertex]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    stack.push(neighbor);
                }
            }
        }
    }
};

int main() {
    vector<pair<int, int>> edges = {{0,1},{0, 2},{1, 3},{2,3},{2, 4},{3, 4},{3,5},{4, 5}};// adding 
    int numVertices = 6;
    Graph graph(numVertices, edges);
    cout << "breadthFirstSearch starting 0: ";
    graph.breadthFirstSearch(0);// bfs testing
    cout << endl;
    cout << "depthFirstSearch starting 0: ";
    graph.depthFirstSearch(0);//dfs testing
    cout << endl;

    return 0;
}


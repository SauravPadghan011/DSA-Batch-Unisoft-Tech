#include<iostream>
using namespace std;

int main() {

    int V;
    cout << "Enter no of vertex: ";
    cin >> V;

    int graph[V][V] = {0};
    for(int i=0; i<V; i++) {
        int ver, edge;
        cin >> ver >> edge;

        graph[ver][edge] = 1;
        graph[edge][ver] = 1;
    }

    for(int i=0; i<V; i++) {
        for(int j=0; j<V; j++) {
            cout << graph[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
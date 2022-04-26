#include<iostream>
#include<list>
using namespace std;

void connect(list<int> li[], int v, int e) {
    li[v].push_back(e);
    li[e].push_back(v);
}

int main() {

    int V = 5;
    list<int> li[V];

    // connect(li, 0, 1);
    // connect(li, 0, 2);
    // connect(li, 0, 3);
    // connect(li, 1, 2);  

    connect(li, 0, 1);
    connect(li, 0, 3);
    connect(li, 0, 4);
    connect(li, 3, 2);
    connect(li, 2, 1);  
    connect(li, 1, 4);   

    for(int i=0; i<V; i++) {
        cout << "Vertex " << i << " -> ";
        for(auto itr: li[i]) {
            cout << itr << " -> ";
        } 
        cout << endl;
    }



    return 0;
}
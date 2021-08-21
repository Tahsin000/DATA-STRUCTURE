/*
    بسم الله الرحمن الرحيم

     الجامعة الإسلامية العالمية شيتاغونغ

    لا تحزن ان الله معنا
*/

///////////// IIUC - 49 /////////////

#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define MX 1000000007

vector<ll>graph[20];

void PrintGraph(vector<ll>Graph[], ll n){
    cout << "The graph list\n";
    for(int i=0; i<n; i++){
            cout << i << " -> ";
        for(int j=0; j<Graph[i].size(); j++){
            cout << Graph[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    ll node , edge;
    cin >> node >> edge ;
    for(int i=0; i<edge; i++){
        ll u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    PrintGraph(graph, node);
    return 0;
}



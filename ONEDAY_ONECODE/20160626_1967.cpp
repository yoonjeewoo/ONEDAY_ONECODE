//
//  20160626_1967.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 25..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <queue>
#include<iostream>
using namespace std;

vector<vector<pair<int,int>>> graph;
bool visited[12345];

pair<int, int>furthest(int root) {
    memset(visited, false, 12345);
    
    queue <pair<int,int>> q;
    visited[root] = true;
    
    q.push(make_pair(root, 0));
    
    pair<int, int> ret;
    
    ret.first = -1;
    ret.second = -1;
    
    while(!q.empty()) {
        int now = q.front().first;
        int dis = q.front().second;
        int len = graph[now].size();
        
        q.pop();
        
        for(int i=0;i<len;i++) {
            if(!visited[graph[now][i].first]) {
                
                visited[graph[now][i].first] = true;
                
                q.push(make_pair(graph[now][i].first, graph[now][i].second + dis));
                
                if(dis + graph[now][i].second>ret.second) {
                    ret.first = graph[now][i].first;
                    ret.second = dis + graph[now][i].second;
                }
            }
        }
    }
    return ret;
}
int main() {
    int N;
    scanf("%d",&N);
    graph.resize(10000+1);
    int f,t,v;
    for(int i=0;i<N-1;i++) {
        scanf("%d %d %d",&f,&t,&v);
        graph[f].push_back(make_pair(t, v));
        graph[t].push_back(make_pair(f, v));
    }
    
    pair<int, int> first = furthest(1);
    pair<int , int> answer = furthest(first.first);
    
    printf("%d",answer.second);
}
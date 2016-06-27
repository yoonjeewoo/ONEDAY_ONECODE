//
//  20160626_1389.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 27..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
#include <queue>
#include <vector>

using namespace std;

bool visited[12345];
vector<vector<pair<int,int>>> graph;

int bfs(int n1,int n2) {
    queue<pair<int, int>> q;
    q.push(make_pair(n1, 0));
    
    memset(visited, false, 12345);
    
    while(!q.empty()) {
        int now = q.front().first;
        int cnt = q.front().second;
        int len = graph[now].size();
//        printf("%d %d %d\n",now,cnt,len);
        if(now == n2) {
            return cnt;
        }
        q.pop();
        
        for(int i=0;i<len;i++) {
            if(!visited[graph[now][i].first]) {
                q.push(make_pair(graph[now][i].first, cnt + 1));
            }
        }
    }
    return -1;
}

int find_min(int *min,int minimum,int N) {
    for(int i=1;i<=N;i++) {
        if(minimum == min[i]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int N,M;
    int cnt=0;
    int users[105]={0};
    int min[105]={0};
    int minimum = 999999;
    scanf("%d %d",&N,&M);
    graph.resize(12345);
    int n1,n2;
    for(int i=0;i<M;i++) {
        scanf("%d %d",&n1,&n2);
        graph[n1].push_back(make_pair(n2, 0));
        graph[n2].push_back(make_pair(n1, 0));
    }
    for(int i=1;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            if(i!=j) {
                cnt += bfs(i, j);
            }
        }
        if(cnt<minimum) {
            minimum = cnt;
        }
        min[i]=cnt;
        cnt=0;
    }
    printf("%d",find_min(min,minimum,N));
    
}
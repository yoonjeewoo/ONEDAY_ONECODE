//
//  20160630_5014.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 30..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
#include <queue>
using namespace std;

int start,goal,total,up,down;
queue<pair<int,int>> q;
bool chk[1000005] = {false};

int bfs(int now) {
    int cnt=-1;
    q.push(make_pair(now, 0));
    chk[now] = true;
    
    while(!q.empty()) {
        int floor = q.front().first;
        cnt = q.front().second;
        q.pop();
        if(floor == goal) {
            return cnt;
        }
        if(floor+up<=total && !chk[floor+up]) {
            q.push(make_pair(floor+up, cnt+1));
            chk[floor+up] = true;
        }
        if(floor-down>0 && !chk[floor-down]) {
            q.push(make_pair(floor-down, cnt+1));
            chk[floor-down] = true;
        }
    }
    return -1;
}

int main() {
    scanf("%d %d %d %d %d",&total,&start,&goal,&up,&down);
    int res = bfs(start);
    if(res==-1) {
        printf("use the stairs\n");
    }else {
        printf("%d\n",res);
    }
}
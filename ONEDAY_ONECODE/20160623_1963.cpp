//
//  20160624_1963.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 23..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#define MAX 10000
#include <stdio.h>
#include <queue>
#include <string.h>
bool is_prime[MAX+1];
bool visited[MAX+1];

using namespace std;

void erathos() {
    memset(is_prime,true,MAX+1);
    
    is_prime[0] = is_prime[1] = false;
    
    for(int i=2;i*i<MAX+1;i++) {
        for(int j=i+i;j<MAX+1;j+=i) {
            if(is_prime[j]) {
                is_prime[j] = false;
            }
        }
    }
}

int bfs(int n1,int n2) {
    for(int i=0;i<MAX+1;i++) {
        visited[i]=false;
    }
    
    queue<pair<int,int>> q;
    
    visited[n1] = true;
    
    q.push(make_pair(n1,0));
    
    while(!q.empty()) {
        int number = q.front().first;
        int cnt = q.front().second;
        
        q.pop();
        
        if(number==n2) {
            return cnt;
        }
        
        for(int i=1;i<=9;i++) {
            int next = number % 1000 + i * 1000;
            
            if(!visited[next] && is_prime[next]) {
                visited[next] = true;
                q.push(make_pair(next,cnt+1));
            }
        }
        for(int i=0;i<=9;i++) {
            int next = number % 100 + i * 100 + (number /1000)*1000;
            
            if(!visited[next] && is_prime[next]) {
                visited[next] = true;
                q.push(make_pair(next,cnt+1));
            }
        }
        for(int i=0;i<=9;i++) {
            int next = number % 10 + i * 10 + (number/100)*100;
            
            if(!visited[next] && is_prime[next]) {
                visited[next] = true;
                q.push(make_pair(next,cnt+1));
            }
        }
        for(int i=1;i<=9;i++) {
            int next = (number/10)*10 + i;
            if(!visited[next] && is_prime[next]) {
                visited[next] = true;
                q.push(make_pair(next,cnt+1));
            }
        }
    }
    return -1;
}

int main() {
    int T;
    scanf("%d",&T);
    erathos();
    while(T--) {
        int n1,n2;
        scanf("%d %d",&n1,&n2);
        int answer = bfs(n1,n2);
        if(answer==-1) {
            printf("Impossible\n");
        }else {
            printf("%d\n",answer);
        }
    }
}




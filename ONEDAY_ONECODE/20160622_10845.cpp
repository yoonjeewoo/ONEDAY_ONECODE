//
//  20160622_10845.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 22..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//
#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>

using namespace std;

int main() {
    queue<int> Queue;
    string order;
    string push = "push";
    string front = "front";
    string back = "back";
    string size = "size";
    string empty = "empty";
    string pop = "pop";
    
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        getline(cin,order);
        
        if(order.compare(push)==0) {
            int p;
            scanf("%d",&p);
            Queue.push(p); 
        }else if(order.compare(front)==0) {
            printf("%d\n",Queue.front());
        }else if(order.compare(back)==0) {
            printf("%d\n",Queue.back());
        }else if(order.compare(size)==0) {
            printf("%ld\n",Queue.size());
        }else if(order.compare(empty)==0) {
            printf("%d\n",Queue.empty());
        }else if(order.compare(pop)==0) {
            Queue.pop();
        }
    }
}

//
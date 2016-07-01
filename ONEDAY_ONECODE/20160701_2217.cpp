//
//  20160701_2217.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 7. 1..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

int main() {
    int N,T;
    int max_n=0;
    int arr[100005];
    scanf("%d",&N);
    
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    
    sort(arr,arr+N);
    
    for(int i=N-1;i>=0;i--) {
        max_n = max(max_n, arr[i] * (N-i));
    }
    
    printf("%d\n",max_n);
    
}
//
//  20160701_1912.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 7. 1..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

int arr[100005];
int dp[100005];

using namespace std;

int main() {
    int N;
    int max_n=0;
    scanf("%d",&N);
    
    for(int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    dp[0]= arr[0];
    for(int i=0;i<N;i++) {
        dp[i] = max(dp[i-1]+arr[i],arr[i]);
    }
    max_n = arr[0];
    for(int i=1;i<N;i++) {
        if(max_n < dp[i]) {
            max_n = dp[i];
        }
    }
    printf("%d\n",max_n);
}
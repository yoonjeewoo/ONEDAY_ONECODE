//
//  20160625_2193.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 25..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>

int main() {
    long long int dp[95]={0,1,1,2,};
    int N;
    
    scanf("%d",&N);
    for(int i=4;i<=N;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    printf("%lld",dp[N]);
}
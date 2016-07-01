//
//  20160630_9461.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 30..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>

long long int dp[105];

int main() {
    int T;
    int N;
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    
    scanf("%d",&T);
    
    for(int i=0;i<T;i++) {
        scanf("%d",&N);
        if(N<=4) {
            printf("%lld\n",dp[N]);
        }else {
            for(int j=5;j<=N;j++) {
                dp[j] = dp[j-3] + dp[j-2];
            }
            printf("%lld\n",dp[N]);
        }
    }
    
}
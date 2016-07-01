//
//  20160628_2579.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 28..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

int dp[3][305]={0};
int arr[305]={0};

int main() {
    
    int N;

    scanf("%d",&N);
    arr[0] = 0;
    for(int i=1;i<=N;i++) {
        scanf("%d",&arr[i]);
    }
    
    dp[1][1] = arr[1];
    dp[1][2] = arr[1] + arr[2];
    dp[2][1] = 0;
    dp[2][2] = arr[2];
    
    for(int i=3;i<=N;i++) {
        dp[1][i] = dp[2][i-1] + arr[i];
        dp[2][i] = max(dp[1][i-2],dp[2][i-2]) + arr[i];
    }
    
    printf("%d\n",max(dp[1][N],dp[2][N]));
}
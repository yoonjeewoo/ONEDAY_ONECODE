//
//  20160629_2293.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 29..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
int a[101];
int dp[10001];
int n,k;
int main()
{
    scanf("%d%d",&n,&k);
    for(int i=0;i<n;)scanf("%d",&a[i++]);
    dp[0]++;
    for(int i=0;i<n;i++)
    {
        for(int j=a[i];j<=k;j++)
        {
            dp[j]+=dp[j-a[i]];
        }
    }
    printf("%d",dp[k]);
}
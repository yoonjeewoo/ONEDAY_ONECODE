//
//  20160622_2441.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 22..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include<stdio.h>

int main() {
    int N;
    scanf("%d",&N);
    for(int i=0;i<=N;i++) {
        for(int j=1;j<=N;j++) {
            if(j<=i) {
                printf(" ");
            }else {
                printf("*");
            }
        }
        printf("\n");
    }
}

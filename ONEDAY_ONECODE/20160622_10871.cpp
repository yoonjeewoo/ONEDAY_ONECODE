//
//  20160622_10871.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 22..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>

int main() {
    int N,X;
    int A[10005] = {0};
    
    scanf("%d %d",&N,&X);
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    
    for(int j=0;j<N;j++) {
        if(A[j]<X) {
            printf("%d ",A[j]);
        }
    }
    
}
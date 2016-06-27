//
//  20160626_11403.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 26..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>

int matrix[101][101];

int main() {
    int N;
    
    scanf("%d",&N);
    
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            scanf("%d",&matrix[i][j]);
        }
    }
    
    for(int k=0;k<N;k++) {
        for(int i=0;i<N;i++) {
            for(int j=0;j<N;j++) {
                if(matrix[i][k]&&matrix[k][j]) {
                    matrix[i][j]=1;
                }
            }
        }
    }
    
    for(int i=0;i<N;i++) {
        for(int j=0;j<N;j++) {
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    

}
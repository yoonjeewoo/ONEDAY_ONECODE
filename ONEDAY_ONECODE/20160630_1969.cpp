//
//  2060630_1969.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 30..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>

char dna[1005][55];
int main() {
    int N,M;
    int cnt=0;
    scanf("%d %d",&N,&M);
    
    for(int i=0;i<N;i++) {
        scanf("%s",dna[i]);
    }
    
    for(int i=0;i<M;i++) {
        int TGCA[4] = {0};
        for(int j=0;j<N;j++) {
            if(dna[j][i] == 'T') {
                TGCA[0]++;
            }else if(dna[j][i] == 'G') {
                TGCA[1]++;
            }else if(dna[j][i] == 'C') {
                TGCA[2]++;
            }else {
                TGCA[3]++;
            }
        }
        int max = 0;
        int max_index = -1;
        for(int k=0;k<4;k++) {
            if(max <= TGCA[k]) {
                max = TGCA[k];
                max_index = k;
            }
        }
        if(max_index==0) {
            printf("T");
        }else if(max_index==1) {
            printf("G");
        }else if(max_index==2) {
            printf("C");
        }else {
            printf("A");
        }
        cnt += (N-max);
    }
    printf("\n%d\n",cnt);
    
}
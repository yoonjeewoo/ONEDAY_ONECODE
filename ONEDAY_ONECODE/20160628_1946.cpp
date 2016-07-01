//
//  20160628_1946.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 28..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
    int T;
    int N;
    int s,m;
    int check=0;
    int cnt=0;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++) {
        scanf("%d",&N);
        vector<pair<int, int>> v;
        for(int j=0;j<N;j++) {
            scanf("%d %d",&s,&m);
            v.push_back(make_pair(s, m));
        }
        sort(v.begin(),v.end());
        for(int k=N-1;k>=0;k--) {
            for(int z=k-1;z>=0;z--) {
                if(v[k].second>v[z].second) {
                    check=1;
                }
            }
            if(check==1) {
                cnt+=1;
                check=0;
            }
        }
        
        printf("%d\n",N-cnt);
        
        
        cnt=0;
    }
    
}
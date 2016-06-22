//
//  20160622_5397.cpp
//  ONEDAY_ONECODE
//
//  Created by 윤 지우 on 2016. 6. 22..
//  Copyright © 2016년 YOONJEEWOO. All rights reserved.
//

#include <stdio.h>
#include <stack>

using namespace std;
int cha_array_length(char *input)
{
    int count=0;
    while(input[count] != '\0') count++;
    return count;
}
int main() {
    stack<char>st1;
    stack<char>st2;
    int N;
    
    scanf("%d",&N);
    for(int j=0;j<N;j++) {
        char input[1000005]={""};
        scanf("%s",input);
        int size = cha_array_length(input);
        
        for(int i=0;i<size;i++) {

            if(input[i] == '<') {
                if(st1.empty()) {
                
                }else {
                    st2.push(st1.top());
                    st1.pop();
                }
            }else if(input[i] == '>') {
                if(st2.empty()) {
                    
                }else {
                    st1.push(st2.top());
                    st2.pop();
                }
            }else if(input[i] == '-') {
                if(st1.empty()) {
                    
                }else {
                    st1.pop();
                }
            }else {
                st1.push(input[i]);
            }
        }
    
        unsigned long stack1 = st1.size();
        for(int i=0;i<stack1;i++) {
            st2.push(st1.top());
            st1.pop();
        }
        unsigned long stack2 = st2.size();
        for(int i=0;i<stack2;i++) {
            printf("%c",st2.top());
            st2.pop();
        }
        printf("\n");
    }
    
}
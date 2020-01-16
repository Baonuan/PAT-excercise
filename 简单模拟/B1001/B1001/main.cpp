//
//  main.cpp
//  B1001
//
//  Created by 保暖 on 2020/1/16.
//  Copyright © 2020 保暖. All rights reserved.
//
//
#include<stdio.h>

int main()
{
    int n,step=0;
    scanf("%d",&n);
    while(n!=1)
    {
        
        if(n%2 == 0)
            n=n/2;
        else
            n=(3*n+1)/2;
        step+=1;
    }
    printf("%d\n",step);
    return 1;
}



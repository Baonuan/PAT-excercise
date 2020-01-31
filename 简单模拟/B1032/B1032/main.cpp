//
//  main.cpp
//  B1032
//
//  Created by 保暖 on 2020/1/31.
//  Copyright © 2020 保暖. All rights reserved.
//
#include<stdio.h>
int main()
{
int sum,id=0,sr;//参赛人数,学校编号，成绩
int school[100001]={0};//所有学校初始值得分为0
scanf("%d",&sum);
for(int i=1;i<=sum;i++)
{
    scanf("%d %d",&id,&sr);
    school[id]+=sr;
}
int max =-1;
for(int k=1;k<=sum;k++)
{
    if(school[k]>max)
    {
        max = school[k];
        id=k;
    }
}
printf("%d %d\n",id,max);
}



//
//  main.cpp
//  sort
//
//  Created by s20181106117 on 2019/8/27.
//  Copyright © 2019 s20181106117. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a[10],i,j,n;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=0;j<n;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]<a[i+1])
            {
                a[n]=a[i];
                a[i]=a[i+1];
                a[i+1]=a[n];
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }    return 0;
}

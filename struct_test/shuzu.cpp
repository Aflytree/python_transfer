/*================================================================
*   Copyright (C) 2019 Lynxi Ltd. All rights reserved.
*   
*   @file       ：shuzu.cpp
*   @author     ：afly
*   @date       ：2019.03.11
*   @description：
*
*================================================================*/


#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <malloc.h>
#include "global.h"

using namespace std;
/**
*@param a     :
*@param b     :
*@retval      :
*@brief       :
*/

struct pp{
    int d;
    int f;
    int *list;
};
struct ctrl{
    int a;
    int b;
    int *list;
    //int c;
   // struct pp*lt;
};

int main(){
    char *ptr_array[1][3]={{"asdx","qwer","fdsfaf"}};
    //char (*ptr_arr)[3]={"asdx","qwer","fdsfaf"};
    int a[5]={1,2,3,4,5};
    int *p[3];//数组大小为3，数组类型为int*
    int*q; 
    p[0]=&a[0];//等价  p[0]=a;
    p[1]=&a[1];//等价  p[1]=a+1;
    p[2]=&a[2];//等价  p[2]=a+2;
        
    //cout<<p[2][2]<<endl; //out: 5

    cout<<**p<<endl;//**p 等价 *(*(p+0))  等价 *p[0]
    cout<<**(p+1)<<endl;//**(p+1) 等价  *p[1]
    cout<<*p[2]<<endl;
 

    //struct ctrl cl={1, 2, a, 10};
    struct ctrl cl1;
    cout<<"sizeof(int) = "<<sizeof(int)<<endl;
    //cout<<"sizeof = "<<sizeof(cl)<<endl;
    cout<<"sizeof = "<<sizeof(cl1)<<endl;
    cout<<"sizeof(p) = "<<sizeof(q)<<endl;
    cout<<"sizeof(p) = "<<sizeof(q)<<endl<<"dfdsfdsfdsf"<<endl;

    return 0;
                       
}                       
                       
                       
                       

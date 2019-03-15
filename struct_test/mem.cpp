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
#include "type.h"

using namespace std;
/**
*@param a     :
*@param b     :
*@retval      :
*@brief       :
*/
#define MEM0_SIZE 0x500
#define MEM1_SIZE 0x1000
#define MEM2_SIZE 0x2000

struct mem{
    unsigned char mem0[MEM0_SIZE];
    unsigned char mem1[MEM1_SIZE];
    unsigned char mem2[MEM2_SIZE];
    int mem0_used_space;
    int mem1_used_space;
    int mem2_used_space;

};

int getMemAddrByOffset(unsigned char*addr, unsigned char **output,  int offset){
    
    *output = addr + offset;
    return 0;
}

int readMem(){

    return 0;
}

int main(){
    unsigned char a[100] ={0,1,2,3,4,5,6,7,8,9};
    unsigned char b[10] ={10,11,12,13,14,15,16,17,18,19};
    unsigned char output[20] ={};
    uint8_t*tmp = NULL;
    int write_offset =200;
    int write_size =50;
    int read_offset = 200;
    int read_size =20;
    struct mem memInstance;

    for(int i =0 ;i<50;i++){
        a[i] = i;
    }

    getMemAddrByOffset(memInstance.mem0, &tmp, write_offset);
    memcpy(tmp, a, write_size); 
        
    for(int i = 0;i<10;i++){
        printf("memInstance.mem0[%d] =%d\n",i+10, memInstance.mem0[10 + i]);
    }

    
    getMemAddrByOffset(memInstance.mem0, &tmp, read_offset);
    memcpy(output, tmp, read_size); 
   
    for(int i = 0;i<20;i++){
        printf("output[%d] =%d\n", i, output[i]);
    }
    return 0;
                       
}                       
                       
                       
                       

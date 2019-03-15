/*================================================================
*   Copyright (C) 2019 Lynxi Ltd. All rights reserved.
*   
*   @file       ：global.h
*   @author     ：afly
*   @date       ：2019.03.05
*   @description：
*
*================================================================*/
#ifndef _GLOBAL_H
#define _GLOBAL_H

#define PROG_COUNT 0x3

struct prog_count_and_info
{
    int act;                // phase control no need
    int (*phase_list)[3];   //
    int (*nrev_list)[3];    //
    int swi; // ping-pong
    int prog_pic[2];
    int fb_num;    //
    //struct fetchblock_running_info *pfb_running_info; //
   // struct fetchblock_refresh_info *pfb_refresh_info; //
    int avg_num;     //               
    int (*avg_addr)[2]; //
    short *N_recip;  //
    struct rc_conf *rc; //
};







#endif //GLOBAL_H




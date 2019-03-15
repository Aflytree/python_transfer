/// @file main.c
/// @brief: for test 
/// @author aifei.zhang@lynxi.com
/// @version v.01 
/// @date 2019-02-12
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <malloc.h>
#include "global.h"

using namespace std;
#define PHASE_INTER_LEN 0x03
#define RECEIVE_INTER_LEN 0x03
#define GROUP_NUM  0x03
struct phase_control{
    int (*ph_con)[3];
    int len;
};

struct n_rece_control{
    int (*n_rece_con)[3];
    int len;
};

struct control{
    int *phase;
    int *list;
};

int shuzu[10] = {0,1,2,3,4,5,6,7,8,9};


void changVal(struct control ct){
    ct.phase[0] =19;
}

void changV(int ct[]){
    ct[1] =10;
}


struct fetchblock_running_info   
{   
    int FeatureWidth;   
    int FeatureHeight;   
    int max_x;
    int max_y;
    int block_width;   
    int block_height;   
    int h_stride;   
    int v_stride;   
    int BufLines;
    int img_y_offset_rem;
    int y_offset;
    int before_avg;
   // union word field_yx;   
  //  union word yx;
}; 
/*
static inline void update_position(struct fetchblock_running_info *pinfo, struct fetchblock_refresh_info *pdst)   
{   
    int tmp;
    // Update a new field   
    tmp=pinfo->yx.byte2[0] + pinfo->h_stride; 
    if (tmp <= pinfo->max_x)   
    {   
        pinfo->yx.byte2[0] = tmp;   
    }   
    else   
    {   
        tmp=pinfo->yx.byte2[1] + pinfo->v_stride; 
        if (tmp <= pinfo->max_y)   
        {             
            pinfo->yx.byte2[0] = pinfo->field_yx.byte2[0];   
            pinfo->yx.byte2[1] = tmp; 
            if(tmp > 0)
            {
                if(tmp < pinfo->v_stride)
                    pinfo->y_offset += tmp;
                else
                    pinfo->y_offset += pinfo->v_stride;
                if(pinfo->y_offset >= pinfo->BufLines)
                    pinfo->y_offset -= pinfo->BufLines;
            }
        }   
        else   
        {   
            pinfo->y_offset = pinfo->y_offset + pinfo->img_y_offset_rem;
            if(pinfo->y_offset >= pinfo->BufLines)
                pinfo->y_offset -= pinfo->BufLines;
            pinfo->yx.byte4 = pinfo->field_yx.byte4;   
        }   
    }   
    pdst->y_offset = pinfo->y_offset;   
    pdst->yx.byte4 = pinfo->yx.byte4;
*/
/*
    if(pinfo->before_avg == 1)
    {
        int n_valid;
        int n_recip;
        int x_valid = pinfo->block_width;
        int y_valid = pinfo->block_height;
        void *pprim = (void *)config_prog_pic_mc[prog_iter * 2 + roll];   
        if(pinfo->yx.byte2[0] < 0)
            x_valid += pinfo->yx.byte2[0];
        tmp=pinfo->yx.byte2[0] + pinfo->block_width - pinfo->FeatureWidth;
        if(tmp > 0)
            x_valid -= tmp;
        if(pinfo->y < 0)
            y_valid += pinfo->y;
        tmp=pinfo->y + pinfo->block_height - pinfo->FeatureHeight;
        if(tmp>0)
            y_valid-=tmp;
        n_valid=x_valid*y_valid;
        if(n_valid < N)
            *(volatile short *)(pprim+MC_CONS1_OFFSET)= N_recip[prim_iter];   
        else
        {
            n_recip=fp16_recip_int(n_valid);
            *(volatile short *)(pprim+MC_CONS1_OFFSET)= n_recip;   
        }
    }
    */
/*
}
*/
struct fetchblock_running_info fb_info0[1];
struct fetchblock_running_info* config_fetch_block_info_addr0[1] = {&fb_info0[0]};

int main(){
    int active=0;
    struct control ctrl = {&shuzu[0], NULL};
    changVal(ctrl);    
    changV(ctrl.phase);
    printf("phase0 = %d\n",ctrl.phase[0]);
    printf("phase1 = %d\n",ctrl.phase[1]);
   
    struct fetchblock_running_info *pfb = &fb_info0[0]; 
    //pfb->field_yx.byte4 = 0x0; 
    pfb->FeatureWidth = 30; 
    pfb->FeatureHeight = 30; 
    pfb->max_x = 28; 
    pfb->max_y = 28; 
    pfb->block_width = 3; 
    pfb->block_height = 3; 
    pfb->h_stride = 2; 
    pfb->v_stride = 2; 
    pfb->y_offset = 0; 
    pfb->BufLines = 4; 
    pfb->img_y_offset_rem = 2; 
    //pfb->yx.byte4 = 0x0; 
    pfb->before_avg = 0; 
    
  
   // update_position(act_progs[i]->pfb_running_info[j], &act_progs[i]->pfb_refresh_info[j]);
    
    int zz=0;
    for(zz=0;zz<10;zz++)
    {
        
    printf("phase0 = %d\n",ctrl.phase[0]);
    
    }
    printf("zz =%d\n",zz);
    
    //原语0，phase控制
    int core_prim_group_contrl0[PHASE_INTER_LEN][3]={{10,20,5},{15,5,2},{80,5,3}}; 
    //原语1，phase控制
    int core_prim_group_contrl1[PHASE_INTER_LEN][3] ={{25,5,5},{26,6,6},{27,7,7}}; 
    //原语2，phase控制
    int core_prim_group_contrl2[PHASE_INTER_LEN][3]={{10,30,4},{15,10,3},{40,2,3}}; 
  
    //原语0，n receive
    int core_prim_group_receive0[RECEIVE_INTER_LEN][3]={{11,21,5},{16,6,2},{81,6,3}}; 
    //原语1，n receive
    int core_prim_group_receive1[RECEIVE_INTER_LEN][3] ={{11,9,5},{2,3,6},{27,8,7}}; 
    //原语2，n receive
    int core_prim_group_receive2[RECEIVE_INTER_LEN][3]={{14,35,4},{18,11,3},{30,3,3}};
    
    int config_recip_addr_avg[2][2] = {0x55184, 0x40190};
  
    int prog_pic[2] = {0x40180, 0x401a0};
    int fetch_block_num = 0;
    int config_avg_num = 10;
    short N_recip[1000] = {15,12,11,11,13,4,7,8,9};
    struct prog_count_and_info prog_count[PROG_COUNT];
    struct phase_control p_con[PROG_COUNT];
    int m=0,k=0;
    //
    //分配空间
    for(m=0;m<PROG_COUNT;m++){
        p_con[m].len = PHASE_INTER_LEN;
        p_con[m].ph_con = (int (*)[3])malloc(p_con[m].len*3*sizeof(int));
    }
    //初始化
    for(m=0;m<PHASE_INTER_LEN;m++){
        p_con[0].ph_con[m][0] = core_prim_group_contrl0[m][0];
        p_con[0].ph_con[m][1] = core_prim_group_contrl0[m][1];
        p_con[0].ph_con[m][2] = core_prim_group_contrl0[m][2];
    }

    for(m=0;m<PHASE_INTER_LEN;m++){
        p_con[1].ph_con[m][0] = core_prim_group_contrl1[m][0];
        p_con[1].ph_con[m][1] = core_prim_group_contrl1[m][1];
        p_con[1].ph_con[m][2] = core_prim_group_contrl1[m][2];
    }
    for(m=0;m<PHASE_INTER_LEN;m++){
        p_con[2].ph_con[m][0] = core_prim_group_contrl2[m][0];
        p_con[2].ph_con[m][1] = core_prim_group_contrl2[m][1];
        p_con[2].ph_con[m][2] = core_prim_group_contrl2[m][2];
    }

    for(int i = 0;i < PROG_COUNT;i++){
        prog_count[i].phase_list = (int (*)[3])malloc(GROUP_NUM*3*sizeof(int));
        //prog_count[i].N_recip = (short*)malloc(10*sizeof(short));
        for(int j= 0;j< PHASE_INTER_LEN;j++){
            prog_count[i].phase_list[j][0] = p_con[i].ph_con[j][0];
            prog_count[i].phase_list[j][1] = p_con[i].ph_con[j][1];
            prog_count[i].phase_list[j][2] = p_con[i].ph_con[j][2];
        }
        prog_count[i].N_recip =&N_recip[0];
       // prog_count[i].N_recip =N_recip; //也可以
    }

    // struct prog_count_and_info prog_count[PROG_COUNT] = {{0, core_prim_group_contrl0}, {0, core_prim_group_contrl1}, {0, core_prim_group_contrl2}};
   
    //struct prog_count_and_info prog_count[PROG_COUNT] = {{0, core_prim_group_contrl0, core_prim_group_receive0, 0, {prog_pic[0],prog_pic[1]}}}; //ZAF
    //struct prog_count_and_info prog_count[PROG_COUNT] = {{0, core_prim_group_contrl0, core_prim_group_receive0, 0, {prog_pic[0],prog_pic[1]},fetch_block_num},
      //                                                   {0, core_prim_group_contrl1, core_prim_group_receive1, 0, {prog_pic[0],prog_pic[1]},fetch_block_num},
        //                                                 {0, core_prim_group_contrl2, core_prim_group_receive2, 0, {prog_pic[0],prog_pic[1]},fetch_block_num},
          //                                              }; //ZAF
/*   
    for(int j=0;j<3;j++){
       prog_count[0].phase_list[j][0]=0x55;
       prog_count[0].phase_list[j][1]=0x55;
       prog_count[0].phase_list[j][2]=0x55;
    }
  */

    int z=0;
    for(z=0;z < GROUP_NUM;z++){
        int i=0;
        for(i=0;i< PHASE_INTER_LEN;i++){
            cout<<prog_count[z].phase_list[i][0]<<" "<<prog_count[z].phase_list[i][1]<<" "<<prog_count[z].phase_list[i][2] <<endl;
        }
        cout<<"next"<<endl;
        for(int j=0;j<10;j++){
            cout<< "N_recip = "<<prog_count[z].N_recip[j]<<endl;
        }
    }
    
    for(m=0;m<PROG_COUNT;m++){
        free(p_con[m].ph_con);
        free(prog_count[m].phase_list);
    }
    
    return 0;
}

#include "stdafx.h"
#include "MyRand.h"

#include <time.h>



/////////////////////////////////随机数函数////////////////////////////////////

#define random(num)   (rand() % (num))   //定义random函数

int R;    //由当前系统时间产生真正的随机数种子
struct tm *t;
time_t timer;


void init_rand()
{
  //取系统时间得到随机数种子  小时+秒
 timer=time(NULL);
 t=localtime(&timer);
 R=t->tm_hour + t->tm_sec;
 srand(R);


}



int Xrand(int A,int B)   //随机数发生器
{
 int x;

 while(1)
    {
     x=random(B+1);

     if(x>=A) break;

    }

 return(x);

}







//////////////////////////////////////////////////////////////////




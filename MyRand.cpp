#include "stdafx.h"
#include "MyRand.h"

#include <time.h>



/////////////////////////////////���������////////////////////////////////////

#define random(num)   (rand() % (num))   //����random����

int R;    //�ɵ�ǰϵͳʱ��������������������
struct tm *t;
time_t timer;


void init_rand()
{
  //ȡϵͳʱ��õ����������  Сʱ+��
 timer=time(NULL);
 t=localtime(&timer);
 R=t->tm_hour + t->tm_sec;
 srand(R);


}



int Xrand(int A,int B)   //�����������
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




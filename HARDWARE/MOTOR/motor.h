#ifndef __MOTOR_H
#define __MOTOR_H	 
#include "sys.h"

#define EN_A PBout(2)// PC2
#define EN_B PEout(3)// PC3	

void LeftfrontBack(void);//��ǰ  ��   !
void LeftfrontGo(void);//��ǰ  ��     ��

void LeftrearBack(void); //��� ��  
void LeftrearGo(void); //���   ��

void RightbackGo(void); //�Һ� ��  
void RightbackBack(void); //�Һ� ��

void RightfrontBack(void);//��ǰ  ��
void RightfrontGo(void);//��ǰ ��

void GOGOGO(void);
void BackBackBack(void);



void LeftfrontBreak(void);
void LeftrearBreak(void);
void RightbackBreak(void);
void RightfrontBreak(void);

#endif



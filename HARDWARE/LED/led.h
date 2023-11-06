#ifndef __LED_H
#define __LED_H	 
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//������ֻ��ѧϰʹ�ã�δ��������ɣ��������������κ���;
//ALIENTEKս��STM32������
//LED��������	   
//����ԭ��@ALIENTEK
//������̳:www.openedv.com
//�޸�����:2012/9/2
//�汾��V1.0
//��Ȩ���У�����ؾ���
//Copyright(C) ������������ӿƼ����޹�˾ 2009-2019
//All rights reserved									  
////////////////////////////////////////////////////////////////////////////////// 
//OUT1-PA4  OUT3-PA6 OUT2-PA5 OUT4-PA7 ��
#define LED0 PBout(5)// PB5
#define LED1 PEout(5)// PE5	


#define LED4  PCout(13)//PC13  ����LED��IO�ڣ�PCout��13��ָ GPIOC_Pin_13 ���ģʽ
#define KEY0  PAin(0) //����

#define OUT1  PAin(4)//��
#define OUT2  PAin(5)
#define OUT3  PAin(6)
#define OUT4  PAin(7)

/////////////////////////////////////////////////////////////////////////////////////

void LED_Init(void);//��ʼ��

void KEY_Init(void);
void KEY_Scan(void);
		 				    
#endif

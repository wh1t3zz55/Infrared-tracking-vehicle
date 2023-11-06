#include "led.h"
#include "delay.h"
#include "motor.h"
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
//OUT1-PA4  OUT3-PA6 OUT2-PA5 OUT4-PA7
//��ʼ��Ϊ�����.��ʹ���������ڵ�ʱ��		    
//LED IO��ʼ��

void LED_Init(void)
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC|RCC_APB2Periph_GPIOA, ENABLE);		 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO

}

void KEY_Init(void)
{
  GPIO_InitTypeDef  GPIO_InitStructure;
  RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);		 //ʹ�ܶ˿�ʱ��
  GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0;				 //LED0--> �˿�����
  GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPD ; 		 //��������
  GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
  GPIO_Init(GPIOA, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	

}

void KEY_Scan(void)
 {
		
	if(OUT4 == 0&&OUT1 == 0&&OUT2 == 1&&OUT3 == 1)   //ֱ��
		{
				delay_ms(5);//����
				if(OUT4 == 0&&OUT1 == 0&&OUT2 == 1&&OUT3 == 1)
				{
					 //LED4 =~LED4;
					//delay_ms(50);
					GOGOGO();
					delay_ms(35);
				}
		}
		
		if(OUT4 == 0&&OUT1 == 0&&OUT2 == 1&&OUT3 == 0)   //ֱ��
		{
				delay_ms(5);//����
				if(OUT4 == 0&&OUT1 == 0&&OUT2 == 1&&OUT3 == 0)
				{
					 //LED4 =~LED4;
					//delay_ms(50);
					GOGOGO();
					delay_ms(35);
				}
		}
		if(OUT4 == 0&&OUT1 == 0&&OUT2 == 0&&OUT3 == 1)   //ֱ��
		{
				delay_ms(5);//����
				if(OUT4 == 0&&OUT1 == 0&&OUT2 == 0&&OUT3 == 1)
				{
					 //LED4 =~LED4;
					//delay_ms(50);
					GOGOGO();
					delay_ms(35);
				}
		}
			if(OUT1 == 1&&OUT2 == 1&&OUT3 == 1&&OUT4 == 1)   //�����ͣ
		{
				delay_ms(5);//����
				if(OUT1 == 1&&OUT2 == 1&&OUT3 == 1&&OUT4 == 1)
				{
					 //LED4 =~LED4;
					//delay_ms(50);
					 RightfrontBreak();
					 LeftfrontBreak();
           LeftrearBreak();
           RightbackBreak();
           
				}
		}
		
		if(OUT4 == 1&&OUT3 == 1&&OUT2 == 0&&OUT1 == 0)   //��ת
		{
				delay_ms(5);//����
				if(OUT4 == 1&&OUT3 == 1&&OUT2 == 0&&OUT1 == 0)
				{
					RightfrontGo();//��ǰ ��
					RightbackGo(); //�Һ� �� 
					LeftfrontBreak();
          LeftrearBreak();
				}
		}
		
/*				if(OUT4 == 1&&OUT3 == 0&&OUT2 == 0&&OUT1 == 0)   //��ת
		{
				delay_ms(5);//����
				if(OUT4 == 1&&OUT3 == 0&&OUT2 == 0&&OUT1 == 0)
				{
					RightfrontGo();//��ǰ ��
					RightbackGo(); //�Һ� �� 
					LeftfrontBack();
          LeftrearBack();///!!!!
				}
		}
		*/
			if(OUT1 == 1&&OUT2 == 1&&OUT3 == 0&&OUT4 == 0)   //��ת
		{
				delay_ms(5);//����
				if(OUT1 == 1&&OUT2 == 1&&OUT3 == 0&&OUT4 == 0)
				{
					LeftfrontGo();//��ǰ  �� 
					LeftrearGo(); //���  ��
          RightbackBreak();
          RightfrontBreak();					
				}
		}
		
/*		if(OUT1 == 1&&OUT2 == 0&&OUT3 == 0&&OUT4 == 0)   //��ת
		{
				delay_ms(5);//����
				if(OUT1 == 1&&OUT2 == 0&&OUT3 == 0&&OUT4 == 0)
				{
					LeftfrontGo();//��ǰ  �� 
					LeftrearGo(); //���  ��
          RightfrontBack();
          RightbackBack();/////!!!
				}
		}
		*/
		/*if(OUT4 == 0&&OUT1 == 0&&OUT2 == 0&&OUT3 == 0)   //����
		{
				delay_ms(5);//����
				if(OUT4 == 0&&OUT1 == 0&&OUT2 == 0&&OUT3 == 0)
				{
					 
					BackBackBack();
				}
		}
		*/
	}
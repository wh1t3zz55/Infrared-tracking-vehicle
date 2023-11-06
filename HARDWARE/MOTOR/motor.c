#include "motor.h"
//��ʼ��Ϊ�����.��ʹ���������ڵ�ʱ��		    
//QL298N EN-A��B��ʼ��
////////////////////////////////////////////////////////////////////////
void LeftfrontBack(void)//pc6 pc0 pc1    ��ǰ�ַ�ת
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1|GPIO_Pin_6;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_1|GPIO_Pin_6);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_0);
 
}
 
void LeftfrontGo(void)//pc6 pc0 pc1
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1|GPIO_Pin_6;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_6);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_1);
 
}
/////////////////////////////////////////////////////////////////////////
void LeftrearBack(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_12;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);	 //ʹ�ܶ˿�ʱ��	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;				 //�˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOD, &GPIO_InitStructure);


 GPIO_ResetBits(GPIOD,GPIO_Pin_2);	
 GPIO_SetBits(GPIOC,GPIO_Pin_9|GPIO_Pin_12);
}

void LeftrearGo(void)//
{
 
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_12;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
 		
	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);	 //ʹ�ܶ˿�ʱ��	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;				 //�˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOD, &GPIO_InitStructure);
	GPIO_ResetBits(GPIOC,GPIO_Pin_12);
  GPIO_SetBits(GPIOC,GPIO_Pin_9);		
  GPIO_SetBits(GPIOD,GPIO_Pin_2);
}
////////////////////////////////////////////////////////////////
void RightbackGo(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_10|GPIO_Pin_11;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_11|GPIO_Pin_8);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_10);
 
}

void RightbackBack(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_10|GPIO_Pin_11;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_8|GPIO_Pin_10);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_11);
}


void RightfrontBack(void)//��ǰ �� 
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_3|GPIO_Pin_7;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_3|GPIO_Pin_7);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_2);
}

void RightfrontGo(void)//��ǰ ��
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_3|GPIO_Pin_7;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 GPIO_SetBits(GPIOC,GPIO_Pin_2|GPIO_Pin_7);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_3);
}

///////////////////////////////////ǰ������
void GOGOGO(void)
{
  LeftfrontGo();//��ǰ  ��
  RightfrontGo();//��ǰ ��
	 RightbackGo(); //�Һ� �� 
	 LeftrearGo(); //���   ��
}

void BackBackBack(void)
{
	RightbackBack(); //�Һ� ��
	LeftrearBack(); //��� �� 
  RightfrontBack();//��ǰ  ��
	LeftfrontBack();//��ǰ  �� 
	
}









////////////////////////////////////////////////ֹͣ
void LeftfrontBreak(void)
{
GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1|GPIO_Pin_6;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
		
 GPIO_ResetBits(GPIOC,GPIO_Pin_0|GPIO_Pin_6|GPIO_Pin_1);
}

void LeftrearBreak(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_9 | GPIO_Pin_12;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);	 //ʹ�ܶ˿�ʱ��	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;				 //�˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOD, &GPIO_InitStructure);


 GPIO_ResetBits(GPIOD,GPIO_Pin_2);	
 GPIO_ResetBits(GPIOC,GPIO_Pin_9|GPIO_Pin_12);
}

void RightbackBreak(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8 | GPIO_Pin_10|GPIO_Pin_11;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 GPIO_ResetBits(GPIOC,GPIO_Pin_8|GPIO_Pin_10);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_11);
}


void RightfrontBreak(void)
{
 GPIO_InitTypeDef  GPIO_InitStructure;
 	
 RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);	 //ʹ�ܶ˿�ʱ��
	
 GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2 | GPIO_Pin_3|GPIO_Pin_7;				 //LED0--> �˿�����
 GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP; 		 //�������
 GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;		 //IO���ٶ�Ϊ50MHz
 GPIO_Init(GPIOC, &GPIO_InitStructure);					 //�����趨������ʼ��GPIO
	
 GPIO_ResetBits(GPIOC,GPIO_Pin_3|GPIO_Pin_7);			
 GPIO_ResetBits(GPIOC,GPIO_Pin_2);
}
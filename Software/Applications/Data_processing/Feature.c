#include "Processing_library.h"


/*******************************************************************************
 * @name:			Historical_Differences
 * @instructions:	��ʷ���ݱȽϺ���
 * @input:			data:�Ƚϵ�����
 *					sign:�Ƚ����ݵı��
 * @output:			return_data
 *****************************************************************************/
#define		HDZ_NUM		10
MY_Return Historical_Differences(int data, uint8_t sign)
{
		MY_Return return_data;
		static int save[HDZ_NUM];
	
		if(data == save[sign])		return_data = MY_PASS;
		else 											return_data = MY_UNPASS;
	
		save[sign] = data;
		
		return return_data;
}


/*******************************************************************************
 * @name:				Array_Return_Num
 * @instructions:		��ȡ�����
 * @input:				array:����
 *						len:���鳤��
* @output:				out_data:���������ֵ
 *****************************************************************************/
uint32_t Array_Return_Num(uint16_t array[],uint16_t len)
{
		uint32_t out_data = 0;
	
		for(int i=0;i<len;i++)		out_data += array[i];
		
		return out_data;
}

/*******************************************************************************
 * @name:				Array_Return_Max
 * @instructions:		��ȡ�������ֵ
 * @input:				array:����
 *						len:���鳤��
* @output:				out_data:���������ֵ
 *****************************************************************************/
uint16_t Array_Return_Max(uint16_t array[],uint16_t len)
{
		uint16_t out_data = array[0];
	
		for(int i=1;i<len;i++)
		{
				if(array[i] > out_data)		out_data = array[i];
		}
		
		return out_data;
}


/*******************************************************************************
 * @name:				Array_Return_Max_Sub
 * @instructions:		��ȡ�������ֵ�±�
 * @input:				array:����
 *						len:���鳤��
 * @output:				out_data:���������ֵ
 *****************************************************************************/
uint16_t Array_Return_Max_Sub_Z(uint16_t array[],uint16_t len)
{
		uint16_t out_data = 0;
		uint16_t max = array[0];
	
		for(int i=1;i<len;i++)
		{
				if(array[i] > max)
				{
						max = array[i];
						out_data = i;
				}
		}
		
		return out_data;
}


/*******************************************************************************
 * @name:				Array_Return_Min
 * @instructions:		��ȡ������Сֵ
 * @input:				array:����
 *						len:���鳤��
 * @output:				out_data:��������Сֵ
 *****************************************************************************/
uint16_t Array_Return_Min(uint16_t array[],uint16_t len)
{
		uint16_t out_data = array[0];
	
		for(int i=1;i<len;i++)
		{
				if(array[i] < out_data)		out_data = array[i];
		}
		
		return out_data;		
}

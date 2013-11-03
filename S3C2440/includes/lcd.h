/**************************************************
**	�ļ���:lcd.h
**	�汾��:V 1.0
**	�ļ�˵��:����LCD��ز���
**		ʹ�ò�ͬ�������޸ĵ�13�е�Ԥ������
***************************************************/

#define S35		1
#define W35		2
#define T35		3
#define W43		4
#define VGA		5
#define TFT70		6

#define LCD_TYPE	W43		//��ʾ����ѡ��

#define MVAL		(13)
#define MVAL_USED 	(0)		//0=each frame   1=rate by MVAL
#define INVVDEN		(1)		//0=normal       1=inverted
#define BSWP		(0)		//Byte swap control
#define HWSWP		(1)		//Half word swap control

#define M5D(n) ((n) & 0x1fffff)	// To get lower 21bits

#if(LCD_TYPE == S35)
//TFT 320240
#define LCD_XSIZE_TFT 	(320)	
#define LCD_YSIZE_TFT 	(240)

#define SCR_XSIZE_TFT 	(320)
#define SCR_YSIZE_TFT 	(240)

//Timing parameter for LCD LTV350QV-F0E
#define VBPD                      (3)		//��ֱͬ���źŵĺ��
#define VFPD                      (5)		//��ֱͬ���źŵ�ǰ��
#define VSPW                      (15)		//��ֱͬ���źŵ�����

#define HBPD                      (5)		//ˮƽͬ���źŵĺ��
#define HFPD                      (15)		//ˮƽͬ���źŵ�ǰ��
#define HSPW                      (8)		//ˮƽͬ���źŵ�����

#define CLKVAL_TFT           (7) 	
//FCLK=180MHz,HCLK=90MHz,VCLK=6.5MHz

#elif(LCD_TYPE == W35)
//TFT 320240
#define LCD_XSIZE_TFT 	(320)	
#define LCD_YSIZE_TFT 	(240)

#define SCR_XSIZE_TFT 	(320)
#define SCR_YSIZE_TFT 	(240)

//Timing parameter for LCD LTV350QV-F0E
#define VBPD                      (12)		//��ֱͬ���źŵĺ��
#define VFPD                      (4)		//��ֱͬ���źŵ�ǰ��
#define VSPW                      (5)		//��ֱͬ���źŵ�����

#define HBPD                      (22)		//ˮƽͬ���źŵĺ��
#define HFPD                      (33)		//ˮƽͬ���źŵ�ǰ��
#define HSPW                      (44)		//ˮƽͬ���źŵ�����

#define CLKVAL_TFT           (6) 	
//FCLK=180MHz,HCLK=90MHz,VCLK=6.5MHz

#elif(LCD_TYPE == T35)
//TFT 240320
#define LCD_XSIZE_TFT 	(240)	
#define LCD_YSIZE_TFT 	(320)

#define SCR_XSIZE_TFT 	(240)
#define SCR_YSIZE_TFT 	(320)

//Timing parameter for LCD TFT NEC
#define VBPD                      (1)		//��ֱͬ���źŵĺ��
#define VFPD                      (5)		//��ֱͬ���źŵ�ǰ��
#define VSPW                      (1)		//��ֱͬ���źŵ�����

#define HBPD                      (2)		//ˮƽͬ���źŵĺ��
#define HFPD                      (2)		//ˮƽͬ���źŵ�ǰ��
#define HSPW                      (1)		//ˮƽͬ���źŵ�����

#define CLKVAL_TFT           (4) 	
//FCLK=180MHz,HCLK=90MHz,VCLK=6.5MHz

#elif(LCD_TYPE == W43)
//TFT 320240
#define LCD_XSIZE_TFT 	(480)	
#define LCD_YSIZE_TFT 	(272)

#define SCR_XSIZE_TFT 	(480)
#define SCR_YSIZE_TFT 	(272)

//TFT_SIZE
#define LCD_XSIZE_TFT 	(480)	
#define LCD_YSIZE_TFT 	(272)

#define SCR_XSIZE_TFT 	(480)
#define SCR_YSIZE_TFT 	(272)

//Timing parameter for 4.3' LCD
#define VBPD 		(2)			//��ֱͬ���źŵĺ��
#define VFPD 		(4)			//��ֱͬ���źŵ�ǰ��
#define VSPW 		(8)			//��ֱͬ���źŵ�����

#define HBPD 		(10)			//ˮƽͬ���źŵĺ��
#define HFPD 		(19)			//ˮƽͬ���źŵ�ǰ��
#define HSPW 		(30)			//ˮƽͬ���źŵ�����

#define CLKVAL_TFT 	(4) 	

#elif(LCD_TYPE == VGA)				// VGA
//TFT 640480
#define LCD_XSIZE_TFT 	(640)	
#define LCD_YSIZE_TFT 	(480)

#define SCR_XSIZE_TFT 	(640)
#define SCR_YSIZE_TFT 	(480)

//Timing parameter for VGA
#define VBPD                      (29)		//��ֱͬ���źŵĺ��
#define VFPD                      (5)		//��ֱͬ���źŵ�ǰ��
#define VSPW                      (4)		//��ֱͬ���źŵ�����

#define HBPD                      (71)		//ˮƽͬ���źŵĺ��
#define HFPD                      (40)		//ˮƽͬ���źŵ�ǰ��
#define HSPW                      (31)		//ˮƽͬ���źŵ�����

#define CLKVAL_TFT			(1) 	

#elif(LCD_TYPE == TFT70)
//TFT 800480
#define LCD_XSIZE_TFT 	(800)	
#define LCD_YSIZE_TFT 	(480)

#define SCR_XSIZE_TFT 	(800)
#define SCR_YSIZE_TFT 	(480)

//Timing parameter for LCD LTP700WV-F01
#define VBPD                      (4)		//��ֱͬ���źŵĺ��
#define VFPD                      (2)		//��ֱͬ���źŵ�ǰ��
#define VSPW                      (2)		//��ֱͬ���źŵ�����

#define HBPD                      (27)		//ˮƽͬ���źŵĺ��
#define HFPD                      (14)		//ˮƽͬ���źŵ�ǰ��
#define HSPW                      (8)		//ˮƽͬ���źŵ�����

#define CLKVAL_TFT           (2) 	
//FCLK=180MHz,HCLK=90MHz,VCLK=6.5MHz

#endif

#define HOZVAL_TFT          (LCD_XSIZE_TFT -1)
#define LINEVAL_TFT         (LCD_YSIZE_TFT -1)


#if(LCD_TYPE == T35)
	extern unsigned char TQ_LOGO_240320[];
#elif((LCD_TYPE == W35) || (LCD_TYPE == S35))
	extern unsigned char phone[];
#elif(LCD_TYPE == W43)
	extern unsigned char TQ_LOGO_480272[];
#elif(LCD_TYPE == VGA)
	extern unsigned char VGA_ucos[];
#elif(LCD_TYPE == TFT70)
	extern unsigned char TFT70_ucos[];
#endif


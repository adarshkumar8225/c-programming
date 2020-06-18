#include<reg51.h>
//Declaration of 4 X 3 keypad.
sbit r1=P1^0; //row declaration.
sbit r2=P1^1;
sbit r3=P1^2;
sbit r4=P1^3;
sbit c1=P1^4; //column declaration.
sbit c2=P1^5;
sbit c3=P1^6;

sbit rs=P3^0;
sbit rw=P3^1;
sbit en=P3^2;
sfr lcd=0xa0;//address of port 2.
void lcdcmd(unsigned char);
void lcddat(unsigned char);
void delay();
void main()
{
	P2=0x00;
	lcdcmd(0x38);//5 X 7 matrix
	delay();
	lcdcmd(0x01);// clear display
	delay();
	lcdcmd(0x06);//cursor blinking.
	delay();
	lcdcmd(0x0c);//display on.
	delay();
	lcdcmd(0x81);
	delay();
	while(1)
	{
		r1=0;
		if(c1==0)
		{
			lcddat('O');
			delay();
			lcddat('N');
			delay();
			lcddat('E');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
		}
		else if(c2==0)
		{
			lcddat('T');
			delay();
			lcddat('W');
			delay();
			lcddat('O');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
			
		}
		else if(c3==0)
		{
			lcddat('T');
			delay();
			lcddat('H');
			delay();
			lcddat('R');
			delay();
			lcddat('E');
			delay();
			lcddat('E');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
			
		}
		//row 2 scanning.
		r1=1;
		r2=0;
		if(c1==0)
		{
			lcddat('F');
			delay();
			lcddat('O');
			delay();
			lcddat('U');
			delay();
			lcddat('R');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
		}
		else if(c2==0)
		{
			lcddat('F');
			delay();
			lcddat('I');
			delay();
			lcddat('V');
			delay();
			lcddat('E');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();

			
		}
		else if(c3==0)
		{
			lcddat('S');
			delay();
			lcddat('I');
			delay();
			lcddat('X');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
		}

		//row 3 scanning.
		r2=1;
		r3=0;
		if(c1==0)
		{
			lcddat('S');
			delay();
			lcddat('E');
			delay();
			lcddat('V');
			delay();
			lcddat('E');
			delay();
			lcddat('N');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
		}
		else if(c2==0)
		{
			lcddat('E');
			delay();
			lcddat('I');
			delay();
			lcddat('G');
			delay();
			lcddat('H');
			delay();
			lcddat('T');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
			
		}
		else if(c3==0)
		{
			lcddat('N');
			delay();
			lcddat('I');
			delay();
			lcddat('N');
			delay();
			lcddat('E');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();	
			
		}
		//row 4 scanning.
		r3=1;
		r4=0;
		if(c1==0)
		{
			lcddat('S');
			delay();
			lcddat('T');
			delay();
			lcddat('A');
			delay();
			lcddat('R');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
		}
		else if(c2==0)
		{
			lcddat('Z');
			delay();
			lcddat('E');
			delay();
			lcddat('R');
			delay();
			lcddat('O');
			delay();

			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
		}
		else if(c3==0)
		{
			lcddat('H');
			delay();
			lcddat('A');
			delay();
			lcddat('S');
			delay();
			lcddat('H');
			delay();
			delay();
			delay();
			lcdcmd(0x01);// clear display
	        delay();
			
		}
		r4=1;

	}	 
}

void lcdcmd(unsigned char val)
{
	P2=val;
	rs=0;
	rw=0;
	en=1;
	delay();
	en=0;
}

void lcddat(unsigned char dat)
{
	P2=dat;
	rs=1;
	rw=0;
	en=1;
	delay();
	en=0;
}

void delay()
{
	unsigned int i;
	for(i=0;i<6000;i++);	
}

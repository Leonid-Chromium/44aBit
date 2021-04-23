/*
 * 44aBit.c
 *
 * Created: 23.04.2021 22:46:21
 * Author : Leo
 */ 

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>

ISR(TIM1_OVF_vect)
{
	PORTA=0xff;
	_delay_ms(20);
	PORTA=0;
	_delay_ms(20);
	PORTA=0xff;
	_delay_ms(20);
	PORTA=0;
	_delay_ms(20);
	PORTA=0xff;
	_delay_ms(20);
	PORTA=0;
	_delay_ms(20);
	PORTA=0xff;
	_delay_ms(20);
	PORTA=0;
	_delay_ms(20);
	PORTA=0xff;
	_delay_ms(20);
	PORTA=0;
	_delay_ms(20);
	PORTA=0xff;
	_delay_ms(20);
	PORTA=0;
	_delay_ms(20);
}

int main(void)
{
	TIMSK1 |= (1<<TOIE1);//���������� �� ������ �������.��������
	TCCR1B |= (0<<CS12)|(0<<CS11)|(1<<CS10); //������ ��� �����������
	TCNT1 = 0;//�������� ������/�������
	
	sei();//��������� ��������� ����������
	
	DDRA=0xff;
	
    while (1) 
    {
    }
}


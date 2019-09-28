#include <stdio.h>
#include <time.h>
#include <windows.h>

#define SIZE 2500
#define DOT 46
#define LONG_DOT 45

void delay(int number_of_seconds);
void dot(int time);
void long_dot(int time);
void space(int time);
void let(char* chr, int time);

int main()
{
	int j = 0;
	int del = 250;
	char x[SIZE] = "";

	printf("enter string: ");
	scanf("%s", &x);
	
	printf("enter time: ");
	scanf("%d", &del);

	for(j = 0; x[j]!='\0'; j++)
	{
		let(&x[j],del);
		printf(" ");
		delay(200);
	}
}
//delay funk
void delay(int number_of_milli_seconds)
{
	// Converting time into milli_seconds 
	int milli_seconds = number_of_milli_seconds;

	// Stroing start time 
	clock_t start_time = clock();

	// looping till required time is not acheived 
	while (clock() < start_time + milli_seconds)
		;
}
//sound and print! funk
void dot(int time)
{
	printf("%c", DOT);
	Beep(2000, time);
}
void long_dot(int time)
{
	printf("%c", LONG_DOT);
	Beep(500, time+100);
}
void space(int time)
{
	printf(" ");
	delay(time);
}
//letter to sound and print
void let(char* letter,int time)
{
	if ((int)*letter == 97 || (int)* letter == 65)//a
	{
		dot(time);
		long_dot(time);
	}
	else if ((int)* letter == 98 || (int)* letter == 66)//b
	{
		long_dot(time);
		dot(time);
		dot(time);
		dot(time);
	}
	else if ((int)* letter == 99 || (int)* letter == 67)//c
	{
		long_dot(time);
		dot(time);
		long_dot(time);
		dot(time);
	}
	else if ((int)* letter == 100 || (int)* letter == 68)//d
	{
		long_dot(time);
		dot(time);
		dot(time);
	}
	else if ((int)* letter == 101 || (int)* letter == 69)//e
	{
		dot(time);
	}
	else if ((int)* letter == 102 || (int)* letter == 70)//f
	{
		dot(time);
		dot(time);
		long_dot(time);
		dot(time);
	}
	else if ((int)* letter == 103 || (int)* letter == 71)//g
	{
		long_dot(time);
		long_dot(time);
		dot(time);
	}
	else if ((int)* letter == 104 || (int)* letter == 72)//h
	{
		dot(time);
		dot(time);
		dot(time);
		dot(time);
	}
	else if ((int)* letter == 105 || (int)* letter == 73)//i
	{
		dot(time);
		dot(time);
	}
	else if ((int)* letter == 106 || (int)* letter == 74)//j
	{
		dot(time);
		long_dot(time);
		long_dot(time);
		long_dot(time);
	}
	else if ((int)* letter == 107 || (int)* letter == 75)//k
	{
		long_dot(time);
		dot(time);
		long_dot(time);
	}
	else if ((int)* letter == 108 || (int)* letter == 76)//l
	{
		dot(time);
		long_dot(time);
		dot(time);
		dot(time);
	}
	else if ((int)* letter == 109 || (int)* letter == 77)//m
	{
		long_dot(time);
		long_dot(time);
	}
	else if ((int)* letter == 110 || (int)* letter == 78)//n
	{
		long_dot(time);
		dot(time);
	}
	else if ((int)* letter == 111 || (int)* letter == 79)//o
	{
		long_dot(time);
		long_dot(time);
		long_dot(time);
	}
	else if ((int)* letter == 112 || (int)* letter == 80)//p
	{
		dot(time);
		long_dot(time);
		long_dot(time);
		dot(time);
	}
	else if ((int)* letter == 113 || (int)* letter == 81)//q
	{
		long_dot(time);
		long_dot(time);
		dot(time);
		long_dot(time);
	}
	else if ((int)* letter == 114 || (int)* letter == 82)//r
	{
	dot(time);
	long_dot(time);
	dot(time);
	}
	else if ((int)* letter == 115 || (int)* letter == 83)//s
	{
	dot(time);
	dot(time);
	dot(time);
	}
	else if ((int)* letter == 116 || (int)* letter == 84)//t
	{
	long_dot(time);
	}
	else if ((int)* letter == 117 || (int)* letter == 85)//u
	{
	dot(time);
	dot(time);
	long_dot(time);
	}
	else if ((int)* letter == 118 || (int)* letter == 86)//v
	{
	dot(time);
	dot(time);
	dot(time);
	long_dot(time);
	}
	else if ((int)* letter == 119 || (int)* letter == 87)//w
	{
	dot(time);
	long_dot(time);
	long_dot(time);
	}
	else if ((int)* letter == 120 || (int)* letter == 88)//x
	{
	long_dot(time);
	dot(time);
	dot(time);
	long_dot(time);
	}
	else if ((int)* letter == 121 || (int)* letter == 89)//y
	{
	long_dot(time);
	dot(time);
	long_dot(time);
	long_dot(time);
	}
	else if ((int)* letter == 122 || (int)* letter == 90)//z
	{
	long_dot(time);
	long_dot(time);
	dot(time);
	dot(time);
	}
	else if (letter == ' ')//" " space
	{
		printf("    ");
		time += 250;
		delay(time);
		
	}
}

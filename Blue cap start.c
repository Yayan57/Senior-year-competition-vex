#pragma config(Sensor, dgtl1,  ,               sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  ,               sensorQuadEncoder)
#pragma config(Motor,  port1,            ,             tmotorVex393_HBridge, openLoop)
#pragma config(Motor,  port2,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port3,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port4, 					,							tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port5,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port6,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port7,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port8,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port9,            ,             tmotorVex393_MC29, openLoop)
#pragma config(Motor,  port10,           ,             tmotorVex393_HBridge, openLoop)
#pragma platform(VEX)
#pragma competitionControl(Competition)
#pragma autonomousDuration(15)
#pragma userControlDuration(120)
#include "D:\Users\adria\OneDrive\Documents\vex\Final\Vex_Competition_Includes.c"


void pre_auton()
{

bStopTasksBetweenModes = true;
wait1Msec(2000);  //Two second Delay
  SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] = 0;  //Clear the left encoder value


}

void shoot()
	{
motor(port8)=-127;
motor(port9)=127;
wait1Msec(1500);
motor(port8)=0;
motor(port9)=0;
}


void forwardWI(int distance)
{
		SensorValue[dgtl1] = 0;  //Clear the right encoder value
  		SensorValue[dgtl3] = 0;  //Clear the left encoder value
while (SensorValue[dgtl1] > distance)

{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port1)=  117;
motor(port3)=  117;
motor(port4)=  117;
motor(port10)= -127;
motor(port5)=  -127;
motor(port6)=  -127;
motor(port7)=  -127;//intake runs constantly
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port1)=  127;
motor(port3)=  127;
motor(port4)=  127;
motor(port10)= -117;
motor(port5)=  -117;
motor(port6)= -117;
motor(port7)=  -127;//intake runs constantly
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port1)=  127;
motor(port3)=  127;
motor(port4)=  127;
motor(port10)=  -127;
motor(port5)=  -127;
motor(port6)=  -127;
motor(port7)=  -127;//intake runs constantly
}
}
motor(port1)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port10)=  0;
motor(port5)=  0;
motor(port6)=  0;
motor(port7)=  -127;//intake runs constantly
wait1Msec(500);
}

void backwardWI (int distance)
 {
	SensorValue[dgtl1] = 0;  //Clear the right encoder value
		SensorValue[dgtl3] = 0;
		while (SensorValue[dgtl1] < distance)

			{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
				{
					motor(port1)=  -117;
					motor(port3)=  -117;
					motor(port4)=  -117;
					motor(port10)= 127;
					motor(port5)=  127;
					motor(port6)=  127;
					motor(port7)=  -127;//intake runs constantly
				}
				if(SensorValue[dgtl1] > SensorValue[dgtl3])
				{
					motor(port1)=  -127;
					motor(port3)=  -127;
					motor(port4)=  -127;
					motor(port10)= 117;
					motor(port5)=  117;
					motor(port6)= 117;
					motor(port7)=  -127;//intake runs constantly
				}
				if(SensorValue[dgtl1] == SensorValue[dgtl3])
				{
					motor(port1)=  -127;
					motor(port3)=  -127;
					motor(port4)=  -127;
					motor(port10)=  127;
					motor(port5)=  127;
					motor(port6)=  127;
					motor(port7)=  -127;//intake runs constantly
				}
			}
			motor(port1)= 0;
			motor(port3)=  0;
			motor(port4)=  0;
			motor(port10)=  0;
			motor(port5)=  0;
			motor(port6)=  0;
			motor(port7)=  -127;//intake runs constantly
			wait1Msec(500);
}


void forwardNI(int distance)
 {
 SensorValue[dgtl1] = 0;  //Clear the right encoder value
  		SensorValue[dgtl3] = 0;  //Clear the left encoder value
while (SensorValue[dgtl1] > distance)

{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port1)=  117;
motor(port3)=  117;
motor(port4)=  117;
motor(port10)= -127;
motor(port5)=  -127;
motor(port6)=  -127;
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port1)=  127;
motor(port3)=  127;
motor(port4)=  127;
motor(port10)= -117;
motor(port5)=  -117;
motor(port6)= -117;
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port1)=  127;
motor(port3)=  127;
motor(port4)=  127;
motor(port10)=  -127;
motor(port5)=  -127;
motor(port6)=  -127;
}
}
motor(port1)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port10)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);
}

void backwardNI(int distance)
{
	SensorValue[dgtl1] = 0;  //Clear the right encoder value
		SensorValue[dgtl3] = 0;
		while (SensorValue[dgtl1] < distance)

			{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
				{
					motor(port1)=  -117;
					motor(port3)=  -117;
					motor(port4)=  -117;
					motor(port10)= 127;
					motor(port5)=  127;
					motor(port6)=  127;
				}
				if(SensorValue[dgtl1] > SensorValue[dgtl3])
				{
					motor(port1)=  -127;
					motor(port3)=  -127;
					motor(port4)=  -127;
					motor(port10)= 117;
					motor(port5)=  117;
					motor(port6)= 117;
				}
				if(SensorValue[dgtl1] == SensorValue[dgtl3])
				{
					motor(port1)=  -127;
					motor(port3)=  -127;
					motor(port4)=  -127;
					motor(port10)=  127;
					motor(port5)=  127;
					motor(port6)=  127;
				}
			}
			motor(port1)= 0;
			motor(port3)=  0;
			motor(port4)=  0;
			motor(port10)=  0;
			motor(port5)=  0;
			motor(port6)=  0;
			wait1Msec(500);
}


void counterclockwise90 () 
{
	 {SensorValue[dgtl1] = 0;  //Clear the right encoder value
  	  SensorValue[dgtl3] = 0;  //Clear the left encoder value
	 }
while (SensorValue[dgtl1] < 250){

 if (SensorValue[dgtl1] < SensorValue[dgtl3])
{
motor(port1)=  -117;
motor(port3)=  -117;
motor(port4)=  -117;
motor(port10)= -127;
motor(port5)=  -127;
motor(port6)=  -127;
}
 if(SensorValue[dgtl1] > SensorValue[dgtl3])
 {
motor(port1)=  -127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port10)= -117;
motor(port5)=  -117;
motor(port6)= -117;
}
if(SensorValue[dgtl1] == SensorValue[dgtl3])
 {
motor(port1)=  -127;
motor(port3)=  -127;
motor(port4)=  -127;
motor(port10)=  -127;
motor(port5)=  -127;
motor(port6)=  -127;
}
}
motor(port1)= 0;
motor(port3)=  0;
motor(port4)=  0;
motor(port10)=  0;
motor(port5)=  0;
motor(port6)=  0;
wait1Msec(500);
}

void clockwise90 ()
 {
SensorValue[dgtl1] = 0;
		SensorValue[dgtl3] = 0;
		while (SensorValue[dgtl1] > -250)

			{ if (SensorValue[dgtl1] < SensorValue[dgtl3])
				{
					motor(port1)=  117;
					motor(port3)=  117;
					motor(port4)=  117;
					motor(port10)= 127;
					motor(port5)=  127;
					motor(port6)=  127;
				}
				if(SensorValue[dgtl1] > SensorValue[dgtl3])
				{
					motor(port1)=  127;
					motor(port3)=  127;
					motor(port4)=  127;
					motor(port10)= 117;
					motor(port5)=  117;
					motor(port6)=  117;
				}
				if(SensorValue[dgtl1] == SensorValue[dgtl3])
				{
					motor(port1)=  127;
					motor(port3)=  127;
					motor(port4)=  127;
					motor(port10)= 127;
					motor(port5)=  127;
					motor(port6)=  127;
				}
			}
			motor(port1)= 0;
			motor(port3)=  0;
			motor(port4)=  0;
			motor(port10)=  0;
			motor(port5)=  0;
			motor(port6)=  0;
			wait1Msec(500);
	}



task autonomous()
{

////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//1																												STEPS
//1
//1Start faced toward blue flags
//1take pot shot at any blue flags
//1
//1turn counter clockwise to face bot blue cap
//1run 2 rotations
//1run - intake
//1
//1turn counterclockwise to face floor blue cap
//1run .5 rotations
//1run intake
//1
//1turn counterclockwise to face blue cap start
//1run 1.75 rotattions
//1stop intake
//1
//1turn counter clockwise to face blue platform
//1run 1.75 rotattions
//1stop
/////////////////////////////////////////////////////////////////////////////////////////////////////
//  																							Motors
// port 1,5,6 is the right
// port 3,4,10 is the left

////////////////////////////////////////////////////////////////////////////////////////////////////
SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] = 0; //Clear the left encoder value
//1Start faced toward blue flags

shoot();//shoots the ball toward the middle blue flag

counterclockwise90();//1turn counter clockwise to face bot blue cap

forwardWI(-1000); //1run 2 rotations


counterclockwise90();//1turn counterclockwise to face floor blue cap

forwardNI(-250);//1run .5 rotations

counterclockwise90();//1turn counterclockwise to face blue cap start

forwardWI(-875);//1run 1.75 rotattions

counterclockwise90();//1turn counter clockwise to face blue platform

forwardNI(-875);//1run 1.75 rotattions

//1stop



}

task usercontrol()
{ while (1==1)
	{
		motor(port1)= vexRT[Ch3]; // port 1 is the front right driver
		motor(port3)= vexRT[Ch3]; // port 2 is the back  right driver
		motor(port4)= vexRT[Ch3]; // port 9 is the front left  driver
		motor(port5)= -vexRT[Ch2];// port 10 is the back  left driver
		motor(port6)= -vexRT[Ch2];// port 10 is the back  left driver
		motor(port10)=-vexRT[Ch2];// port 10 is the back  left driver
		{
			// .....................................................................................
			// Insert user code here.
			// .....................................................................................


			if(vexRT[Btn6D] == 1) // if button 6u is pressed lift goes up
			{
				motor(port8)= 0;
				motor(port9)=0;

			}
			else if(vexRT[Btn6U] ==1) // if button 6d is pressed lift goes down
			{
				motor(port8)= -127;
				motor(port9)=127;

			}
			else // if nothing is pushed...
			{
				motor(port8)= 0;
				motor(port9)=0;

			}
			if (vexRT[Btn5D] ==1) //if button 8r is pressed elevator goes up
			{
				motor(port7) = -127;
			}
			else if (vexRT[Btn5U] ==1) // if button 8d is pressed elevator goes down
			{
				motor(port7) = 127;
			}
			else // if nothing is pushed...
			{
				motor(port7) = 0;
			}

		}
	}
}

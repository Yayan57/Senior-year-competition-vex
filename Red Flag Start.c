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
#include "Vex_Competition_Includes.c"


void pre_auton()
{

bStopTasksBetweenModes = true;
wait1Msec(2000);  //Two second Delay
  SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] = 0;
   SensorValue[dgtl5] = 0;//Clear the left encoder value


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
// 																												STEPS
//// Start faced toward the red flags
// Shoot
//Turn clockwise degrees to face red mid cap
// run 2 rotations while running intake
  //stop intake
// run -2 rotations while intake is not running
// Turn counterclockwise to face red flags
//turn 1 rotation
//shoot
// turn clockwise to face top red cap
//run 1 rotation while running - intake
//run -1 rotation and stop intake
//Turn clockwise in order to face red cap start
//run 1.75 rotations
//turn clockwise to face away red platform
//run -2 rotations
//stop

/////////////////////////////////////////////////////////////////////////////////////////////////////
//  																							Motors
// port 1,5,6 is the right
// port 3,4,10 is the left

////////////////////////////////////////////////////////////////////////////////////////////////////
SensorValue[dgtl1] = 0;  //Clear the right encoder value
  SensorValue[dgtl3] = 0;

  //// Start faced toward the red flags

shoot();// Shoot

clockwise90();//Turn clockwise degrees to face red mid cap



forwardWI(-1000);// run 2 rotations while running intake

backwardNI(1000);// run -2 rotations while intake is not running

counterclockwise90();// Turn counterclockwise to face red flags


forwardNI(-500);//turn 1 rotation

shoot();//shoot


clockwise90();// turn clockwise to face top red cap

forwardWI(-1000);//run 1 rotation while running - intake

backwardNI(1000);//run -1 rotation and stop intake

clockwise90();//Turn clockwise in order to face red cap start

forwardNI(-750);//run 1.75 rotations

clockwise90();//turn clockwise to face red platform


backwardNI(1000);//run -2 rotations to get on to red platform

//Stop
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

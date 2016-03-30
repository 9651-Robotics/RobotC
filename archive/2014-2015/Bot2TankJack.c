#pragma config(Motor,  port3,           frontLeftMotor,    tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port4,           frontRightMotor,   tmotorNormal, openLoop, reversed)
#pragma config(Motor,  port5,           backLeftMotor,     tmotorNormal, openLoop)
#pragma config(Motor,  port6,           backRightMotor,    tmotorNormal, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

/*----------------------------------------------------------------------------------------------------*\
|*                                    - Dual Joystick Control -                                      *|
|*                                      ROBOTC on VEX 2.0 Cortex                                      *|
|*                                                                                                    *|
|*  This program uses both the Left and the Right joysticks to run the robot using "tank control".    *|
|*                                                                                                    *|
|*                                        ROBOT CONFIGURATION                                         *|
|*    NOTES:                                                                                          *|
|*    1)  Ch1 is the X axis and Ch2 is the Y axis for the RIGHT joystick.                             *|
|*    2)  Ch3 is the Y axis and Ch4 is the X axis for the LEFT joystick.                              *|
|*                                                                                                    *|
|*    MOTORS & SENSORS:                                                                               *|
|*    [I/O Port]              [Name]              [Type]              [Description]                   *|
|*    Motor - Port 2          rightMotor           VEX Motor           Right motor                    *|
|*    Motor - Port 3          leftMotor            VEX Motor           Left motor                     *|
\*----------------------------------------------------------------------------------------------------*/

//+++++++++++++++++++++++++++++++++++++++++++++| MAIN |+++++++++++++++++++++++++++++++++++++++++++++++
task main ()
{

  while(1 == 1)
  {
    motor[frontLeftMotor]  = vexRT[Ch2];   // Left Joystick Y value
    motor[backLeftMotor]   = vexRT[Ch2];

    motor[frontRightMotor] = -vexRT[Ch2];   // Right Joystick Y value
    motor[backRightMotor]  = -vexRT[Ch2];
  }

}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
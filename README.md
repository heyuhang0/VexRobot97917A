程序适用于97917A（四马达机械臂+八马达底盘）

接口定义：
#pragma config(Sensor, in1,    armAngle,       sensorPotentiometer)
#pragma config(Sensor, in2,    robotAngle,     sensorGyro)
#pragma config(Sensor, dgtl1,  RobotEncoder,   sensorQuadEncoder)
#pragma config(Sensor, dgtl3,  autoL,          sensorDigitalIn)
#pragma config(Sensor, dgtl4,  autoR,          sensorDigitalIn)
#pragma config(Sensor, dgtl5,  planA,          sensorDigitalIn)
#pragma config(Sensor, dgtl6,  planB,          sensorDigitalIn)
#pragma config(Sensor, dgtl7,  planC,          sensorDigitalIn)
#pragma config(Motor,  port2,           frontRightWheel, tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port3,           backLeftWheel, tmotorVex393TurboSpeed_MC29, openLoop)
#pragma config(Motor,  port6,           armLeftMotor,  tmotorVex393HighSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port7,           armRightMotor, tmotorVex393HighSpeed_MC29, openLoop)
#pragma config(Motor,  port8,           backRightWheel, tmotorVex393TurboSpeed_MC29, openLoop, reversed)
#pragma config(Motor,  port9,           frontLeftWheel, tmotorVex393TurboSpeed_MC29, openLoop)

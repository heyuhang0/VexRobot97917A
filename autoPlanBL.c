void autoPlanBL()
{
	startTask(armControl);
	motor[frontLeftWheel] = motor[backLeftWheel] = -60;
	motor[frontRightWheel]= motor[backRightWheel]= -60;
	delay(200);
	motor[frontLeftWheel] = motor[backLeftWheel] = 0;
	motor[frontRightWheel]= motor[backRightWheel]= 0;
	auto_7L = true;
	delay(300);
	auto_7D = true;
	delay(1000);
	motor[frontLeftWheel] = motor[backLeftWheel] = 60;
	motor[frontRightWheel]= motor[backRightWheel]= 60;
	delay(1300);
	motor[frontLeftWheel] = motor[backLeftWheel] = -20;
	motor[frontRightWheel]= motor[backRightWheel]= -20;
	delay(100);
	motor[frontLeftWheel] = motor[backLeftWheel] = 0;
	motor[frontRightWheel]= motor[backRightWheel]= 0;
	delay(300);
	auto_7L = true;
	delay(700);
	motor[frontLeftWheel] = motor[backLeftWheel] = -60;
	motor[frontRightWheel]= motor[backRightWheel]= -60;
	delay(800);
	SensorValue[robotAngle] = 0;
	motor[frontLeftWheel] = -80;
	motor[backLeftWheel]  = 80;
	motor[frontRightWheel]= 80;
	motor[backRightWheel] = -80;
	delay(1000);
	motor[frontLeftWheel] = -20;
	motor[backLeftWheel]  = 70;
	motor[frontRightWheel]= -70;
	motor[backRightWheel] = -70;
	while(abs(SensorValue[robotAngle]) < 800)
		delay(1);
	motor[frontLeftWheel] = motor[backLeftWheel] = -60;
	motor[frontRightWheel]= motor[backRightWheel]= -60;
	delay(800);
	motor[frontLeftWheel] = motor[backLeftWheel] = 0;
	motor[frontRightWheel]= motor[backRightWheel]= 0;
	auto_7U = true;
	delay(500);
	motor[frontLeftWheel] = motor[backLeftWheel] = -127;
	motor[frontRightWheel]= motor[backRightWheel]= -127;
	delay(500);
	motor[frontLeftWheel] = 127;
	motor[backLeftWheel]  = -127;
	motor[frontRightWheel]= -127;
	motor[backRightWheel] = 127;
	delay(1300);
	motor[frontLeftWheel] = motor[backLeftWheel] = 100;
	motor[frontRightWheel]= motor[backRightWheel]= 100;
	delay(1000);
	motor[frontLeftWheel] = motor[backLeftWheel] = 0;
	motor[frontRightWheel]= motor[backRightWheel]= 0;
	auto_7L = true;
	delay(500);
	motor[frontLeftWheel] = -127;
	motor[backLeftWheel]  = 127;
	motor[frontRightWheel]= 127;
	motor[backRightWheel] = -127;
	delay(400);
	motor[frontLeftWheel] = motor[backLeftWheel] = -100;
	motor[frontRightWheel]= motor[backRightWheel]= -100;
	delay(1200);
	auto_7U = true;
	motor[frontLeftWheel] = motor[backLeftWheel] = 0;
	motor[frontRightWheel]= motor[backRightWheel]= 0;
	delay(500);
}

#include"MotorControl.h"

Motor::Motor(int pin){

  pinMode(pin, OUTPUT);
  _pin = pin;
}

void Motor::fullForward(){

  analogWrite(_pin, 255);
}

void Motor::fullReverse(){

  analogWrite(_pin, 0);
}

void Motor::halt(){

  analogWrite(_pin, 128);//may need to adjust this number
}

void Motor::SetSpeed(int Speed){

  analogWrite(_pin, Speed);
}

ServoMotors::ServoMotors(int left, int right){

	_l_motor.attach(left);
	_r_motor.attach(right);
}
	
void ServoMotors::fullForward(){

	_l_motor.write(180);
	_r_motor.write(180);
}

void ServoMotors::fullReverse(){
	
		_l_motor.write(0);
		_r_motor.write(0);
	}

void ServoMotors::spinLeft(){
	
		_l_motor.write(0);
		_r_motor.write(180);
	}

void ServoMotors::spinRight(){
	
		_l_motor.write(0);
		_r_motor.write(180);	
	}

void ServoMotors::halt(){

	_l_motor.write(90);
	_r_motor.write(90);	
}

void ServoMotors::SetSpeed(int l, int r){

	_l_motor.write(l);
	_r_motor.write(r);
}

task main{
  //ALL the robot code
 setMotor(leftMotor,60);
 setMotor(rightMotor,60);
 wait(3,seconds);  
 setMotor(leftMotor,-60);
 setMotor(righttMotor,-60);
 wait(3,seconds); 
  //Makena the robot spin around
 setMotor(leftMotor,127);
 setMotor(rightMotor,0);
 wait(1,seconds);
}
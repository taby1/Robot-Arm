class Actuator{ //since the "Servo" keyword is already taken
  public:
    int currentAngle; //the angle the servo is currently set to, in degrees
    int minPulse, maxPulse; //the minimum and maximum pulse lengths for the PWM board
    Adafruit_PWMServoDriver * board;  //should be a pointer to the correct driver board object
    int channel; //the board # and channel # of the servo
    int minAngle, maxAngle; //the minimum and maximum allowed angles of the servo
    int offset; //The servo's angle offset (adds this number to all servo operations AFTER scaling
    float multiplier; //Scaling value - all servo angle values are multiplied by this, then scaled
    boolean invert; //set to 1 (True) to inver the servo's angle - inverts the servo's position after all other operations
  Actuator(Adafruit_PWMServoDriver * i_board, int i_channel){ //initializes 2 mandatory values
    board = i_board;
    channel = i_channel;
  }
};


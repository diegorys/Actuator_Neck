/*
 * ActuatorNeck
 * Version 0.1.0 Dec, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Controls the neck of a robot using a 180 degree servo.
 */

#include "ActuatorNeck.h"
#include "Arduino.h"

   
/** CONSTRUCTORS **/

/**
 * Construct.
 */
ActuatorNeck::ActuatorNeck()
{
}

/** PUBLIC METHODS **/

/**
 * Attach the given pins.
 * @param pin: pin where the servo is connected.
 */
void ActuatorNeck::attach(int pin)
{
	neck.attach(pin);
}

/**
 * Rotates left.
 */
void ActuatorNeck::rotateClockwise()
{
	neck.write(120);
}

/**
 * Rotates Right.
 */
void ActuatorNeck::rotateCounterclockwise()
{
	neck.write(60);
}

/**
 * Goes to the center.
 */
void ActuatorNeck::center()
{
	neck.write(90);
}
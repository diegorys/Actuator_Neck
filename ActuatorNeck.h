/*
 * ActuatorNeck
 * Version 0.1.0 Dec, 2015
 * Copyright 2015 Diego de los Reyes
 *
 * Controls the neck of a robot using a 180 degree servo.
 */

#ifndef ActuatorNeck_h
#define ActuatorNeck_h
#define LIBRARY_VERSION	 0.1

#include <Servo.h>

// Class ActuatorNeck
class ActuatorNeck {
 
	/** Public elements. **/
	public:
	
		/**
		 * Construct.
		 */
		ActuatorNeck();
	
		/**
		 * Attach the given pins.
		 * @param pin: pin where the servo is connected.
		 */
		void attach(int pin);

		/**
		 * Rotates left.
		 */
		void rotateClockwise();

		/**
		 * Rotates Right.
		 */
		void rotateCounterclockwise();

		/**
		 * Goes to the center.
		 */
		void center();

	private:

		/** Attributes **/

		//Controls the right servo.
		Servo neck;

};

#endif


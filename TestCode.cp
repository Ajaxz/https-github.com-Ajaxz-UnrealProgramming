//
//  main.cpp
//  Homework1
//
//  Created by Adam V Resendez on 4/6/16.
//  Copyright © 2016 Adam V Resendez. All rights reserved.
//

#ifndef TIME5_H
#define TIME5_H

class Time
{
public:
    Time( int = 0, int = 0, int = 0); // default constructor
    
    // set functions
    void setTime( int, int, int);
    void setHour( int );
    void setMinute( int );
    void setSecond( int );
    
    
    // get functions (normally declared const)
    int getHour();
    int getMinute();
    int getSecond ();
    
    // print functions (normally declared const)
    void printMilitary(); //print military time
    void printStandard();       // print standard time
    
    
private:
    int hour;   //0 -23
    int minute; // 0-59
    int second; // 0-59
    
    
};

#endif

#include <iostream>

using std::cout;

#include <Time5_h>

// Constructor function to initiate private data
// (The constructor is non-cost but it can be called for const objects)
// default valutes are 0 (see class definition)

Time::Time( int hr, int mind, int sec)
(setTime ( hr, min, sec,);)

void Time::setTime(int h, int m, int s)
{
    setHour( h );
    setMinute( m );
    setSecond( s );
}

// set the hour value


void Time::setHour( int h)
{ hour = (h >= 0 && h < 24) ? h : 0; }

// set minute value
void Time::setMinute( int m )
{ minute = (m >= 0 && m < 60 ) ? m : 0; }

//set the second value
void Time::setSecond(int s)
{ second = ( s >= 0 && s < 60) ? s : 0; }

// get hour value

int Time::getHour() const {retunr hour;}

// get the minute value
int Time::getMinute() const {return minute;}

// get the second value
int Time::getSecond() const {return second;}

//Display military time format: HH :: MM
void Time::printMilitary()

{
    cout << (hour < 10 ? "0" : "" ) << hour << ":"
    << (minute < 10 ? "0" : "" ) << minute;
}

// Display standard format time: HH::MM::SS AM (or PM)
void Time::printStandard()
{
    cout << (( hour == 12) ? 12 : hour % 12 ) << ":"
    << (minute < 10 ? "0" : "" ) << minute << ":"
    << (second < 10 ? "0" : "" ) << second
    << (hour < 12 ? " AM " : " PM" ) ;
}

#include "time.5"

int main()
{
    Time wakeUp(6, 45, 0);      // non-const object
    const Time noon(12, 0, 0); // const object
    
    
            //member Function
    wakeup.setHour( 18 ); // non-const
    noon.setHour( 12 ); // non-const
    
    wakeUp.getHour(); // const
    
    noon.getMinute(); //const
    noon.printMilitary(); // const
    noon.printStandard(); // const
    return 0;
    

    
}


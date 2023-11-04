//file    : body.hpp
//author  : steaKK

#ifndef BODY_HPP
#define BODY_HPP

using namespace std;

#include <iostream>
#include <cstdio>

class Body {
public:
  Body();
  Body(float _x, float _y, float _m);
  Body(const Body&);
  Body& operator=(const Body& _Body);
  ~Body();

  float get_position_x();
  float get_position_y();
  float get_mass();
  float get_velocity_x();
  float get_velocity_y();
  

  void set_position_x(int _x);
  void set_position_y(int _y);
  void set_mass(int _m);
  void set_velocity_x(int _vx);
  void set_velocity_y(int _vy);
  
private:
  const float DEFAULT_POSITION_X = 0;
  const float DEFAULT_POSITION_Y = 0;
  const float DEFAULT_MASS = 1;
  const float DEFAULT_VELOCITY_X = 0;
  const float DEFAULT_VELOCITY_Y = 0;

  float position_x;
  float position_y;
  float mass;
  float velocity_x;
  float velocity_y;
};

#endif

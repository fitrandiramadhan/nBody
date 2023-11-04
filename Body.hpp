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

private:
  const float DEFAULT_POSITION_X = 0;
  const float DEFAULT_POSITION_Y = 0;
  const float DEFAULT_MASS = 1;

  float position_x;
  float position_y;
  float mass;
};

#endif

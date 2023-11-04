//file    : body.hpp
//author  : steaKK

#include "Body.hpp"

Body::Body() {
  position_x = DEFAULT_POSITION_X;
  position_y = DEFAULT_POSITION_Y;
  mass = DEFAULT_MASS;
}

Body::Body(float _x, float _y, float _m) {
  position_x = _x;
  position_y = _y;
  mass = _m;
}

Body::Body(const Body& _Body) {
  position_x = _Body.x;
  position_y = _Body.y;
  mass = _Body.m;
}

Body& Body::operator=(const Body& _Body) {
  position_x = _Body.x;
  position_y = _Body.y;
  mass = _Body.m;

  return *this;
}

Body::~Body() {
}

float Body::get_position_x() {
  return position_x;
}

float Body::get_position_y() {
  return position_y;
}

float Body::get_mass() {
  return mass;
}

void Body::set_position_x(int _x) {
  position_x = _x;
}

void Body::set_position_y(int _y) {
  position_y = _y;
}

void Body::set_mass(int _m) {
  mass = _m;
}


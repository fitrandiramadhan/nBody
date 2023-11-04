//file    : space.hpp
//author  : steaKK

#ifndef SPACE_HPP
#define SPACE_HPP

using namespace std;

#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include <cmath>

#include "Body.hpp"

class Space {
public:
  Space();
  Space(vector<Body> _data);
  Space(const Space&);
  Space& operator=(const Space& _Space);
  ~Space();

  float get_max_x();
  float get_max_y();
  float get_min_x();
  float get_min_y();
  float get_com_x();
  float get_com_y();
  float get_total_mass();
  vector<Body> get_data();

  void set_max_x();
  void set_max_y();
  void set_min_x();
  void set_min_y();
  void set_com_x();
  void set_com_y();
  void set_total_mass();
  void set_data(vector<Body> _data);

  void init(int _n);

private:
    float max_x;
    float max_y;
    float min_x;
    float min_y;
    float com_x;
    float com_y;
    float total_mass;
    vector<Body> data;
};

#endif

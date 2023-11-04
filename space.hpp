//file    : space.hpp
//author  : steaKK

#ifndef SPACE_HPP
#define SPACE_HPP

using namespace std;

#include <iostream>
#include <cstdlib>
#include <vector>

#include "Body.hpp"

class Space {
public:
  Space();
  Space(vector<Body> _data);
  Space(const Space&);
  Space& operator=(const Space& _Space);
  ~Space();

  void init(int _n);
  
private:
    vector<Body> data;
};

#endif

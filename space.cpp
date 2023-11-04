//file    : body.cpp
//author  : steaKK

#include "Space.hpp"

Space::Space() {
  
}

Space::Space(vector<Body> _data) {
  for(int i=0;i<_data.size();i++) {
    data.push_back(_data[i]);
  }
}

Space::Space(const Space& _Space) {
  for(int i=0;i<_Space.data.size();i++) {
    data.push_back(_Space.data[i]);
  }
}

Space& Space::operator=(const Space& _Space) {
  for(int i=0;i<_Space.data.size();i++) {
    data.push_back(_Space.data[i]);
  }

  return *this;
}

Space::~Space() {

}

  float Space::get_max_x() {
    return max_x;
  }

  float Space::get_max_y() {
    return max_y;
  }

  float Space::get_min_x() {
    return min_x;
  }

  float Space::get_min_y() {
    return min_y;
  }

  float Space::get_com_x() {
    return com_x;
  }

  float Space::get_com_y() {
    return com_y;
  }

  float Space::get_total_mass() {
    return total_mass;
  }

  vector<Body> Space::get_data() {
    return data;
  }

  void Space::set_max_x() {
    if(data.empty()) max_x = 0;
    else {
      max_x = data[0].get_position_x();
      for(int i=1;i<data.size();i++) {
        if(data[i].get_position_x()>max_x) max_x = data[i].get_position_x();
      }
    }
  }
  
  void Space::set_max_y() {
    if(data.empty()) max_y = 0;
    else {
      max_y = data[0].get_position_y();
      for(int i=1;i<data.size();i++) {
        if(data[i].get_position_y()>max_y) max_y = data[i].get_position_y();
      }
    }
  }
  
  void Space::set_min_x() {
    if(data.empty()) min_x = 0;
    else {
      min_x = data[0].get_position_x();
      for(int i=1;i<data.size();i++) {
        if(data[i].get_position_x()<min_x) min_x = data[i].get_position_x();
      }
    }
  }
  
  void Space::set_min_y() {
    if(data.empty()) min_y = 0;
    else {
      min_y = data[0].get_position_y();
      for(int i=1;i<data.size();i++) {
        if(data[i].get_position_y()>min_y) min_y = data[i].get_position_y();
      }
    }
  }
  
  void Space::set_com_x() {
    if(data.empty()) com_x = 0;
    else {
      float temp_pos = data[0].get_position_x()*data[0].get_mass();
      float temp_mass = data[0].get_mass();
      for(int i=1;i<data.size();i++) {
        temp_pos += data[i].get_position_x()*data[i].get_mass();
        temp_mass += data[i].get_mass();
      }
      com_x = temp_pos/temp_mass;
    }
  }
  
  void Space::set_com_y() {
    if(data.empty()) com_y = 0;
    else {
      float temp_pos = data[0].get_position_y()*data[0].get_mass();
      float temp_mass = data[0].get_mass();
      for(int i=1;i<data.size();i++) {
        temp_pos += data[i].get_position_y()*data[i].get_mass();
        temp_mass += data[i].get_mass();
      }
      com_y = temp_pos/temp_mass;
    }
  }
  
  void Space::set_total_mass() {
    if(data.empty()) total_mass = 0;
    else {
      total_mass = data[0].get_mass();
      for(int i=1;i<data.size();i++) total_mass += data[i].get_mass();
    }
  }
  
  void Space::set_data(vector<Body> _data) {
    data = _data;
  }
  
  
void Space::init(int _n) {
  srand(time(NULL));

  for(int i=0;i<_n;i++) {
    Body b((float)(rand()%100+1),(float)(rand()%100+1),(float)(rand()%100+1));
    data.push_back(b);
  }
}
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

void Space::init(int _n) {
  srand(time(NULL));

  for(int i=0;i<_n;i++) {
    Body b((float)(rand()%100+1),(float)(rand()%100+1),(float)(rand()%100+1));
    data.push_back(b);
  }
}
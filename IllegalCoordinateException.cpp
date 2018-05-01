#include <exception>
// #include <string>
#include "Coordinate.h"

class IllegalCoordinateException : public exception{
  private:
    Coordinate c;
    
  public:
      IllegalCoordinateException(const Coordinate& c){
          this->c = c;
      }
      
      virtual const char* theCoordinate(){
          // return string("Illegal coordinate: " + to_string(c.getX()) + "," + to_string(c.getY()));
          return c.getX() + "," + c.getY();
      }  
};
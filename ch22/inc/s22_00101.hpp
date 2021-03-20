#ifndef s22_00101_hpp
#define s22_00101_hpp
namespace saip {

class Shape {
public:
  Shape(int w, int h) : width{w}, height{h} {}
  void setWidth(int w) { width = w; }
  void setHeight(int h) { height = h; }

protected:
  int width;
  int height;
};

// Derived class
class Rectangle : public Shape {
public:
  Rectangle(int w, int h) : Shape{w, h} {};
  int getArea() { return width * height; }
};
} // namespace saip
#endif
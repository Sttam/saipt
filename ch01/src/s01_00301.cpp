/*


   Date    : 2020/05/26
   Author  : Matts


   Purpose : To demonstrate a simple class.
             Here we define a friend to ease our task
             and a tip of the iceberg( capabilities of C++).


*/

#include <iostream>
using namespace std;

class Rectangle {

    int m_width{0};
    int m_height{0};
    double m_dheight{0};

  public:

    Rectangle(int width, int height) : m_width{width}, m_height{height}{};

    int area() {
         auto rect_area = m_width * m_height;
         std::cout << "area: " << rect_area << std::endl;
         return rect_area;
    };
    friend std::ostream& operator<<( std::ostream &os, const Rectangle  &rect );
};


std::ostream& operator<<( std::ostream &os, const Rectangle &rect ){
         os << "Width : " << rect.m_width << " Height : " << rect.m_height << std::endl;
         return os;

}


int main () {
  Rectangle rect( 3,4);
  rect.area();
  std::cout << "Details of the rectange " << rect << " Just Checking .... Connected end to end" << std::endl;
 

    size_t size_r1 = sizeof( rect );

    cout << "size of rect  " << size_r1 << endl;

  return 0;
}

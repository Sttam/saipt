/* -----------------------------------------------------------

A sample to show how explicit conversions are carried out.
template <typename T, typename D = default_delete<T>>
class unique_ptr {
public:
// ...
explicit operator bool() const noexcept; // does *this hold a pointer (that is not nullptr)?
// ...
};
-------------------------------------------------------------*/
#include <iostream>
#include <iostream>
#include <memory>

int main()
{

    auto p = std::make_unique<int>();
    if( !p ){
        std::cout << "We got the unique pointer to do an explcit conversion to boolean( false )" << std::endl;

    }else {
        std::cout << "We got the unique pointer to do an explcit conversion to boolean( true )" << std::endl;
    }
    return 0;
}
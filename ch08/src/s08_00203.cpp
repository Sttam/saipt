/***********************************************************************************************
  Author     : Matts Date : 17 July 2020

  Purpose    : Structures - Constructors

               Constructors are needed nput is reordered, validate arguments, 
               modify arguments, establish invariants etc. 
***********************************************************************************************/
#include <iostream>
#include <sstream>
#include <s08_00203.hpp>
using namespace std;


namespace saip{

  void Address::Print(){
    cout << name << ","  <<  endl <<
        number << ", " << street << ", " << town << ", " << state[0] << state[1] << endl;
    cout <<  zip  << endl;
}
  void Address2::Print(){
    cout << name <<  ", " << street << ", " << town << " " <<  zip  << endl;
}


Address::Address( const string& n,int nu, const string& s, const string& t, const string& st, int z)
:name{n}, number{nu}, street{s}, town{t}
{
    if (st.size()!=2)
        cout << "State abbreviation should be two characters" << endl;

    state[0] = st[0];
    state[1] = st[1];

    //Validting the zipcode
    ostringstream ost; 
    ost << z; // extract characters from int
    string zi {ost.str()};
    switch (zi.size()) {
        case 5:
           zip = zi;
           break;
        case 4: // star ts with ’0’
           ost.clear();
           ost << '0' << zi;
           zip = ost.str();
           break;
        default:
          cout << "unexpected ZIP code format" << endl;
    }
}

}//namespace saipt

using namespace saip;
int main( int argc, char* argv[] ){

    Address2 jd2 = { "Address-2Matts", "NW Street", "Huston",  92345 };
    jd2.Print();
    Address jd = { "Matts", 54, "El Paso", "Huston", "TX", 92345 };
    jd.Print();
    string name{ "Bjarne Stroustrup"};
    int number{1260};
    string street{ "Addison-Wesley"};
    string town{ "Reading"};
    string st{ "MA"};
    int    zip = 19860;

    auto bj = Address( name, number, street, town, st, zip);
    bj.Print();
    return EXIT_SUCCESS;
}

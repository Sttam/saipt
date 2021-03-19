/***********************************************************************************************
  Author     : Matts 29 June 2020

  Purpose    : Namespace usage
***********************************************************************************************/
/*

   Teaching Idea & Quizing

*/


#include <s14_00101a.hpp>
#include <s14_00101b.hpp>

using namespace saipta;
using namespace saiptb;

int main( ){

    saipta::TellMeWhereIamFrom();
    saiptb::TellMeWhereIamFrom();

    ExclusiveFromSAIPTB();
    ExclusiveFromSAIPTA();

    return EXIT_SUCCESS;
}

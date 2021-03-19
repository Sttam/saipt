/***********************************************************************************************
  Author     : Matts Date : 20th July 2020

  Purpose    :  Bit Fields

  Source     : Text
***********************************************************************************************/
#include <iostream>
#include <memory>
using namespace std;

struct PPN {                 // R6000 Physical Page Number
    unsigned int PFN  : 22;  // Page Frame Number
    int               : 3;                 // unused
    unsigned int CCA  : 3;   // Cache Coherency Algorithm
    bool nonreachable : 1;
    bool dirty        : 1;
    bool valid        : 1;
    bool global       : 1;
};

const int PAGESIZE{1024};
void CopyBuf(PPN& p, std::unique_ptr<char[]> &q);

int main(int argc, char* argv[])
{

    PPN Stat; 
    auto pbuf = unique_ptr<char[]>(new char[PAGESIZE]);

    Stat.PFN =    200;
    Stat.CCA = 0b111;
    Stat.nonreachable = 0b1;
    Stat.dirty = 0b0;
    Stat.valid = 0b1;
    Stat.dirty = 0b1;
    Stat.global = 0b0;
  
    CopyBuf(Stat, pbuf);
    return 0;

}
    
void CopyBuf(PPN& p, std::unique_ptr<char[]>& q)
{
    if (p.dirty){
        p.dirty = 0;
        //Copy out;
    }
}

#ifndef __S34_01101__HPP__
#define __S34_01101__HPP__
#include <algorithm>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

namespace saip{

struct MediaAsset
{
    virtual ~MediaAsset() = default; // make it polymorphic
};

struct Song : public MediaAsset
{
    std::wstring artist;
    std::wstring title;
    Song(const std::wstring& artist_, const std::wstring& title_) :
        artist{ artist_ }, title{ title_ } {}
};

struct Photo : public MediaAsset
{
    std::wstring date;
    std::wstring location;
    std::wstring subject;
    Photo(
        const std::wstring& date_,
        const std::wstring& location_,
        const std::wstring& subject_) :
        date{ date_ }, location{ location_ }, subject{ subject_ } {}
};

void sample01();
void sample02();
void sample03( std::shared_ptr<Song>& sp1, std::shared_ptr<Song>& sp2);
void sample04();
void sample05();
void sample06();

}

#endif //__S11_01101__HH__

#include "arpHeader.h"
//File includes
#include <bits/stdc++.h>
using std::bitset;

namespace headers {
// Implementation
arpHeader::arpHeader(bitset<BYTE_SIZE*8> data)
{
    //ctor
    this->header_data = data;
}

arpHeader::~arpHeader()
{
    //dtor
}

// Returns the corresponding hardware type
arpHeader::get_htype() const
{
    return (int)((this->header_data & bitset<BYTE_SIZE * 8>(0xFF000000)).to_ulong());
}

// Returns the corresponding protocol type
arpHeader::get_ptype() const
{
    return (int)((this->header_data & bitset<BYTE_SIZE * 8>(0x00FF0000)).to_ulong());
}

// Returns the corresponding hardware address length
arpHeader::get_hlen() const
{
    return (int)((this->header_data & bitset<BYTE_SIZE * 8>(0x0000F000)).to_ulong());
}

// Returns the corresponding protocol address length
arpHeader::get_plen() const
{
    return (int)((this->header_data & bitset<BYTE_SIZE * 8>(0x00000F00)).to_ulong());
}

// Returns the operation carried out by the packet
arpHeader::get_opr() const
{
    return (int)((this->header_data & bitset<BYTE_SIZE * 8>(0x00000F00)).to_ulong());
}

} // Close namespace headers

#ifndef ARPHEADER_H
#define ARPHEADER_H

#include <bits/stdc++.h>
using  std::bitset;
#include "../macro_defs.h"

namespace headers {
class arpHeader
{
    public:
        /** Constructor requires data */
        arpHeader(bitset<BYTE_SIZE*8> data);
        /** Default destructor */
        virtual ~arpHeader();

        // Hardware Type, as an int
        int get_htype() const;
        // Protocol Type, as an int
        int get_ptype() const;
        // Hardware Length, as an int, corresponding to the number of bytes
        int get_hlen() const;
        // Protocol Length, as an  int, corresponding to the number of bytes
        int get_plen() const;
        // Operation Request
        int get_opr() const;
    private:
        // Creates space for an ARP header
        bitset<BYTE_SIZE * 8> header_data;
};
} // Close headers namespace
#endif // ARPHEADER_H

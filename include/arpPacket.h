#ifndef ARPPACKET_H_INCLUDED
#define ARPPACKET_H_INCLUDED

#include "arpHeader.h"

//Lib imports
#include <boost/dynamic_bitset.hpp>

namespace packets {

class arpPacket {
    public:
        // arpPacket Constructor
        boost::dynamic_bitset arpPacket(headers::arpHeader header, );
        // Returns the sender hardware address as a bitset
        boost::dynamic_bitset getSHA();
        // Returns the sender protocol address as a bitset
        boost::dynamic_bitset getSPA();
        // Returns the target hardware address as a bitset
        boost::dynamic_bitset getTHA();
        // Returns the target protocol address as a bitset
        boost::dynamic_bitset getTPA();
    private:
        headers::arpHeader header;
         data;
};


} // Close packets namespace


#endif // ARPPACKET_H_INCLUDED

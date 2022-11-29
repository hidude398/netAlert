#include "arpPacket.h"
#include "arpHeader.h"
// Lib includes
#include <bits/stdc++.h>
using std::bitset;

namespace packets {
    arpPacket::(headers::arpHeader header, bitset<T> data)
    {
        this.header = header;
        this->data = data;
    }
} // close packets namespace

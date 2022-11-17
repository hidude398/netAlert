#include <iostream>
#include <string>
#include "pcap.h"
using namespace std;

int main()
{
    // Make sure that npcap is installed
    string npcap_version;
    if ( (npcap_version = pcap_lib_version()) == "")
    {
        cout << "Npcap installation could not be located on this system."
            << "Make sure that Npcap is installed, and that the npcap service is"
            << " running." << endl;
    } else {
        cout << "Npcap installation detected. "
    }
}

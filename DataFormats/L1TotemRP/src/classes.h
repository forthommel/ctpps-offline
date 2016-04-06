#include "DataFormats/L1TotemRP/interface/TotemRPCCBits.h"
#include "DataFormats/Common/interface/Wrapper.h"

#include <vector>
#include <bitset>

namespace{
  namespace{
    TotemRPCCBits b;
    edm::Wrapper<TotemRPCCBits> wb;
    std::vector<TotemRPCCBits> vb;
    edm::Wrapper<std::vector<TotemRPCCBits> > wvb;

    std::bitset<16> bs;
  }
}

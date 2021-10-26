#include "cgra_pe.h"

namespace cgra {

ProcessingElement::ProcessingElement(OpIdx numOps){
    for(OpIdx i=0_opid; i<numOps; i++) {
        // operations.emplace_back(Operation{});
        operations.push_back(Operation()); //difference betwen push an emplace
    }
}

void ProcessingElement::loadBitstream(Config& bitstream, std::string prefix) {
    for (OpIdx i=0_opid; ; i++){
        std::string s = prefix + qformat(".operation_{}",i);
        if (bitstream.exists(s)) {
            assert(i<operations.size());
            operations[i].loadBitstream(bitstream,s);
        } else {
            break;
        }
    }
}

    

} // namespace cgra


#pragma once

#include <stdio.h>
#include <stdlib.h>
#include "strong_int.h"
#include "strong_vec.h"
#include "core_cgra.h"
#include "cgra_pe.h"
#include "cgra_operation.h"

#define LINE_SIZE 64

namespace cgra {

DERIVE_STRONGER_INT(PeIdx, int32_t, peid)
DERIVE_STRONGER_INT(OpIdx, int32_t, opid)
DERIVE_STRONGER_INT(CallbackIdx, int32_t, cbid)

typedef uint32_t Word;
static const size_t NUM_VALUE_ELEMENTS = LINE_SIZE / sizeof(Word);
typedef std::array<Word, NUM_VALUE_ELEMENTS> Value;

} // namespace cgra

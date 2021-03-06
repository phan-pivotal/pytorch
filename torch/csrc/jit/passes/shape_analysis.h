#pragma once

#include "torch/csrc/WindowsTorchApiMacro.h"

namespace torch { namespace jit {

struct Graph;
struct CompleteArgumentSpec;
struct ArgumentSpec;

void EraseShapeInformation(Graph & graph);
TORCH_API void PropagateInputShapes(Graph & graph, const CompleteArgumentSpec & spec);
TORCH_API void PropagateInputShapes(Graph & graph, const ArgumentSpec & spec);

}}

#include <contrib/libs/fmath/fmath.hpp>

void FastExpInplaceAvx2(double* x, size_t count) {
    fmath::expd_v(x, count);
}

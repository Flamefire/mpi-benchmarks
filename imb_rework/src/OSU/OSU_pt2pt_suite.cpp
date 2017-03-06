#ifdef OSU

#include <set>
#include <vector>
#include <string>
#include <map>
#include "benchmark_suite.h"

using namespace std;

map<string, const Benchmark*, set_operations::case_insens_cmp> *BenchmarkSuite<BS_OSU>::pnames = 0;
BenchmarkSuite<BS_OSU> *BenchmarkSuite<BS_OSU>::instance = 0;

template <> const std::string BenchmarkSuite<BS_OSU>::get_name() const { return "OSU"; }

#endif

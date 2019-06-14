#include "benchmark/benchmark.h"

#include "examples/hello/hello_world.pb.h"
#include "examples/hello/hello_world_lib.h"

static void BM_HelloPrint (benchmark::State& s_) {
  hello::proto::Hello bench_options;
  for (auto _ : s_) {
    hello::print(bench_options);
  }
}

BENCHMARK(BM_HelloPrint);

static void BM_HelloPrintExtra (benchmark::State& s_) {
  hello::proto::Hello bench_options;
  bench_options.set_extra_message("extra message");
  for (auto _ : s_) {
    hello::print(bench_options);
  }
}

BENCHMARK(BM_HelloPrintExtra);

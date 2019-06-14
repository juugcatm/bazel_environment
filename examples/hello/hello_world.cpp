#include "gflags/gflags.h"
#include "glog/logging.h"

#include "examples/hello/hello_world_lib.h"

DEFINE_string(message, "", "An additional message to print");

int main (int argc, char** argv) {
  FLAGS_logtostderr = true;
  gflags::ParseCommandLineFlags(&argc, &argv, true);

  hello::proto::Hello hello_options;
  hello_options.set_extra_message(FLAGS_message);

  hello::print(hello_options);

  return 0;
}

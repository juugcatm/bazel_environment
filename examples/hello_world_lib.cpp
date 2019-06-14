#include "examples/hello_world_lib.h"

#include "glog/logging.h"

namespace hello {

  bool print (proto::Hello hello_pb) {
    LOG(INFO) << "Hello world!";
    if (!hello_pb.extra_message().empty()) {
      LOG(INFO) << hello_pb.extra_message();
    }
    return !hello_pb.extra_message().empty();
  }

}

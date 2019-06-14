#pragma once

#include "examples/hello/hello_world.pb.h"

namespace hello {

  // Logs the message "Hello world!" via glog.
  bool print (proto::Hello hello_pb);

}

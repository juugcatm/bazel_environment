#include "gtest/gtest.h"

#include "examples/hello_world.pb.h"
#include "examples/hello_world_lib.h"

namespace hello {

  TEST(Hello, worksAsExpected) {
    hello::proto::Hello test_options;
    ASSERT_FALSE(hello::print(test_options));

    test_options.set_extra_message("test message");
    ASSERT_TRUE(hello::print(test_options));    
  }

}

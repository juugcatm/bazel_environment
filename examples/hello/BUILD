proto_library(
    name = "hello_world_proto",
    srcs = [
        "hello_world.proto",
    ],
)

cc_proto_library(
    name = "hello_world_cc_proto",
    deps = [
        ":hello_world_proto",
    ],
)

cc_library (
    name = "hello_world_lib",
    srcs = [
        "hello_world_lib.cpp",
    ],
    hdrs = [
        "hello_world_lib.h",
    ],
    deps = [
        ":hello_world_cc_proto",
        "//external:glog",
    ],
)

cc_binary (
    name = "hello_world",
    srcs = [
        "hello_world.cpp",
    ],
    deps = [
        ":hello_world_lib",
        "//external:gflags",
    ]
)

cc_test (
    name = "hello_world_lib_test",
    srcs = [
        "hello_world_lib_test.cpp",
    ],
    deps = [
        ":hello_world_lib",
        "//external:gtest_main",
    ],
)

cc_binary (
    name = "hello_world_lib_bench",
    srcs = [
        "hello_world_lib_bench.cpp",
    ],
    deps = [
        ":hello_world_lib",
        "//external:gbench_main",
    ],
)

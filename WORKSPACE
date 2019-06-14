load ("@bazel_tools//tools/build_defs/repo:git.bzl",
      "git_repository", "new_git_repository")

new_git_repository (
    name = "com_github_eigen",
    build_file = "//build:eigen.BUILD",
    remote = "https://github.com/eigenteam/eigen-git-mirror.git",
    tag = "3.3.7",
)

bind (
    name = "eigen",
    actual = "@com_github_eigen//:eigen",
)

git_repository (
    name = "bazel_skylib",
    remote = "https://github.com/bazelbuild/bazel-skylib.git",
    tag = "0.8.0",
)

git_repository (
    name = "com_google_protobuf",
    remote = "https://github.com/protocolbuffers/protobuf.git",
    tag = "v3.8.0",
)

git_repository (
    name = "com_github_google_benchmark",
    remote = "https://github.com/google/benchmark",
    tag = "v1.4.1",
)

bind (
    name = "gbench_main",
    actual = "@com_github_google_benchmark//:benchmark_main",
)

git_repository (
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags",
    tag = "v2.2.2",
)

git_repository (
    name = "com_google_glog",
    remote = "https://github.com/google/glog",
    commit = "41f4bf9cbc3e8995d628b459f6a239df43c2b84a",
)

bind (
    name = "glog",
    actual = "@com_google_glog//:glog",
)

git_repository (
    name = "com_google_googletest",
    remote = "https://github.com/google/googletest",
    tag = "release-1.8.1",
)

bind (
    name = "gtest_main",
    actual = "@com_google_googletest//:gtest_main",
)

load ("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()


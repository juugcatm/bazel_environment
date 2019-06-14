load ("@bazel_tools//tools/build_defs/repo:git.bzl",
      "git_repository", "new_git_repository")

# Bazel Skylib: Required for some zlib dependencies.
git_repository (
    name = "bazel_skylib",
    remote = "https://github.com/bazelbuild/bazel-skylib.git",
    tag = "0.8.0",
)

# Ceres - An Optimization Framework
git_repository (
    name = "com_github_ceres_ceres",
    remote = "https://github.com/ceres-solver/ceres-solver.git",
    tag = "1.14.0",
)

bind (
    name = "ceres",
    actual = "@com_github_ceres_ceres//:ceres",
)

# Eigen - A Linear Algebra Library
new_git_repository (
    name = "com_github_eigen_eigen",
    build_file = "//third_party/tensorflow/third_party:eigen.BUILD",
    remote = "https://github.com/eigenteam/eigen-git-mirror.git",
    tag = "3.3.7",
)

bind (
    name = "eigen",
    actual = "@com_github_eigen_eigen//:eigen",
)

# Google Benchmark Library
git_repository (
    name = "com_github_google_benchmark",
    remote = "https://github.com/google/benchmark",
    tag = "v1.4.1",
)

bind (
    name = "gbench_main",
    actual = "@com_github_google_benchmark//:benchmark_main",
)

# Google Command Line Flags Library
git_repository (
    name = "com_github_gflags_gflags",
    remote = "https://github.com/gflags/gflags",
    tag = "v2.2.2",
)

bind (
    name = "gflags",
    actual = "@com_github_gflags_gflags//:gflags",
)   

# Google Logging Library
git_repository (
    name = "com_github_google_glog",
    remote = "https://github.com/google/glog",
    commit = "41f4bf9cbc3e8995d628b459f6a239df43c2b84a",
)

bind (
    name = "glog",
    actual = "@com_github_google_glog//:glog",
)

# Google Protobuf Library
git_repository (
    name = "com_google_protobuf",
    remote = "https://github.com/protocolbuffers/protobuf.git",
    tag = "v3.8.0",
)
load ("@com_google_protobuf//:protobuf_deps.bzl", "protobuf_deps")
protobuf_deps()

# Google Test Library
git_repository (
    name = "com_google_googletest",
    remote = "https://github.com/google/googletest",
    tag = "release-1.8.1",
)

bind (
    name = "gtest_main",
    actual = "@com_google_googletest//:gtest_main",
)

# Sophus - An SE(3) Lie-Algebra Library
new_git_repository(
    name = "com_github_strasdat_sophus",
    build_file = "//build:sophus.BUILD",
    remote = "https://github.com/strasdat/Sophus.git",
    commit = "05f9645077c4e59ca9aa05bb0d0eaf0dd83d2b26",
)

bind (
    name = "sophus",
    actual = "@com_github_strasdat_sophus//:sophus",
)


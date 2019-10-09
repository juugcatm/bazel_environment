### CPP Features to avoid
* Exceptions. Disable with `-fno-exceptions` in cflags.
* RTTI. Disable with `-fno-rtti` in cflags.
* Virtual interfaces. They require additional levels of indirection for function calls and create optimization boundaries.
* Use of generic floating point. It's not as performant as integer math on all architectures and can result in lazy numeric behaviors.

### CPP features to encourage
* C++14 standard
* `constexpr` wherever possible.
* `const` of all operators and variables when possible.
* `noexcept` for all members to verify they cannot throw.
* Use of `std::unique_ptr<>` and `std::shared_ptr<>` to control ownership and lifetime.
* Use of labmda functions and scope blocks to limit temporary object scope.
* Use of fixed point libraries that can track precision loss. Verify expected precision loss at key code points.
* Use of type-safe wrappers to define expected ranges of values of fixed point values.
* Use of unit specifiers to define implicit unit conversions. See boost::units for examples.



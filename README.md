[![Build Status](https://travis-ci.org/notorious01/stack-6.0.svg?branch=master)](https://travis-ci.org/notorious01/stack-6.0)

```
cmake -H. -B_builds -DBUILD_TESTS=ON -DBUILD_EXAMPLES=ON
cmake --build _builds
cmake --build _builds --target test -- ARGS=--verbose
_builds/example
```   

# reproduction code of "thread by worker" issue
A thread by worker never run.
The line 157 in thread.worker.js below never return.

    var result = Module['dynCall_ii'](e.data.start_routine, e.data.arg);

## Environment
- macOS 10.14.6
- emcc latest-upstream
  - emcc 1.38.40
  - clang 10.0.0
- Google Chrome 76.0.3809.87

## how to reproduce
### compile
    emcc -std=c++11 -s USE_PTHREADS=1 -s PTHREAD_POOL_SIZE=2 thread.cpp --pre-js pre.js -o thread.js

### access
    emrun --no_browser .

access http://localhost:6931/ using Google Chrome.
# Run

```sh
g++ -lstdc++ -o TestChain -std=c++11 -x c++ main.cpp Block.cpp Blockchain.cpp sha256.cpp
./TestChain
```

Under the environment of ubuntu 16
Windows work, too

# changelog

- add `<time.h>` in Block.cpp to avoid errors

mkdir -p Build
cd Build
cmake ..
cmake --build . -- -j4
ctest --verbose
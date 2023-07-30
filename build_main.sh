export LD_LIBRARY_PATH=./libs:$LD_LIBRARY_PATH
g++ MZCodec.cpp main.cpp -o main -L./libs -lfaac -lfaad -I./include

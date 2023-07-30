#include <iostream>
#include "MZCodec.h"
using namespace std;


int main(int argc, char** argv){
  if (argc != 3){
    cout << "argc != 3\n" << endl;
    return -1;
  }
  char* in_fname = argv[1];
  char* out_fname = argv[2];
  const char* mid_fname = "mid.aac";
  unsigned long sample_rate = 16000;
  unsigned long nChannels = 1;
  unsigned long nPCMBitsize = 16;

  codeWAV(in_fname, mid_fname, sample_rate, nChannels, nPCMBitsize);
  decodeAAC(mid_fname, out_fname);

  return 0;
}

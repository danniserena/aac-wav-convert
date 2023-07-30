//
//  MZCodec.hpp
//  MZAudioCodec
//
//  Created by mark.zhang on 25/01/2018.
//  Copyright © 2018 mark.zhang. All rights reserved.
//

#ifndef MZCodec_H
#define MZCodec_H

#include <stdio.h>

/// 编码: 将 wav 转换为 aac.
int codeWAV(const char *srcFilePath,  const char *destPath, unsigned long nSampleRate,unsigned long nChannels,unsigned long nPCMBitsize);

/// 解码: 将 aac 转换为 wav.
int decodeAAC(const char *aacfile, const char *wavename);

#endif /* MZCodec_H */

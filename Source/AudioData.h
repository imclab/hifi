//
//  AudioData.h
//  interface
//
//  Created by Stephen Birarda on 1/29/13.
//  Copyright (c) 2013 HighFidelity, Inc. All rights reserved.
//

#ifndef __interface__AudioData__
#define __interface__AudioData__

#include <iostream>
#include "AudioSource.h"
#include "Head.h"
#include "UDPSocket.h"

class AudioData {
    public:
        Head *linkedHead;
        AudioSource **sources;
        UDPSocket *audioSocket;
    
        int16_t *samplesToQueue;
    
        AudioData(int numberOfSources, int bufferLength);
        ~AudioData();
        
    private:
        int _numberOfSources;
};

#endif /* defined(__interface__AudioData__) */
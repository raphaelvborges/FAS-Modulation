//
//  wav.c
//  FAS Modulation
//
//  Created by Raphael A V Borges on 04/05/18.
//  Copyright © 2018 Raphael A V Borges. All rights reserved.
//

#include <stdio.h>
#include <stdio.h>
#include "wav.h"




void printwavinfo(char *file_name) {
    ///Users/SpyroGyra/Documents/UFMG/TCC/FAS Modulation/FAS Modulation/Oboe_B3.wav
    
    //read Audio sample
    int16_t *samples = NULL;
    wavread(file_name, &samples);
    printf("No. of channels: %d\n",     header->num_channels);
    printf("Sample rate:     %d\n",     header->sample_rate);
    printf("Bit rate:        %dkbps\n", header->byte_rate*8 / 1000);
    printf("Bits per sample: %d\n\n",     header->bps);
    printf("Sample 0:        %d\n", samples[0]);
    printf("Sample 1:        %d\n", samples[1]);
    // Modify the header values & samples before writing the new file
    wavwrite(file_name, samples);
    free(header);
    free(samples);
    
    //extract fs and data
    
    // if 2 channels -> mix them together
    //printf("No. of channels: %d\n",     header->num_channels);
    //if(header->num_channels != 1){}
    //normalize audio sample
    
    //determine how many harmonics to consider
    
    //Windowing sample
    
    //MDCT
    
    //HBWT
    
    //FAS
    
    //MODs
    
    
    //USAR PORT AUDIO!!!!
    //USAR SDL PARA VIZUALIZAR
    // http://www.mega-nerd.com/libsndfile/api.html
    //https://www.sfml-dev.org/tutorials/2.4/start-osx.php
    
}

//
//  Croisea.h
//  PartronTemperFramework
//
//  Created by seonkeun on 7/6/16.
//  Copyright © 2016 Partron. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AudioSignalAnalyzer.h"
#import "partron_sensor_dongle.h"

@interface Croisea : NSObject<AudioSignalAnalyzerDelegate>{
    AudioSignalAnalyzer *mAudioSignalAnalyzer;
}

@property float objectTemp;
@property float humanTemp;
@property float ambientTemp;
@property Boolean isplug;
@property Boolean readyTemp;

@property (nonatomic,retain) AudioSignalAnalyzer *temperature;
- (instancetype)initWithStart:(NSString *)model_name firmware_ver:(int)firmware_ver;
- (void)Stop;
- (bool)isExpireLicense;

@end

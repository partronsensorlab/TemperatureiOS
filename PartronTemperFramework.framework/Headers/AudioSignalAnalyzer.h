//
//  AudioSignalAnalyzer.h
//  iNfrared
//
//  Created by George Dean on 11/28/08.
//  Copyright 2008 Perceptive Development. All rights reserved.
//
//  Edited by Ezequiel Franca on 20/04/14

#import "AudioQueueObject.h"
#import <AVFoundation/AVFoundation.h>
#import <AudioToolbox/AudioToolbox.h>

#define HUMAN_EMS 0.98f
#define METAL_EMS 0.32f
#define PLASTIC_EMS 0.91f
#define WOOD_EMS 0.93f
#define NORMAL_EMS 1
#define WATER_EMS 0.93f
#define GLASS_EMS 0.85f
#define EMS_EMS 0.00f
#define AMB_EMS 0.85f

typedef NS_OPTIONS(NSUInteger, MeasureType) {
    HUMAN,
    OBJECT
};
@protocol AudioSignalAnalyzerDelegate <NSObject>
-(void)updateTemperature:(NSDictionary*)temp;
-(void)readyTemp;
-(void)inPlug;
-(void)unPlug;
@end

@interface AudioSignalAnalyzer : AudioQueueObject {
    NSMutableArray* recognizers;
}
@property (nonatomic, weak) id<AudioSignalAnalyzerDelegate> delegate;
@property (nonatomic, assign) BOOL isPlugin;
@property (nonatomic, assign) BOOL isReady;
@property (nonatomic, assign) BOOL isCalledByUser;
//-(id)initWithType:(MeasureType)type;
-(void)setType:(MeasureType)type delegate:(id)_delegate;
-(void)start:(float)_ems;
-(void)setEms:(float)_ems;
-(void)pause;
-(void)stop;

@end

@protocol temperValue <NSObject>

- (void) getTemperValue:(double)objectValue;

@end


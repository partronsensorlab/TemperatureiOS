//
//  AppDelegate.h
//  PartronTemperExample
//
//  Created by seonkeun on 7/6/16.
//  Copyright © 2016 Partron. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <PartronTemperFramework/Croisea.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (nonatomic,retain) AudioSignalAnalyzer *temperature;


@end


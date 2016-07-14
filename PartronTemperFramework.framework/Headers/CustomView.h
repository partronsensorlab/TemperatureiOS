//
//  CustomView.h
//  PartronTemperFramework
//
//  Created by seonkeun on 7/14/16.
//  Copyright © 2016 Partron. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CustomView : UIView
@property (weak, nonatomic) IBOutlet UITextView *version_info;

@property (weak, nonatomic) IBOutlet UIButton *showcheck_img;
- (IBAction)showcheck:(UIButton *)sender;
- (IBAction)closeSDKPopup:(UIButton *)sender;

@end

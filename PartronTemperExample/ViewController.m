//
//  ViewController.m
//  PartronTemperExample
//
//  Created by seonkeun on 7/6/16.
//  Copyright © 2016 Partron. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()
{
    Croisea *mCroisea;
    AudioSignalAnalyzer *temperature;
}
@property (nonatomic, retain) IBOutlet UIButton *clickBtn;
@property (nonatomic, retain) IBOutlet UILabel * labelinfo_body;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    mCroisea = [[Croisea alloc] initWithStart:@"PTD-100" firmware_ver:4 view:self.view];
     [mCroisea enableLog:false];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

- (IBAction)onClickupdate:(id)sender
{
    dispatch_async(dispatch_get_main_queue(), ^{
        [self.labelinfo_body setText:[NSString stringWithFormat:@"human_temp: %0.1f", mCroisea.humanTemp]];
    });
}

@end

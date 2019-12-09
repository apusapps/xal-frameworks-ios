//
//  APSViewController.m
//  XALFrameworks
//
//  Created by xueminlee on 07/29/2019.
//  Copyright (c) 2019 xueminlee. All rights reserved.
//

#import "APSViewController.h"
#import <APSMiddleware/APSSdk.h>
#import <APSAlex/APSEventLoggerDelegate.h>

@interface APSViewController ()

@end

@implementation APSViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.

    id<APSEventLoggerDelegate> alex = [APSSdk getSdk:@protocol(APSEventLoggerDelegate)];
    [alex entryHomePage:NSStringFromClass([self class])];
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

//
//  APSAppDelegate.m
//  XALFrameworks
//
//  Created by xueminlee on 07/29/2019.
//  Copyright (c) 2019 xueminlee. All rights reserved.
//

#import "APSAppDelegate.h"
@import APSMiddleware;
@import APSLibraryAdapter;
@import APSAlex;
@import APSActivate;
@import APSCloud;
@import APSSdkService;

@interface APSRecordConfig_ : APSEventLoggerConfig

    @end
@implementation APSRecordConfig_

- (NSString *)getRecordAdsURL {
    return @"http://xal.test.apuscn.com/v5/r/w";
}

- (NSString *)getRecordProductURL {
    return @"http://xal.test.apuscn.com/v5/r/w";
}

- (NSString *)getReportURL {
    return  @"http://test-privacy-api.apusapps.com/host/v1/rp";
}

- (BOOL)isRealModel {
    return YES;
}

    @end

@interface ActivateConfig : NSObject  <APSActivateConfigDelegate>

    @end

@implementation ActivateConfig

-(NSString *)getActivateServerHost {
    return @"http://test-r-api.apuscn.com";
}

-(NSString *)getUserTagServerHost {
    return @"http://test-xalyk-api.apuscn.com";
}

-(NSString *)getPublicKey {
    return @"MIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDtpqjGICSeEaHaR8s2rVAxfH9Dplcl6qTOLi2SrEpe+CfwrLG2v1B4qcraAPXe+IKSSxXkfHuRMqrZkfwkXxU93soq6F43dj5CLFPECEogVEoqx+vKdm/y0SV8Xw/QVjiJIVS4cqs2X+N0d0xM4A7UOskHAHMZb3BdIuqv2zl2xQIDAQAB";
}

- (nonnull NSString *)fackIp {
    return @"";
}

- (nonnull Protocol *)getType {
    return @protocol(APSActivateConfigDelegate);
}

    @end

@interface APSCloudCustomConfig : NSObject<APSCloudConfigProtocol>

    @end

@implementation APSCloudCustomConfig


- (nonnull Protocol *)getType {
    return @protocol(APSCloudConfigProtocol);
}

- (nonnull NSString *)configUrl {
    return @"http://test-xalyk-api.apuscn.com/v6/c/u";
}

- (nonnull NSString *)fileUpdateUrl {
    return @"http://test-xalyk-api.apuscn.com/v6/f/u";
}

    @end

@implementation APSAppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
{
    // Override point for customization after application launch.
    // 添加配置信息
    [APSSdk customOption:[[APSCloudCustomConfig alloc] init]];
    
    // Override point for customization after application launch.
    [APSSdk customOption:[[APSRecordConfig_ alloc] init]];
    [APSSdk customOption:[[ActivateConfig alloc] init]];
    
    [APSSdk didFinishLaunching:[[APSAppInfo alloc] init] boot:[[APSBoot alloc] init]];
    
    id<APSEventLoggerService> logger = [APSSdk findService:@protocol(APSEventLoggerService)];
    
    [logger setStateProvider:^NSDictionary<NSString *,NSString *> *{
        return @{@"Login" : @"YES", @"Age" : @"25", @"Name": @"Tom", @"Salary": @"234.5678"};
    }];

    return YES;
}

- (void)applicationWillResignActive:(UIApplication *)application
{
    // Sent when the application is about to move from active to inactive state. This can occur for certain types of temporary interruptions (such as an incoming phone call or SMS message) or when the user quits the application and it begins the transition to the background state.
    // Use this method to pause ongoing tasks, disable timers, and throttle down OpenGL ES frame rates. Games should use this method to pause the game.
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
    // Use this method to release shared resources, save user data, invalidate timers, and store enough application state information to restore your application to its current state in case it is terminated later.
    // If your application supports background execution, this method is called instead of applicationWillTerminate: when the user quits.
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
    // Called as part of the transition from the background to the inactive state; here you can undo many of the changes made on entering the background.
}

- (void)applicationDidBecomeActive:(UIApplication *)application
{
    // Restart any tasks that were paused (or not yet started) while the application was inactive. If the application was previously in the background, optionally refresh the user interface.
}

- (void)applicationWillTerminate:(UIApplication *)application
{
    // Called when the application is about to terminate. Save data if appropriate. See also applicationDidEnterBackground:.
}

@end

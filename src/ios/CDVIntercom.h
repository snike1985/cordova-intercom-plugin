#import <UIKit/UIKit.h>
#import <Cordova/CDVPlugin.h>

@interface CDVIntercom : CDVPlugin
{}

+ (NSString*)cordovaVersion;

- (void)getDeviceInfo:(CDVInvokedUrlCommand*)command;

@end

#import <Cordova/CDVPlugin.h>

@interface CDVDevice : CDVPlugin
{}

- (void)echo:(CDVInvokedUrlCommand*)command;
- (void)getDate:(CDVInvokedUrlCommand*)command;

@end

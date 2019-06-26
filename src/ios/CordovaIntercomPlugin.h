#import <Cordova/CDVPlugin.h>

@interface CordovaIntercomPlugin : CDVPlugin
{}

- (void)echo:(CDVInvokedUrlCommand*)command;
- (void)getDate:(CDVInvokedUrlCommand*)command;

@end

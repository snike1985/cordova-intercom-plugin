#import <Cordova/CDVPlugin.h>

@interface CDVIntercom : CDVPlugin {
}

// The handler for the 'echo' action
- (void)echo:(CDVInvokedUrlCommand *)command;

@end

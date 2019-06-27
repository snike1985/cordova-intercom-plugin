#import <Cordova/CDVPlugin.h>

@interface Intercom : CDVPlugin {
}

// The handler for the 'echo' action
- (void)echo:(CDVInvokedUrlCommand *)command;

@end

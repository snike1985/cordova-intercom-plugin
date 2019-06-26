#import <Cordova/CDVPlugin.h>

@interface MyCordovaPlugin : CDVPlugin {
}

// The handler for the 'echo' action
- (void)echo:(CDVInvokedUrlCommand *)command;

@end

#import "CDVIntercom.h"

#import <Cordova/CDVAvailability.h>

@implementation Intercom

- (void)pluginInitialize {
}

- (void)echo:(CDVInvokedUrlCommand *)command {
  NSString* phrase = [command.arguments objectAtIndex:0];
  NSLog(@"%@", phrase);
}
@end

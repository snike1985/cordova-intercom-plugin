#import <Cordova/CDV.h>
#import "CDVIntercom.h"

#import <Cordova/CDVAvailability.h>

@implementation CDVIntercom

- (void)pluginInitialize {
}

- (void)echo:(CDVInvokedUrlCommand *)command {
  NSString* phrase = [command.arguments objectAtIndex:0];
  NSLog(@"%@", phrase);
}
@end

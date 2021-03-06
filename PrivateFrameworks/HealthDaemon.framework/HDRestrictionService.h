/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDRestrictionService : NSObject <HKRestrictionInterface, NSXPCListenerDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (BOOL)isHealthAllowed;

- (void)isHealthAllowedWithReply:(id /* block */)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

@end

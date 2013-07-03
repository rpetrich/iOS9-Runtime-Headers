/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@class NSString, SSItemOfferDeviceError;

@interface SSItemOfferDevice : NSObject  {
    int _deviceIdentifier;
    SSItemOfferDeviceError *_incompatibleDeviceError;
    SSItemOfferDeviceError *_incompatibleSystemError;
    NSString *_minimumProductVersion;
}

@property(readonly) int deviceIdentifier;
@property(readonly) NSString * minimumProductVersion;
@property(readonly) SSItemOfferDeviceError * incompatibleDeviceError;
@property(readonly) SSItemOfferDeviceError * incompatibleSystemError;


- (id)minimumProductVersion;
- (id)incompatibleSystemError;
- (id)incompatibleDeviceError;
- (id)initWithOfferDeviceDicitionary:(id)arg1;
- (int)deviceIdentifier;
- (id)initWithDeviceIdentifier:(int)arg1;
- (id)init;
- (void)dealloc;

@end
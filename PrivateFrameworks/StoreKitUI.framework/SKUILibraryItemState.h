/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode6.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator8.0.sdk/System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUILibraryItemState : NSObject <NSCopying> {
    long long _availability;
    unsigned long long _avTypes;
    bool_isPreview;
    bool_preview;
}

@property long long availability;
@property unsigned long long AVTypes;
@property(getter=isPreview) bool preview;


- (void)setPreview:(bool)arg1;
- (void)setAVTypes:(unsigned long long)arg1;
- (unsigned long long)AVTypes;
- (bool)isPreview;
- (long long)availability;
- (void)setAvailability:(long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode5.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator7.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDWorksheet, EDResources;

@interface EDColumnInfoCollection : EDSortedCollection  {
    EDResources *mResources;
    EDWorksheet *mWorksheet;
}


- (id)columnInfoCreateIfNilForColumnNumber:(int)arg1;
- (id)initWithResources:(id)arg1 worksheet:(id)arg2;
- (id)columnInfoForColumnNumber:(int)arg1;
- (void)dealloc;

@end
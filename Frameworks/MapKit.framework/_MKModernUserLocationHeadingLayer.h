/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKModernUserLocationHeadingLayer : MKUserLocationHeadingLayer

- (void)_createMaskLayer;
- (id)_headingImage:(struct CGPoint { float x1; float x2; }*)arg1;
- (unsigned int)_keyframeIndexForAccuracy:(double)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_normalizedHeadingMaskRectForIndex:(unsigned int)arg1;
- (BOOL)_shouldShowHeadingForAccuracy:(double)arg1;
- (void)_updateHeadingMaskForAccuracy:(double)arg1 previousAccuracy:(double)arg2;
- (void)_updateShowHeadingForAccuracy:(double)arg1;
- (id)initWithUserLocationView:(id)arg1;
- (void)updateHeadingAccuracy:(double)arg1 previousAccuracy:(double)arg2;

@end
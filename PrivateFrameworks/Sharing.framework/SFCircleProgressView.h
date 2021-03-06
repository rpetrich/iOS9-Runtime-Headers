/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFCircleProgressView : UIView

@property (nonatomic) float progress;
@property (nonatomic, readonly) UIColor *progressColor;
@property (nonatomic) float progressLineWidth;
@property (nonatomic) int progressStartPoint;
@property (nonatomic) BOOL showProgressTray;

+ (Class)layerClass;

- (void)animateProgressCompletedWithCompletion:(id /* block */)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (float)progress;
- (id)progressColor;
- (float)progressLineWidth;
- (float)progressPresentationValue;
- (int)progressStartPoint;
- (void)setProgress:(float)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2 forced:(BOOL)arg3 completion:(id /* block */)arg4;
- (void)setProgressColor:(id)arg1;
- (void)setProgressLineWidth:(float)arg1;
- (void)setProgressStartPoint:(int)arg1;
- (void)setShowProgressTray:(BOOL)arg1;
- (BOOL)showProgressTray;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTransitSystemCell : MKCustomSeparatorTableViewCell {
    NSLayoutConstraint * _bottomConstraint;
    NSLayoutConstraint * _imageColumnCenterConstraint;
    UIImageView * _shieldImageView;
    BOOL  _shouldAdjustSeparatorInsetToMargin;
    UILabel * _systemLabel;
    float  _systemLabelMargin;
    NSLayoutConstraint * _systemLabelMarginConstraint;
    NSLayoutConstraint * _topConstraint;
    float  _unadjustedSeparatorInset;
}

@property (nonatomic) BOOL shouldAdjustSeparatorInsetToMargin;
@property (nonatomic) float systemLabelMargin;
@property (nonatomic, copy) NSString *systemName;

- (void).cxx_destruct;
- (float)_adjustedSeparatorInsetToMargin:(float)arg1;
- (void)_contentSizeCategoryDidChange;
- (void)_updateConstraintValues;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)layoutMarginsDidChange;
- (void)setLeftSeparatorInset:(float)arg1;
- (void)setShouldAdjustSeparatorInsetToMargin:(BOOL)arg1;
- (void)setSystemImage:(id)arg1 shouldCenter:(BOOL)arg2 centeringWidth:(float)arg3;
- (void)setSystemLabelMargin:(float)arg1;
- (void)setSystemName:(id)arg1;
- (BOOL)shouldAdjustSeparatorInsetToMargin;
- (float)systemLabelMargin;
- (id)systemName;

@end

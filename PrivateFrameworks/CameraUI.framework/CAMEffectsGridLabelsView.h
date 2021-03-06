/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
 */

@interface CAMEffectsGridLabelsView : UIView <_UIBackdropViewObserver> {
    _UIBackdropView * __backdropView;
    _UILegibilitySettingsProvider * __legibilitySettingsProvider;
    BOOL  _disableLayoutForLabels;
    NSArray * _filterLabelViews;
    NSArray * _filterTypes;
    CAMEffectsGridView * _gridView;
    int  _orientation;
}

@property (nonatomic, retain) _UIBackdropView *_backdropView;
@property (nonatomic, retain) _UILegibilitySettingsProvider *_legibilitySettingsProvider;
@property (getter=isDisabledLayoutForLabels, nonatomic) BOOL disableLayoutForLabels;
@property (nonatomic, retain) NSArray *filterLabelViews;
@property (nonatomic, retain) NSArray *filterTypes;
@property (nonatomic, retain) CAMEffectsGridView *gridView;
@property (nonatomic) int orientation;

- (void).cxx_destruct;
- (id)_backdropView;
- (id)_legibilitySettingsProvider;
- (void)_rebuildLabelViews;
- (void)_replaceLabelViews:(BOOL)arg1;
- (void)_setFilterLabelViews:(id)arg1;
- (void)_setFilterTypes:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })_transformForOrientation:(int)arg1;
- (void)backdropViewDidChange:(id)arg1;
- (void)dealloc;
- (id)filterLabelViews;
- (id)filterTypes;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frameForLabelView:(id)arg1 withinGridFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (id)gridView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)isDisabledLayoutForLabels;
- (void)layoutSubviews;
- (int)orientation;
- (void)setDisableLayoutForLabels:(BOOL)arg1;
- (void)setGridView:(id)arg1;
- (void)setOrientation:(int)arg1;
- (void)setOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)set_backdropView:(id)arg1;
- (void)set_legibilitySettingsProvider:(id)arg1;
- (void)updateFilterLabels;
- (void)updateToContentSize:(id)arg1;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUIRichVibrantLabel : UIView {
    UILabel * _highlightLabel;
    SearchUIVibrantLabel * _vibrantLabel;
}

@property (retain) UIFont *font;
@property (retain) UILabel *highlightLabel;
@property int numberOfLines;
@property float preferredMaxLayoutWidth;
@property (retain) SearchUIVibrantLabel *vibrantLabel;

- (void).cxx_destruct;
- (id)font;
- (id)highlightLabel;
- (id)initWithRichText:(id)arg1 style:(unsigned int)arg2;
- (int)numberOfLines;
- (float)preferredMaxLayoutWidth;
- (void)setFont:(id)arg1;
- (void)setHighlightLabel:(id)arg1;
- (void)setNumberOfLines:(int)arg1;
- (void)setPreferredMaxLayoutWidth:(float)arg1;
- (void)setVibrantLabel:(id)arg1;
- (id)vibrantLabel;
- (id)viewForLastBaselineLayout;

@end

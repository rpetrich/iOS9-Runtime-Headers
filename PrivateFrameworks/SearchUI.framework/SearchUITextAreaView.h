/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUITextAreaView : UIView {
    UILabel * _footnoteLabel;
    UIView * _lastView;
    NSString * _reuseID;
    NSArray * _richTextFields;
    UIView * _secondToLastView;
    UIImageView * _secondaryImageView;
    UILabel * _secondaryTitleLabel;
    UILabel * _titleLabel;
}

@property (retain) UILabel *footnoteLabel;
@property (retain) UIView *lastView;
@property (retain) NSString *reuseID;
@property (retain) NSArray *richTextFields;
@property (retain) UIView *secondToLastView;
@property (retain) UIImageView *secondaryImageView;
@property (retain) UILabel *secondaryTitleLabel;
@property (retain) UILabel *titleLabel;

+ (id)reuseIDForData:(id)arg1 formatter:(id)arg2;
+ (id)reuseIDForResult:(id)arg1 formatter:(id)arg2;

- (void).cxx_destruct;
- (id)footnoteLabel;
- (id)initWithResult:(id)arg1 style:(unsigned int)arg2 formatter:(id)arg3;
- (id)initWithTextAreaData:(id)arg1 style:(unsigned int)arg2 formatter:(id)arg3;
- (id)lastView;
- (id)reuseID;
- (id)richTextFields;
- (id)secondToLastView;
- (id)secondaryImageView;
- (id)secondaryTitleLabel;
- (void)setFootnoteLabel:(id)arg1;
- (void)setLastView:(id)arg1;
- (void)setReuseID:(id)arg1;
- (void)setRichTextFields:(id)arg1;
- (void)setSecondToLastView:(id)arg1;
- (void)setSecondaryImageView:(id)arg1;
- (void)setSecondaryTitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)titleLabel;
- (void)updateTextWidths;
- (BOOL)updateWithResult:(id)arg1 formatter:(id)arg2;
- (BOOL)updateWithTextAreaData:(id)arg1 formatter:(id)arg2;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;
- (id)viewForSecondToLastBaselineLayout;

@end

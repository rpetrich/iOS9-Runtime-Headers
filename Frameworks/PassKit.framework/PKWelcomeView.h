/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PassKit.framework/PassKit
 */

@interface PKWelcomeView : UIView {
    UIButton * _actionButton;
    UIActivityIndicatorView * _activityIndicator;
    UIImageView * _backgroundView;
    UIImage * _headerImage;
    UIImageView * _headerView;
    NSAttributedString * _message;
    UITextView * _messageView;
    UIImageView * _shadowView;
    BOOL  _showActivityIndicator;
    NSAttributedString * _title;
    UITextView * _titleView;
}

@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) UIImage *headerImage;
@property (nonatomic, copy) NSAttributedString *message;
@property (nonatomic) BOOL showActivityIndicator;
@property (nonatomic, copy) NSAttributedString *title;

+ (float)bodySeparation;
+ (float)defaultHeight;
+ (float)headerImageRegionHeight;
+ (BOOL)isAvailable;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })margins;
+ (id)messageFont;
+ (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })textInsets;
+ (id)titleFont;

- (id)actionButton;
- (void)dealloc;
- (id)headerImage;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithHeight:(float)arg1;
- (void)layoutSubviews;
- (id)message;
- (void)setActionButton:(id)arg1;
- (void)setHeaderImage:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setShowActivityIndicator:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (BOOL)showActivityIndicator;
- (id)title;

@end

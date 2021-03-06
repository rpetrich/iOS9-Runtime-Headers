/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@interface RemoteUISectionFooter : UIView <RemoteUITableFooter> {
    <RUITableFooterDelegate> * _delegate;
    UIButton * _linkButton;
    NSURL * _linkURL;
    int  _textAlignment;
    UILabel * _textLabel;
    BOOL  _usesCustomTextAlignment;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <RUITableFooterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) UIButton *linkButton;
@property (nonatomic, retain) NSURL *linkURL;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_linkPressed;
- (id)delegate;
- (float)footerHeightForWidth:(float)arg1 inTableView:(id)arg2;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (id)linkButton;
- (id)linkURL;
- (void)setDelegate:(id)arg1;
- (void)setLinkURL:(id)arg1;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;

@end

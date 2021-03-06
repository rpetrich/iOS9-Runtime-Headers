/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
 */

@interface MPUExtrasGalleryTemplateViewController : MPUExtrasTemplateViewController {
    MPUExtrasBannerController * _bannerController;
    MPUExtrasGridElementViewController * _gridViewController;
    unsigned int  _selectedItemIndex;
}

@property (nonatomic) unsigned int selectedItemIndex;

- (void).cxx_destruct;
- (void)_prepareLayout;
- (id)contentScrollView;
- (unsigned int)selectedItemIndex;
- (void)setSelectedItemIndex:(unsigned int)arg1;
- (BOOL)showsPlaceholder;
- (id)templateElement;
- (void)viewDidLoad;

@end

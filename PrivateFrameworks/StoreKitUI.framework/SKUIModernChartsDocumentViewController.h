/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIModernChartsDocumentViewController : SKUIViewController <SKUIDocumentViewController, SKUIModalSourceViewProvider> {
    SKUIActivityIndicatorView * _activityIndicatorView;
    SKUIModernChartsView * _chartsView;
    NSMutableArray * _columnViewControllers;
    SKUILayoutCache * _layoutCache;
    SKUIChartsTemplateViewElement * _templateElement;
    SKUIViewElementLayoutContext * _viewLayoutContext;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_contentInset;
- (void)_hideActivityIndicator;
- (id)_layoutCache;
- (id)_newColumnViewControllersWithReusableViewControllers:(id)arg1;
- (void)_reloadWithTemplateElement:(id)arg1;
- (void)_showActivityIndicator;
- (id)_viewLayoutContext;
- (id)contentScrollView;
- (void)documentDidUpdate:(id)arg1;
- (void)documentMediaQueriesDidUpdate:(id)arg1;
- (void)getModalSourceViewForElementIdentifier:(id)arg1 completionBlock:(id /* block */)arg2;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end

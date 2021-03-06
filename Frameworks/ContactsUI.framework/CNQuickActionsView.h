/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNQuickActionsView : UIView <CNQuickActionsManagerDelegate, UICollectionViewDataSource, UICollectionViewDelegate> {
    NSArray * _actions;
    CNQuickActionsManager * _actionsManager;
    NSArray * _categories;
    UICollectionViewFlowLayout * _collectionLayout;
    UICollectionView * _collectionView;
    CNContact * _contact;
    <CNQuickActionsViewDelegate> * _delegate;
    BOOL  _showTitles;
    NSDictionary * _titleTextAttributes;
    NSLayoutConstraint * _widthConstraint;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, retain) CNQuickActionsManager *actionsManager;
@property (nonatomic, copy) NSArray *categories;
@property (nonatomic, retain) UICollectionViewFlowLayout *collectionLayout;
@property (nonatomic, retain) UICollectionView *collectionView;
@property (nonatomic, retain) CNContact *contact;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNQuickActionsViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) float interspace;
@property (nonatomic, readonly) float maximumWidth;
@property (nonatomic) BOOL showTitles;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *titleTextAttributes;
@property (nonatomic, retain) NSLayoutConstraint *widthConstraint;

+ (id)actionsManagerForContact:(id)arg1;
+ (id)defaultCategories;
+ (id)descriptorForRequiredKeys;
+ (BOOL)hasActionsForContact:(id)arg1;
+ (BOOL)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_updateActions;
- (float)_widthForButtonCount:(int)arg1 itemSize:(struct CGSize { float x1; float x2; }*)arg2;
- (id)actions;
- (id)actionsManager;
- (void)actionsManager:(id)arg1 actionDidPerform:(id)arg2;
- (id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2;
- (id)categories;
- (id)collectionLayout;
- (id)collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)contact;
- (id)delegate;
- (id)initWithContact:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (float)interspace;
- (struct CGSize { float x1; float x2; })intrinsicContentSize;
- (float)maximumWidth;
- (void)reloadData;
- (void)setActions:(id)arg1;
- (void)setActionsManager:(id)arg1;
- (void)setCategories:(id)arg1;
- (void)setCollectionLayout:(id)arg1;
- (void)setCollectionView:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInterspace:(float)arg1;
- (void)setShowTitles:(BOOL)arg1;
- (void)setTitleTextAttributes:(id)arg1;
- (void)setWidthConstraint:(id)arg1;
- (BOOL)showTitles;
- (id)titleTextAttributes;
- (void)updateConstraints;
- (id)widthConstraint;
- (void)willMoveToWindow:(id)arg1;

@end

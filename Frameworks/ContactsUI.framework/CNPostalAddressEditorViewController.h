/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
 */

@interface CNPostalAddressEditorViewController : UITableViewController <CNPresenterDelegate, CNPropertyCellDelegate> {
    CNMutableContact * _contact;
    CNCardPropertyGroup * _propertyGroup;
    NSMutableArray * _propertyItems;
    NSString * _propertyKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isPresentingModalViewController;
@property (readonly) Class superclass;

+ (id)cellIdentifierForClass:(Class)arg1;
+ (id)cellIdentifierForEditingProperty:(id)arg1;

- (void).cxx_destruct;
- (void)_rebuildPropertyGroupItems:(BOOL)arg1;
- (void)_startEditingFirstCell;
- (void)cancel:(id)arg1;
- (id)defaultValueForPropertyCell:(id)arg1;
- (void)done:(id)arg1;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 editNames:(BOOL)arg3;
- (BOOL)isPresentingModalViewController;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewLabel:(id)arg3;
- (void)propertyCell:(id)arg1 didUpdateItem:(id)arg2 withNewValue:(id)arg3;
- (void)propertyCell:(id)arg1 performActionForItem:(id)arg2 withTransportType:(int)arg3;
- (void)propertyCellDidChangeLayout:(id)arg1;
- (void)registerContactCellClass:(Class)arg1;
- (void)sender:(id)arg1 dismissViewController:(id)arg2;
- (void)sender:(id)arg1 presentViewController:(id)arg2;
- (id)storeForPropertyCell:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (float)tableViewSpacingForExtraSeparators:(id)arg1;
- (void)validateContents;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;

@end

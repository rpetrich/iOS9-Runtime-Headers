/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicLibrarySearchResultsViewController : MusicLibraryBrowseHeterogenousCollectionViewController {
    MusicEntityCollectionViewDescriptor * _collectionViewDescriptor;
    MusicEntityValueContext * _itemEntityValueContext;
    NSMutableDictionary * _layoutMetricsForSection;
    unsigned int  _maximumNumberOfSectionResults;
    <MusicLibrarySearchResultsViewControllerDelegate> * _searchResultsDelegate;
    MusicLibrarySearchResultsEntityProviderConfiguration * _searchResultsEntityProviderConfiguration;
    NSString * _searchTerm;
    MusicSectionEntityValueContext * _sectionEntityValueContext;
}

@property (nonatomic, readonly) BOOL hasResults;
@property (nonatomic, readonly) MusicLibrarySearchResultsEntityProviderConfiguration *libraryViewConfiguration;
@property (nonatomic) unsigned int maximumNumberOfSectionResults;
@property (getter=isResultsViewVisible, nonatomic, readonly) BOOL resultsViewVisible;
@property (nonatomic) <MusicLibrarySearchResultsViewControllerDelegate> *searchResultsDelegate;
@property (nonatomic, copy) NSString *searchTerm;

- (void).cxx_destruct;
- (id)_collectionViewDescriptorForSection:(unsigned int)arg1 traitCollection:(id)arg2;
- (id)_layoutMetricsForCollectionViewDescriptor:(id)arg1;
- (void)_recordRecentForIndexPath:(id)arg1;
- (void)_updateForResultsCount;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(int)arg3;
- (float)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (struct CGSize { float x1; float x2; })collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplaySupplementaryView:(id)arg2 forElementKind:(id)arg3 atIndexPath:(id)arg4;
- (void)didSelectActionButtonInBrowseSectionHeaderView:(id)arg1 forSection:(int)arg2;
- (id)entityViewDescriptor;
- (void)handleEntityProviderDidInvalidate;
- (BOOL)hasResults;
- (id)initWithLibraryViewConfiguration:(id)arg1;
- (BOOL)isResultsViewVisible;
- (id)layoutMetricsForSection:(unsigned int)arg1;
- (id)libraryViewConfiguration;
- (id)loadEntityViewDescriptor;
- (unsigned int)maximumNumberOfSectionResults;
- (id)searchResultsDelegate;
- (id)searchTerm;
- (void)setMaximumNumberOfSectionResults:(unsigned int)arg1;
- (void)setSearchResultsDelegate:(id)arg1;
- (void)setSearchTerm:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize { float x1; float x2; })arg1 withTransitionCoordinator:(id)arg2;

@end
/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudBudgetingCategory : NSObject {
    unsigned short  _category;
    PLPhotoLibrary * _photoLibrary;
    PLCloudResourceRange * _range;
    unsigned int  budgetShare;
    id /* block */  predicate;
}

@property (nonatomic) unsigned int budgetShare;
@property (nonatomic, readonly) unsigned short category;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, copy) id /* block */ predicate;
@property (nonatomic, readonly) unsigned long long totalAssetsCount;

- (unsigned int)budgetShare;
- (unsigned short)category;
- (void)dealloc;
- (id)description;
- (void)enumerateNodesInRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1 usingBlock:(id /* block */)arg2;
- (struct _NSRange { unsigned int x1; unsigned int x2; })excludeAssetWithUuid:(id)arg1;
- (struct _NSRange { unsigned int x1; unsigned int x2; })includeAsset:(id)arg1;
- (id)initWithIdentifier:(unsigned short)arg1 photoLibrary:(id)arg2;
- (id)name;
- (id /* block */)predicate;
- (id)resourcesForAsset:(id)arg1 inQualityClass:(unsigned short)arg2;
- (void)setBudgetShare:(unsigned int)arg1;
- (void)setPredicate:(id /* block */)arg1;
- (unsigned long long)totalAssetsCount;
- (unsigned long long)totalSizeForQualityClass:(unsigned short)arg1;
- (unsigned long long)totalSizeForQualityClass:(unsigned short)arg1 inRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;

@end

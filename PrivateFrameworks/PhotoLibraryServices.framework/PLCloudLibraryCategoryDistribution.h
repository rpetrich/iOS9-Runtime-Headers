/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudLibraryCategoryDistribution : NSObject {
    unsigned short  _budgetingCategoryId;
    NSString * _budgetingCategoryName;
    unsigned long long  _cutoffPoint;
    unsigned int  _layoutBehavior;
    unsigned short  _primaryQuality;
    unsigned long long  _requiredBudget;
    unsigned long long  _reservedBudget;
    unsigned short  _secondaryQuality;
    unsigned long long  _totalAssetsCount;
}

@property (nonatomic, readonly) unsigned short budgetingCategory;
@property (nonatomic, readonly) unsigned long long cutoffPoint;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned short primaryQualityClass;
@property (nonatomic, readonly) unsigned long long remainingBudget;
@property (nonatomic, readonly) unsigned long long requiredBudget;
@property (nonatomic, readonly) unsigned long long reservedBudget;
@property (nonatomic, readonly) unsigned short secondaryQualityClass;
@property (nonatomic, readonly) unsigned long long totalAssetsCount;

- (unsigned short)budgetingCategory;
- (unsigned long long)calculateCutoffPointBetween:(unsigned long long)arg1 and:(unsigned long long)arg2 inBudgetingCateogry:(id)arg3;
- (unsigned long long)cutoffPoint;
- (void)dealloc;
- (id)description;
- (id)initWithBudgetingCategory:(id)arg1 layoutBehavior:(unsigned int)arg2 reservedBudget:(unsigned long long)arg3;
- (id)initWithSerializedPlist:(id)arg1;
- (id)name;
- (id)plistSerializedObject;
- (unsigned short)primaryQualityClass;
- (unsigned long long)remainingBudget;
- (unsigned long long)requiredBudget;
- (unsigned long long)reservedBudget;
- (unsigned short)secondaryQualityClass;
- (unsigned long long)spaceRequiredForCutoffPoint:(unsigned long long)arg1 inBudgetingCateogry:(id)arg2;
- (unsigned long long)totalAssetsCount;
- (unsigned long long)totalReservedBudget;

@end

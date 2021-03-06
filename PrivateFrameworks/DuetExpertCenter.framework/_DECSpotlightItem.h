/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
 */

@interface _DECSpotlightItem : _DECItem {
    int  _domain;
    NSString * _itemIdentifier;
}

@property (nonatomic, readonly) int domain;
@property (nonatomic, readonly) NSString *itemIdentifier;

+ (id)spotlightItemWithDomain:(int)arg1 itemIdentifier:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (int)domain;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(int)arg1 itemIdentifier:(id)arg2;
- (BOOL)isEquivalent:(id)arg1;
- (id)itemIdentifier;

@end

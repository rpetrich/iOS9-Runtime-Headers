/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKSource : EKObject {
    EKAvailabilityCache * _availabilityCache;
    NSString * _cachedHost;
    NSSet * _cachedOwnerAddresses;
    int  _cachedPort;
    NSDate * _timeOfLastExternalIdentificationCache;
}

@property (nonatomic, readonly) NSSet *allCalendars;
@property (nonatomic, readonly) EKAvailabilityCache *availabilityCache;
@property (nonatomic, retain) NSString *cachedHost;
@property (nonatomic, retain) NSSet *cachedOwnerAddresses;
@property (nonatomic) int cachedPort;
@property (nonatomic, readonly) NSSet *calendars;
@property (nonatomic, readonly) CDBSourceConstraints *constraints;
@property (nonatomic, copy) NSNumber *defaultAlarmOffset;
@property (nonatomic, readonly) int displayOrderForNewCalendar;
@property (getter=isEnabled, nonatomic, readonly) BOOL enabled;
@property (nonatomic, copy) NSString *externalID;
@property (nonatomic, copy) NSString *externalModificationTag;
@property (nonatomic, readonly) BOOL isFacebookSource;
@property (nonatomic) BOOL onlyCreatorCanModify;
@property (nonatomic, readonly) NSSet *ownerAddresses;
@property (nonatomic, readonly) int preferredEventPrivateValue;
@property (nonatomic, readonly) NSString *serverHost;
@property (nonatomic, readonly) int serverPort;
@property (nonatomic, readonly) NSString *sourceIdentifier;
@property (nonatomic, readonly) int sourceType;
@property (nonatomic, readonly) int strictestEventPrivateValue;
@property (nonatomic, retain) NSDate *timeOfLastExternalIdentificationCache;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, readonly) BOOL wantsCommentPromptWhenDeclining;

+ (id)sourceWithEventStore:(id)arg1;

- (void)_cacheExternalIdentificationIfNeeded;
- (id)_persistentItem;
- (id)allCalendars;
- (id)availabilityCache;
- (id)cachedHost;
- (id)cachedOwnerAddresses;
- (int)cachedPort;
- (id)calendars;
- (id)calendarsForEntityType:(unsigned int)arg1;
- (BOOL)commit:(id*)arg1;
- (id)constraints;
- (void)dealloc;
- (id)defaultAlarmOffset;
- (id)description;
- (int)displayOrderForNewCalendar;
- (id)externalID;
- (id)externalModificationTag;
- (id)init;
- (BOOL)isEnabled;
- (BOOL)isFacebookSource;
- (BOOL)onlyCreatorCanModify;
- (id)ownerAddresses;
- (int)preferredEventPrivateValue;
- (id)readWriteCalendarsForEntityType:(unsigned int)arg1;
- (BOOL)remove:(id*)arg1;
- (id)serverHost;
- (int)serverPort;
- (void)setCachedHost:(id)arg1;
- (void)setCachedOwnerAddresses:(id)arg1;
- (void)setCachedPort:(int)arg1;
- (void)setDefaultAlarmOffset:(id)arg1;
- (void)setExternalID:(id)arg1;
- (void)setExternalModificationTag:(id)arg1;
- (void)setOnlyCreatorCanModify:(BOOL)arg1;
- (void)setTimeOfLastExternalIdentificationCache:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)sourceIdentifier;
- (int)sourceType;
- (int)strictestEventPrivateValue;
- (id)timeOfLastExternalIdentificationCache;
- (id)title;
- (BOOL)wantsCommentPromptWhenDeclining;

@end

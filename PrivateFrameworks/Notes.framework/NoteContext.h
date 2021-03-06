/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Notes.framework/Notes
 */

@interface NoteContext : NSObject <ICSearchLegacyContext> {
    AccountUtilities * _accountUtilities;
    BOOL  _hasPriorityInSaveConflicts;
    BOOL  _inMigrator;
    BOOL  _indexInBatches;
    NoteAccountObject * _localAccount;
    NoteStoreObject * _localStore;
    BOOL  _logChanges;
    NSManagedObjectContext * _managedObjectContext;
    NSManagedObjectModel * _managedObjectModel;
    NSNumber * _nextId;
    NSManagedObjectContext * _nextIdContext;
    CPExclusiveLock * _nextIdLock;
    NSMutableDictionary * _notePropertyObjectsRealized;
    unsigned int  _notificationCount;
    CPExclusiveLock * _objectCreationLock;
    NSPersistentStoreCoordinator * _persistentStoreCoordinator;
}

@property (nonatomic, retain) AccountUtilities *accountUtilities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly, retain) NSManagedObjectContext *managedObjectContext;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/Notes.framework/Notes

+ (void)clearTestsNotesRootPath;
+ (BOOL)databaseIsCorrupt:(id)arg1;
+ (id)defaultNotesSortDescriptors;
+ (id)fileProtectionOption;
+ (id)generateGUID;
+ (void)setTestsNotesRootPath:(id)arg1;
+ (BOOL)shouldLogIndexing;

- (void).cxx_destruct;
- (void)_createLocalAccount:(id*)arg1 andStore:(id*)arg2;
- (id)_notePropertyObjectForKey:(id)arg1;
- (id)accountForAccountId:(id)arg1;
- (id)accountUtilities;
- (id)allAccounts;
- (id)allAccountsAsFaults:(BOOL)arg1 prefechedRelationshipKeyPaths:(id)arg2;
- (id)allNotes;
- (id)allNotesInCollection:(id)arg1;
- (id)allNotesMatchingPredicate:(id)arg1;
- (id)allNotesWithoutBodiesInCollection:(id)arg1;
- (id)allStores;
- (id)allVisibleNotes;
- (id)allVisibleNotesInCollection:(id)arg1;
- (id)allVisibleNotesInCollection:(id)arg1 sorted:(BOOL)arg2;
- (id)allVisibleNotesMatchingPredicate:(id)arg1;
- (id)allVisibleNotesMatchingPredicate:(id)arg1 sorted:(BOOL)arg2;
- (void)batchFaultNotes:(id)arg1;
- (void)cleanUpLocks;
- (void)clearCaches;
- (id)collectionForInfo:(id)arg1;
- (id)collectionForObjectID:(id)arg1;
- (int)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (unsigned int)countOfNotes;
- (unsigned int)countOfNotesInCollection:(id)arg1;
- (unsigned int)countOfNotesMatchingPredicate:(id)arg1;
- (unsigned int)countOfStores;
- (unsigned int)countOfVisibleNotes;
- (unsigned int)countOfVisibleNotesInCollection:(id)arg1;
- (unsigned int)countOfVisibleNotesMatchingPredicate:(id)arg1;
- (void)dealloc;
- (id)defaultStoreForNewNote;
- (BOOL)deleteAccount:(id)arg1;
- (void)deleteChanges:(id)arg1;
- (BOOL)deleteIndexFile;
- (void)deleteNote:(id)arg1;
- (void)deleteNoteRegardlessOfConstraints:(id)arg1;
- (BOOL)deleteStore:(id)arg1;
- (void)enableChangeLogging:(BOOL)arg1;
- (id)faultedInStoresForAccounts:(id)arg1;
- (BOOL)forceDeleteAccount:(id)arg1;
- (void)forceSetUpUniqueObjects;
- (id)getNextIdObject;
- (void)handleMigration;
- (BOOL)hasMultipleEnabledStores;
- (id)init;
- (id)initForMigrator;
- (id)initWithAccountUtilities:(id)arg1;
- (id)initWithAccountUtilities:(id)arg1 inMigrator:(BOOL)arg2;
- (void)invalidate;
- (id)liveNotesNeedingBodiesPredicate;
- (id)localAccount;
- (id)localStore;
- (id)managedObjectContext;
- (void)managedObjectContextWillSaveNotification:(id)arg1;
- (id)managedObjectModel;
- (id)mostRecentlyModifiedNoteInCollection:(id)arg1;
- (id)newFRCForCollection:(id)arg1 delegate:(id)arg2;
- (id)newFetchRequestForNotes;
- (id)newlyAddedAccount;
- (id)newlyAddedAttachment;
- (id)newlyAddedNote;
- (id)newlyAddedNoteWithGUID:(id)arg1;
- (id)newlyAddedStore;
- (id)nextIndex;
- (id)noteChangeWithType:(int)arg1 store:(id)arg2;
- (id)noteForObjectID:(id)arg1;
- (id)notesForIntegerIds:(id)arg1;
- (id)pathForIndex;
- (id)pathForPersistentStore;
- (id)persistentStoreCoordinator;
- (id)propertyValueForKey:(id)arg1;
- (void)receiveDarwinNotificationWithChangeLogging:(BOOL)arg1;
- (void)removeConflictingSqliteAndIdxFiles;
- (void)removeSqliteAndIdxFiles;
- (void)resetNotificationCount;
- (BOOL)save:(id*)arg1;
- (BOOL)saveOutsideApp:(id*)arg1;
- (BOOL)saveSilently:(id*)arg1;
- (void)setAccountUtilities:(id)arg1;
- (void)setHasPriorityInSaveConflicts:(BOOL)arg1;
- (void)setPropertyValue:(id)arg1 forKey:(id)arg2;
- (BOOL)setUpCoreDataStack;
- (BOOL)setUpLastIndexTid;
- (BOOL)setUpLocalAccountAndStore;
- (void)setUpUniqueObjects;
- (BOOL)shouldDisableLocalStore;
- (BOOL)shouldObserveDarwinNotifications;
- (void)sortNotes:(id)arg1;
- (id)storeForObjectID:(id)arg1;
- (id)storeOptions;
- (void)tearDownCoreDataStack;
- (void)trackChanges:(id)arg1;
- (id)urlForPersistentStore;
- (id)visibleNoteForObjectID:(id)arg1;
- (id)visibleNotesForIntegerIds:(id)arg1;
- (id)visibleNotesPredicate;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

+ (id)searchLegacyContext;
+ (id)sharedContext;

- (id)legacyAllSearchIndexableObjects;
- (id)legacyManagedObjectContext;
- (id)legacyNoteForIdentifier:(id)arg1 includeDeleted:(BOOL)arg2;
- (id)legacyNoteForIntegerID:(id)arg1;

@end

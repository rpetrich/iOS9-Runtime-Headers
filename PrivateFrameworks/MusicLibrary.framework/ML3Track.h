/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Track : ML3Entity

// Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary

+ (id)TVShowEpisodesDefaultOrderingTerms;
+ (id)_normalizedImportChapters:(id)arg1 trackPersistentID:(long long)arg2;
+ (BOOL)_writeSyncDeletesToPlistWithLibrary:(id)arg1 forPersistentIDs:(id)arg2;
+ (id)albumAllArtistsDefaultOrderingTerms;
+ (id)albumAndArtistDefaultOrderingTerms;
+ (id)albumsByAlbumArtistDefaultOrderingTerms;
+ (id)albumsDefaultOrderingTerms;
+ (id)allProperties;
+ (id)artistAllAlbumsDefaultOrderingTerms;
+ (id)artistsDefaultOrderingTerms;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(BOOL)arg3;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 disableKeepLocal:(BOOL)arg3 usingConnection:(id)arg4;
+ (BOOL)clearLocationFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3;
+ (id)collectionClassesToUpdateBeforeDelete;
+ (id)composersDefaultOrderingTerms;
+ (id)containerQueryWithContainer:(id)arg1;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2;
+ (id)containerQueryWithContainer:(id)arg1 predicate:(id)arg2 orderingTerms:(id)arg3;
+ (id)databaseTable;
+ (id)defaultOrderingTerms;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned int)arg4;
+ (BOOL)deleteFromLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned int)arg4 usingConnection:(id)arg5;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingBlock:(id /* block */)arg3;
+ (void)enumeratePathsToDeleteFromLibrary:(id)arg1 persistentIDs:(id)arg2 usingConnection:(id)arg3 usingBlock:(id /* block */)arg4;
+ (id)extraTablesToDelete;
+ (id)extraTablesToInsert;
+ (id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg1 trackPersistentID:(long long)arg2;
+ (id)flattenedChapterDataWithImportChapters:(id)arg1 library:(id)arg2 trackPersistentID:(long long)arg3;
+ (id)foreignColumnForProperty:(id)arg1;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)genresDefaultOrderingTerms;
+ (id)importChaptersByParsingAsset:(id)arg1;
+ (void)initialize;
+ (id)joinClausesForProperty:(id)arg1;
+ (BOOL)libraryContentsChangeForProperty:(id)arg1;
+ (BOOL)libraryDynamicChangeForProperty:(id)arg1;
+ (id)orderingTermsForITTGTrackOrder:(unsigned long)arg1 descending:(BOOL)arg2;
+ (id)persistentIDColumnForTable:(id)arg1;
+ (id)podcastsDefaultOrderingTerms;
+ (id)podcastsEpisodesDefaultOrderingTerms;
+ (void)populateSortOrdersOfPropertyValues:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3;
+ (id)predicateByOptimizingComparisonPredicate:(id)arg1;
+ (id)predisambiguatedProperties;
+ (BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg1;
+ (BOOL)removeFromMyLibrary:(id)arg1 deletionType:(int)arg2 persistentIDs:(const long long*)arg3 count:(unsigned int)arg4;
+ (int)revisionTrackingCode;
+ (id)sectionPropertyForProperty:(id)arg1;
+ (id)subselectPropertyForProperty:(id)arg1;
+ (id)subselectStatementForProperty:(id)arg1;
+ (BOOL)trackValueAreInTheCloud:(id)arg1;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibrary:(id)arg2;
+ (BOOL)trackWithPersistentID:(long long)arg1 existsInLibraryWithConnection:(id)arg2;
+ (BOOL)trackWithPersistentID:(long long)arg1 visibleInLibrary:(id)arg2;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletedFileSize:(long long*)arg3;
+ (BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg1 persistentIDs:(id)arg2 deletionType:(int)arg3 deletedFileSize:(long long*)arg4;
+ (id)unsettableProperties;
+ (void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg1;

- (void)_createVideoSnapshotAtTime:(double)arg1 withCompletionBlock:(id /* block */)arg2;
- (id)_screenshotArtworkDataStoredAsItemArtwork;
- (id)absoluteFilePath;
- (id)artworkTokenAtPlaybackTime:(double)arg1;
- (id)chapterTOC;
- (id)computeSHA256OfAudioPacketDataInLocalAsset;
- (void)createVideoSnapshotAtTime:(double)arg1;
- (id)initWithDictionary:(id)arg1 inLibrary:(id)arg2 cachedNameOrders:(id)arg3 usingConnection:(id)arg4;
- (id)multiverseIdentifier;
- (id)multiverseIdentifierLibraryOnly:(BOOL)arg1;
- (BOOL)needsVideoSnapshot;
- (BOOL)populateArtworkCacheWithArtworkData:(id)arg1;
- (void)populateChapterDataWithImportChapters:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1;
- (void)populateLocationPropertiesWithPath:(id)arg1 isProtected:(BOOL)arg2;
- (void)populateLocationPropertiesWithPath:(id)arg1 protectionType:(int)arg2;
- (id)protocolItem;
- (id)rawIntegrity;
- (void)updateCollectionCloudStatus;
- (BOOL)updateIntegrity;
- (void)updateStoreBookmarkMetadataIdentifier;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)propertyForMPMediaEntityProperty:(id)arg1;

@end

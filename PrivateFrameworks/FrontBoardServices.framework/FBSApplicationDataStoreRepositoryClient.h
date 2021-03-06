/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSApplicationDataStoreRepositoryClient : FBSSystemServiceFacilityClient {
    NSMutableDictionary * _pendingChangesToPrefetchedKeys;
    NSObject<OS_dispatch_queue> * _prefetchedDataQueue;
    NSMutableDictionary * _prefetchedKeyCounts;
    NSMutableDictionary * _prefetchedKeyValues;
}

- (id)_allPrefetchedChangesInFlightForApplication:(id)arg1;
- (void)_handleStoreInvalidated:(id)arg1;
- (void)_handleValueChanged:(id)arg1;
- (BOOL)_isChangeInFlightForPrefetchedKey:(id)arg1 application:(id)arg2;
- (BOOL)_prefetchedObjectIfAvailableForKey:(id)arg1 application:(id)arg2 outObject:(id*)arg3;
- (void)_sendMessageType:(int)arg1 withMessage:(id /* block */)arg2 withReplyHandler:(id /* block */)arg3 waitForReply:(BOOL)arg4;
- (void)_sendPrefetchedKeys:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)_setChangeInFlight:(BOOL)arg1 forPrefetchedKey:(id)arg2 application:(id)arg3;
- (void)_setPrefetchedObjectIfNecessary:(id)arg1 forKey:(id)arg2 application:(id)arg3;
- (void)addPrefetchedKeys:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)availableDataStores:(id /* block */)arg1;
- (id)clientCallbackQueue;
- (void)dealloc;
- (void)fireCompletion:(id /* block */)arg1 arrayResults:(id)arg2 error:(id)arg3;
- (void)fireCompletion:(id /* block */)arg1 error:(id)arg2;
- (void)fireCompletion:(id /* block */)arg1 result:(id)arg2 error:(id)arg3;
- (void)handleMessage:(id)arg1 withType:(long long)arg2;
- (id)init;
- (void)invalidate;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 useBSXPCCoding:(BOOL)arg3 withResult:(id /* block */)arg4;
- (void)objectForKey:(id)arg1 forApplication:(id)arg2 withResult:(id /* block */)arg3 checkPrefetch:(BOOL)arg4 useBSXPCCoding:(BOOL)arg5;
- (void)removeAllObjectsForApplication:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)removeObjectForKey:(id)arg1 forApplication:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)removePrefetchedKeys:(id)arg1 withCompletion:(id /* block */)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 forApplication:(id)arg3 useBSXPCCoding:(BOOL)arg4 withCompletion:(id /* block */)arg5;
- (void)synchronizeWithCompletion:(id /* block */)arg1;

@end

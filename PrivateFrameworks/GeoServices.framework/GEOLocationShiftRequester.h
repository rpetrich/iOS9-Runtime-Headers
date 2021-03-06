/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLocationShiftRequester : NSObject {
    NSMapTable * _pendingRequests;
    NSLock * _pendingRequestsLock;
    NSMapTable * _providers;
}

+ (id)sharedRequester;

- (void)cancelRequest:(id)arg1;
- (Class)classForProviderID:(short)arg1;
- (void)dealloc;
- (id)init;
- (void)registerProvider:(Class)arg1;
- (void)startRequest:(id)arg1 finished:(id /* block */)arg2 networkActivity:(id /* block */)arg3 error:(id /* block */)arg4;

@end

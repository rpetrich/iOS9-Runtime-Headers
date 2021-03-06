/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDApplicationMonitor : NSObject {
    HMDApplicationRegistry * _appRegistry;
    <HMDApplicationMonitorDelegate> * _delegate;
    BKSApplicationStateMonitor * _monitor;
    NSMutableSet * _processes;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, readonly) BOOL activeHomeKitApps;
@property (nonatomic) HMDApplicationRegistry *appRegistry;
@property (nonatomic, readonly) NSSet *backgroundApps;
@property (nonatomic) <HMDApplicationMonitorDelegate> *delegate;
@property (nonatomic, readonly) NSSet *foregroundApps;
@property (nonatomic, readonly) BKSApplicationStateMonitor *monitor;
@property (nonatomic, readonly) NSMutableSet *processes;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *workQueue;

+ (id)applicationStateDescription:(unsigned int)arg1;

- (void).cxx_destruct;
- (void)_callActiveHomeKitAppDelegate:(BOOL)arg1;
- (void)_callAppStateChangeDelegate:(id)arg1;
- (BOOL)_delegateConformsAndRespondsToSelector:(SEL)arg1;
- (void)_handleAppStateChangedInfo:(id)arg1;
- (unsigned int)_translateApplicationState:(unsigned int)arg1;
- (BOOL)activeHomeKitApps;
- (id)activeRequests;
- (void)addProcess:(id)arg1;
- (id)appRegistry;
- (id)applicationInfoForPID:(int)arg1;
- (id)backgroundApps;
- (void)dealloc;
- (id)delegate;
- (id)foregroundApps;
- (BOOL)infoIsForViewService:(id)arg1;
- (id)init;
- (id)monitor;
- (id)processInfoForPID:(int)arg1;
- (id)processes;
- (void)removeProcess:(id)arg1;
- (void)setAppRegistry:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)start;
- (unsigned int)translateApplicationStateForInfo:(id)arg1;
- (id)workQueue;

@end

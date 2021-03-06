/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMServiceGroup : NSObject <HMMessageReceiver, HMObjectMerge, NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _clientQueue;
    HMThreadSafeMutableArrayCollection * _currentServices;
    HMDelegateCaller * _delegateCaller;
    HMHome * _home;
    HMMessageDispatcher * _msgDispatcher;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    NSUUID * _uniqueIdentifier;
    NSUUID * _uuid;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic, retain) HMThreadSafeMutableArrayCollection *currentServices;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) HMDelegateCaller *delegateCaller;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic) HMHome *home;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (nonatomic, readonly) NSUUID *messageTargetUUID;
@property (nonatomic, retain) HMMessageDispatcher *msgDispatcher;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyQueue;
@property (nonatomic, readonly, copy) NSArray *services;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *uniqueIdentifier;
@property (nonatomic, readonly) NSUUID *uuid;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_addService:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_configure:(id)arg1 messageDispatcher:(id)arg2 clientQueue:(id)arg3 delegateCaller:(id)arg4;
- (id)_findService:(id)arg1;
- (void)_handleServiceAddedNotification:(id)arg1;
- (void)_handleServiceGroupRenamedNotification:(id)arg1;
- (void)_handleServiceRemovedNotification:(id)arg1;
- (void)_invalidate;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_registerNotificationHandlers;
- (void)_removeService:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_removeServices:(id)arg1;
- (void)_unconfigure;
- (void)_updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addService:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)clientQueue;
- (id)currentServices;
- (void)dealloc;
- (id)delegateCaller;
- (void)encodeWithCoder:(id)arg1;
- (id)home;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2;
- (id)messageReceiveQueue;
- (id)messageTargetUUID;
- (id)msgDispatcher;
- (id)name;
- (id)propertyQueue;
- (void)removeService:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)services;
- (void)setClientQueue:(id)arg1;
- (void)setCurrentServices:(id)arg1;
- (void)setDelegateCaller:(id)arg1;
- (void)setHome:(id)arg1;
- (void)setMsgDispatcher:(id)arg1;
- (void)setName:(id)arg1;
- (void)setPropertyQueue:(id)arg1;
- (id)uniqueIdentifier;
- (void)updateName:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)uuid;

@end

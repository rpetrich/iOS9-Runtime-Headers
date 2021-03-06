/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKWaiterWrapper : NSObject {
    id /* block */  _completionHandler;
    id  _waiter;
    NSArray * _zoneIDs;
}

@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, retain) id waiter;
@property (nonatomic, retain) NSArray *zoneIDs;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (id /* block */)completionHandler;
- (id)description;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setWaiter:(id)arg1;
- (void)setZoneIDs:(id)arg1;
- (id)waiter;
- (id)zoneIDs;

@end

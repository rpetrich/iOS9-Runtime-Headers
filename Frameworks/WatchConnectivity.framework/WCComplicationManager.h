/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
 */

@interface WCComplicationManager : NSObject <NSXPCConnectionDelegate, WCXPCPrivateManagerClientProtocol> {
    NSXPCConnection * _connection;
    NSObject<WCComplicationManagerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    int  _listenerResumedToken;
    int  _privateServiceShouldConnectToken;
}

@property (readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<WCComplicationManagerDelegate> *delegate;
@property (readonly) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property int listenerResumedToken;
@property int privateServiceShouldConnectToken;
@property (readonly) Class superclass;

+ (void)initialize;
+ (id)privateClientInterface;
+ (id)privateDaemonInterface;

- (void).cxx_destruct;
- (id)connection;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)dealloc;
- (id)delegate;
- (id)delegateQueue;
- (void)handlePingForExtensionBundleID:(id)arg1;
- (id)init;
- (void)isExtensionPrivileged:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)listenerResumedToken;
- (int)privateServiceShouldConnectToken;
- (void)setDelegate:(id)arg1;
- (void)setListenerResumedToken:(int)arg1;
- (void)setPrivateServiceShouldConnectToken:(int)arg1;
- (void)setupConnection;

@end

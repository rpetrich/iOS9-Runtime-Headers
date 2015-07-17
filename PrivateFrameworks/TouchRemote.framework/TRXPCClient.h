/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRXPCClient : NSObject <NSXPCConnectionDelegate> {
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) <TRXPCDaemonExportedInterface> *remoteDaemonProxy;
@property (readonly) Class superclass;

+ (id)sharedClient;

- (void).cxx_destruct;
- (id)_init;
- (void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3;
- (void)dealloc;
- (id)init;
- (id)remoteDaemonProxy;
- (id)remoteDaemonProxyWithErrorHandler:(id /* block */)arg1;

@end
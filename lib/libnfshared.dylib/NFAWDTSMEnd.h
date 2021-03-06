/* Generated by RuntimeBrowser
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDTSMEnd : NSObject <NFAWDEventProtocol> {
    AWDNFCTSMEndEvent * _metric;
    NSData * aid;
    BOOL  authEnabled;
    NSData * discretionaryData;
    unsigned int  lifeCycleState;
    BOOL  mfdEnabled;
    BOOL  restrictedModeExit;
    unsigned int  status;
}

@property (nonatomic, retain) NSData *aid;
@property (nonatomic) BOOL authEnabled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSData *discretionaryData;
@property (readonly) unsigned int hash;
@property (nonatomic) unsigned int lifeCycleState;
@property (nonatomic, retain) AWDNFCTSMEndEvent *metric;
@property (nonatomic) BOOL mfdEnabled;
@property (nonatomic) BOOL restrictedModeExit;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;

- (id)aid;
- (BOOL)authEnabled;
- (void)dealloc;
- (id)discretionaryData;
- (id)getMetric;
- (unsigned long)getMetricId;
- (id)init;
- (unsigned int)lifeCycleState;
- (id)metric;
- (BOOL)mfdEnabled;
- (BOOL)restrictedModeExit;
- (void)setAid:(id)arg1;
- (void)setAuthEnabled:(BOOL)arg1;
- (void)setDiscretionaryData:(id)arg1;
- (void)setLifeCycleState:(unsigned int)arg1;
- (void)setMetric:(id)arg1;
- (void)setMfdEnabled:(BOOL)arg1;
- (void)setRestrictedModeExit:(BOOL)arg1;
- (void)setStatus:(unsigned int)arg1;
- (unsigned int)status;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end

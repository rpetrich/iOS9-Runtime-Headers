/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOUserSessionEntity : NSObject {
    unsigned int  _sequenceNumber;
    double  _sessionCreationTime;
    struct { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionID;
}

@property (nonatomic) unsigned int sequenceNumber;
@property double sessionCreationTime;
@property struct { unsigned long long x1; unsigned long long x2; } sessionID;
@property (nonatomic, readonly) NSNumber *sessionIDHigh;
@property (nonatomic, readonly) NSString *sessionIDHighString;
@property (nonatomic, readonly) NSNumber *sessionIDLow;
@property (nonatomic, readonly) NSString *sessionIDLowString;
@property (nonatomic, readonly) NSString *sessionIDString;

- (id)description;
- (id)initWithSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned int)arg3;
- (unsigned int)sequenceNumber;
- (double)sessionCreationTime;
- (struct { unsigned long long x1; unsigned long long x2; })sessionID;
- (id)sessionIDHigh;
- (id)sessionIDHighString;
- (id)sessionIDLow;
- (id)sessionIDLowString;
- (id)sessionIDString;
- (void)setSequenceNumber:(unsigned int)arg1;
- (void)setSessionCreationTime:(double)arg1;
- (void)setSessionID:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (void)updateSessionIDFromUUIDString:(id)arg1;

@end

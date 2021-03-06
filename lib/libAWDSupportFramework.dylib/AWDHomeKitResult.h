/* Generated by RuntimeBrowser
   Image: /usr/lib/libAWDSupportFramework.dylib
 */

@interface AWDHomeKitResult : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _characteristicTypes;
    unsigned int  _duration;
    NSString * _guid;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int duration : 1; 
        unsigned int isClient : 1; 
        unsigned int operationType : 1; 
        unsigned int resultCode : 1; 
        unsigned int resultType : 1; 
        unsigned int transportType : 1; 
    }  _has;
    unsigned int  _isClient;
    unsigned int  _operationType;
    int  _resultCode;
    unsigned int  _resultType;
    struct { 
        unsigned int *list; 
        unsigned int count; 
        unsigned int size; 
    }  _serviceTypes;
    unsigned long long  _timestamp;
    unsigned int  _transportType;
}

@property (nonatomic, readonly) unsigned int*characteristicTypes;
@property (nonatomic, readonly) unsigned int characteristicTypesCount;
@property (nonatomic) unsigned int duration;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic, readonly) BOOL hasGuid;
@property (nonatomic) BOOL hasIsClient;
@property (nonatomic) BOOL hasOperationType;
@property (nonatomic) BOOL hasResultCode;
@property (nonatomic) BOOL hasResultType;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) unsigned int isClient;
@property (nonatomic) unsigned int operationType;
@property (nonatomic) int resultCode;
@property (nonatomic) unsigned int resultType;
@property (nonatomic, readonly) unsigned int*serviceTypes;
@property (nonatomic, readonly) unsigned int serviceTypesCount;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int transportType;

- (void)addCharacteristicType:(unsigned int)arg1;
- (void)addServiceType:(unsigned int)arg1;
- (unsigned int)characteristicTypeAtIndex:(unsigned int)arg1;
- (unsigned int*)characteristicTypes;
- (unsigned int)characteristicTypesCount;
- (void)clearCharacteristicTypes;
- (void)clearServiceTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)duration;
- (id)guid;
- (BOOL)hasDuration;
- (BOOL)hasGuid;
- (BOOL)hasIsClient;
- (BOOL)hasOperationType;
- (BOOL)hasResultCode;
- (BOOL)hasResultType;
- (BOOL)hasTimestamp;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (unsigned int)isClient;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)operationType;
- (BOOL)readFrom:(id)arg1;
- (int)resultCode;
- (unsigned int)resultType;
- (unsigned int)serviceTypeAtIndex:(unsigned int)arg1;
- (unsigned int*)serviceTypes;
- (unsigned int)serviceTypesCount;
- (void)setCharacteristicTypes:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setDuration:(unsigned int)arg1;
- (void)setGuid:(id)arg1;
- (void)setHasDuration:(BOOL)arg1;
- (void)setHasIsClient:(BOOL)arg1;
- (void)setHasOperationType:(BOOL)arg1;
- (void)setHasResultCode:(BOOL)arg1;
- (void)setHasResultType:(BOOL)arg1;
- (void)setHasTimestamp:(BOOL)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setIsClient:(unsigned int)arg1;
- (void)setOperationType:(unsigned int)arg1;
- (void)setResultCode:(int)arg1;
- (void)setResultType:(unsigned int)arg1;
- (void)setServiceTypes:(unsigned int*)arg1 count:(unsigned int)arg2;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTransportType:(unsigned int)arg1;
- (unsigned long long)timestamp;
- (unsigned int)transportType;
- (void)writeTo:(id)arg1;

@end

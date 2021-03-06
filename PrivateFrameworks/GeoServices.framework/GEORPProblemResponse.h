/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEORPProblemResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int statusCode : 1; 
        unsigned int isNotificationSupported : 1; 
    }  _has;
    BOOL  _isNotificationSupported;
    NSString * _problemId;
    int  _statusCode;
}

@property (nonatomic) BOOL hasIsNotificationSupported;
@property (nonatomic, readonly) BOOL hasProblemId;
@property (nonatomic) BOOL hasStatusCode;
@property (nonatomic) BOOL isNotificationSupported;
@property (nonatomic, retain) NSString *problemId;
@property (nonatomic) int statusCode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasIsNotificationSupported;
- (BOOL)hasProblemId;
- (BOOL)hasStatusCode;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isNotificationSupported;
- (void)mergeFrom:(id)arg1;
- (id)problemId;
- (BOOL)readFrom:(id)arg1;
- (void)setHasIsNotificationSupported:(BOOL)arg1;
- (void)setHasStatusCode:(BOOL)arg1;
- (void)setIsNotificationSupported:(BOOL)arg1;
- (void)setProblemId:(id)arg1;
- (void)setStatusCode:(int)arg1;
- (int)statusCode;
- (void)writeTo:(id)arg1;

@end

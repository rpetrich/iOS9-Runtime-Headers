/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFHardwareControllerInfo : NSObject <NSSecureCoding> {
    unsigned int  _ROMVersion;
    unsigned int  _firmwareRevision;
    unsigned int  _firmwareVersion;
    BOOL  _hasAntenna;
    BOOL  _hasBooster;
    unsigned int  _middlewareVersion;
    unsigned int  _siliconName;
    unsigned int  _siliconVersion;
}

@property (nonatomic, readonly) unsigned int ROMVersion;
@property (nonatomic, readonly) unsigned int firmwareRevision;
@property (nonatomic, readonly) unsigned int firmwareVersion;
@property (nonatomic, readonly) BOOL hasAntenna;
@property (nonatomic, readonly) BOOL hasBooster;
@property (nonatomic, readonly) unsigned int middlewareVersion;
@property (nonatomic, readonly) unsigned int siliconName;
@property (nonatomic, readonly) unsigned int siliconVersion;

+ (BOOL)supportsSecureCoding;

- (unsigned int)ROMVersion;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)firmwareRevision;
- (unsigned int)firmwareVersion;
- (BOOL)hasAntenna;
- (BOOL)hasBooster;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (unsigned int)middlewareVersion;
- (unsigned int)siliconName;
- (unsigned int)siliconVersion;

@end

/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBATTRequest : NSObject {
    CBCentral * _central;
    CBCharacteristic * _characteristic;
    BOOL  _ignoreResponse;
    unsigned int  _offset;
    NSNumber * _transactionID;
    NSMutableData * _value;
}

@property (nonatomic, readonly) CBCentral *central;
@property (nonatomic, retain) CBCharacteristic *characteristic;
@property (nonatomic) BOOL ignoreResponse;
@property (nonatomic, readonly) unsigned int offset;
@property (nonatomic, readonly) NSNumber *transactionID;
@property (copy) NSData *value;

- (void)appendValueData:(id)arg1;
- (id)central;
- (id)characteristic;
- (void)dealloc;
- (id)description;
- (unsigned int)endOffset;
- (BOOL)ignoreResponse;
- (id)initWithCentral:(id)arg1 characteristic:(id)arg2 offset:(unsigned int)arg3 transactionID:(id)arg4;
- (unsigned int)offset;
- (void)setCharacteristic:(id)arg1;
- (void)setIgnoreResponse:(BOOL)arg1;
- (void)setValue:(id)arg1;
- (id)transactionID;
- (id)value;

@end

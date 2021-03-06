/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUAutoInstallForecast : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _suEndDate;
    NSDate * _suStartDate;
    NSDate * _unlockEndDate;
    NSDate * _unlockStartDate;
}

@property (nonatomic, retain) NSDate *suEndDate;
@property (nonatomic, retain) NSDate *suStartDate;
@property (nonatomic, retain) NSDate *unlockEndDate;
@property (nonatomic, retain) NSDate *unlockStartDate;

+ (BOOL)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setSuEndDate:(id)arg1;
- (void)setSuStartDate:(id)arg1;
- (void)setUnlockEndDate:(id)arg1;
- (void)setUnlockStartDate:(id)arg1;
- (id)suEndDate;
- (id)suStartDate;
- (id)unlockEndDate;
- (id)unlockStartDate;

@end

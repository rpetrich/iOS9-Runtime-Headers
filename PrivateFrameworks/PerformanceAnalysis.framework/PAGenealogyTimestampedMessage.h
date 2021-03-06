/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PerformanceAnalysis.framework/PerformanceAnalysis
 */

@interface PAGenealogyTimestampedMessage : NSObject {
    unsigned long long  _activityId;
    double  _machTime;
}

@property (readonly) unsigned long long activityId;
@property (readonly) double machTime;
@property (readonly) NSString *message;

- (unsigned long long)activityId;
- (int)compareToOtherMessage:(id)arg1;
- (id)initWithActivityId:(unsigned long long)arg1 atMachTime:(double)arg2;
- (BOOL)isEqual:(id)arg1;
- (double)machTime;
- (id)message;

@end

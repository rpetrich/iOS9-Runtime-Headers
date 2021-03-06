/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
 */

@interface WBSAWDLogger : NSObject {
    AWDServerConnection * _awdServer;
    NSMutableDictionary * _pageLoadStartTimes;
}

@property (nonatomic, readonly) AWDServerConnection *awdServer;

+ (id)sharedLogger;

- (void).cxx_destruct;
- (void)_submitMetric:(id)arg1 withId:(unsigned int)arg2;
- (id)awdServer;
- (id)init;
- (void)pageLoadCompleted:(unsigned int)arg1;
- (void)pageLoadCompleted:(unsigned int)arg1 withConfigurationID:(unsigned int)arg2;
- (void)pageLoadStarted:(unsigned int)arg1;
- (void)pageLoadStarted:(unsigned int)arg1 withConfigurationID:(unsigned int)arg2;

@end

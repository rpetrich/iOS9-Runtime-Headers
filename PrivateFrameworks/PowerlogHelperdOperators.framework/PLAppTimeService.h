/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAppTimeService : PLService {
    PLEntryNotificationOperatorComposition * _InCallServiceCallback;
    NSString * _aggregatedEntryKeyForAppRunTime;
    PLEntryNotificationOperatorComposition * _applicationCallback;
    NSMutableSet * _appsOnScreen;
    NSDictionary * _backgroundAppToBundleID;
    PLEntryNotificationOperatorComposition * _batteryCallback;
    PLEntryNotificationOperatorComposition * _coalitionCallback;
    BOOL  _deviceIsPluggedIn;
    PLEntryNotificationOperatorComposition * _displayCallback;
    BOOL  _displayOn;
    NSString * _entryKeyPLCoalitionAgentEventIntervalCoalition;
    NSString * _entryKeyPLScreenStateAgentScreenState;
    NSSet * _excludedBGAppsSet;
    NSSet * _excludedFGAppsSet;
    BOOL  _inCallNow;
    NSMutableDictionary * _inFlightBundleIDStartTime;
    NSString * _lastCallBundleID;
    NSDate * _lastCallTime;
    NSArray * _lastLayoutEntries;
    NSDate * _lastScreenEventAccountingTime;
    NSDate * _lastScreenOnTime;
    BOOL  _pluggedInBetweenCoalitionSBC;
    PLEntryNotificationOperatorComposition * _pluginCallback;
    PLTimer * _runTimeAggregatorTimer;
    PLEntryNotificationOperatorComposition * _screenstateCallback;
    NSMutableSet * _watchkitExtensions;
}

@property (retain) PLEntryNotificationOperatorComposition *InCallServiceCallback;
@property (retain) NSString *aggregatedEntryKeyForAppRunTime;
@property (retain) PLEntryNotificationOperatorComposition *applicationCallback;
@property (retain) NSMutableSet *appsOnScreen;
@property (readonly) NSDictionary *backgroundAppToBundleID;
@property (retain) PLEntryNotificationOperatorComposition *batteryCallback;
@property (retain) PLEntryNotificationOperatorComposition *coalitionCallback;
@property BOOL deviceIsPluggedIn;
@property (retain) PLEntryNotificationOperatorComposition *displayCallback;
@property BOOL displayOn;
@property (readonly) NSString *entryKeyPLCoalitionAgentEventIntervalCoalition;
@property (readonly) NSString *entryKeyPLScreenStateAgentScreenState;
@property (readonly) NSSet *excludedBGAppsSet;
@property (readonly) NSSet *excludedFGAppsSet;
@property BOOL inCallNow;
@property (retain) NSMutableDictionary *inFlightBundleIDStartTime;
@property (retain) NSString *lastCallBundleID;
@property (retain) NSDate *lastCallTime;
@property (retain) NSArray *lastLayoutEntries;
@property (retain) NSDate *lastScreenEventAccountingTime;
@property (retain) NSDate *lastScreenOnTime;
@property BOOL pluggedInBetweenCoalitionSBC;
@property (retain) PLEntryNotificationOperatorComposition *pluginCallback;
@property (retain) PLTimer *runTimeAggregatorTimer;
@property (retain) PLEntryNotificationOperatorComposition *screenstateCallback;
@property (retain) NSMutableSet *watchkitExtensions;

+ (id)defaults;
+ (id)entryAggregateDefinitionAppRunTime;
+ (id)entryAggregateDefinitions;
+ (void)load;

- (void).cxx_destruct;
- (id)InCallServiceCallback;
- (void)addForegroundTimeAtDate:(id)arg1 withNewLayoutElementsArray:(id)arg2;
- (id)aggregatedEntryKeyForAppRunTime;
- (id)applicationCallback;
- (id)appsOnScreen;
- (id)backgroundAppToBundleID;
- (id)backgroundAppToBundleIDmapping;
- (id)batteryCallback;
- (id)buildCallBack:(id)arg1 withGroup:(BOOL)arg2 withHandler:(id /* block */)arg3;
- (id)coalitionCallback;
- (double)convertCPUTimeToBackgroundTime:(double)arg1 withDuration:(double)arg2;
- (void)debugAppTimeService;
- (BOOL)deviceIsPluggedIn;
- (id)displayCallback;
- (BOOL)displayOn;
- (id)entryKeyPLCoalitionAgentEventIntervalCoalition;
- (id)entryKeyPLScreenStateAgentScreenState;
- (id)excludedBGAppsSet;
- (id)excludedFGAppsSet;
- (double)getCPUTime:(id)arg1;
- (void)handleApplicationCallback:(id)arg1;
- (void)handleBatteryCallback:(id)arg1;
- (void)handleCoalitionCallback:(id)arg1;
- (void)handleDisplayCallback:(id)arg1;
- (void)handleInCallServiceCallback:(id)arg1;
- (void)handlePluginCallback:(id)arg1;
- (void)handleScreenStateCallback:(id)arg1;
- (BOOL)inCallNow;
- (id)inFlightBundleIDStartTime;
- (id)init;
- (void)initOperatorDependancies;
- (id)lastCallBundleID;
- (id)lastCallTime;
- (id)lastLayoutEntries;
- (id)lastScreenEventAccountingTime;
- (id)lastScreenOnTime;
- (void)loadWatchKitExtensionsSet;
- (void)periodicUpdateAppRunTime;
- (BOOL)pluggedInBetweenCoalitionSBC;
- (id)pluginCallback;
- (void)resetLayoutElementsPLEntryArray:(id)arg1 withNowDate:(id)arg2;
- (id)runTimeAggregatorTimer;
- (id)screenstateCallback;
- (void)setAggregatedEntryKeyForAppRunTime:(id)arg1;
- (void)setApplicationCallback:(id)arg1;
- (void)setAppsOnScreen:(id)arg1;
- (void)setBatteryCallback:(id)arg1;
- (void)setCoalitionCallback:(id)arg1;
- (void)setDeviceIsPluggedIn:(BOOL)arg1;
- (void)setDisplayCallback:(id)arg1;
- (void)setDisplayOn:(BOOL)arg1;
- (void)setInCallNow:(BOOL)arg1;
- (void)setInCallServiceCallback:(id)arg1;
- (void)setInFlightBundleIDStartTime:(id)arg1;
- (void)setLastCallBundleID:(id)arg1;
- (void)setLastCallTime:(id)arg1;
- (void)setLastLayoutEntries:(id)arg1;
- (void)setLastScreenEventAccountingTime:(id)arg1;
- (void)setLastScreenOnTime:(id)arg1;
- (void)setPluggedInBetweenCoalitionSBC:(BOOL)arg1;
- (void)setPluginCallback:(id)arg1;
- (void)setRunTimeAggregatorTimer:(id)arg1;
- (void)setScreenstateCallback:(id)arg1;
- (void)setWatchkitExtensions:(id)arg1;
- (void)testService;
- (void)updateAppRunTimeForBundleId:(id)arg1 withAppStateUpdateType:(int)arg2 withNowDate:(id)arg3;
- (void)updateAppsOnScreenSet:(id)arg1;
- (void)updateBackgroundTimeForAppStateEntry:(id)arg1;
- (void)updateBackgroundTimeForCoalitionEntries:(id)arg1 withNewCoaltionArray:(id)arg2;
- (void)updateBackgroundTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3;
- (void)updateInCallServiceTimeAtDate:(id)arg1;
- (void)updateInCallServiceTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3;
- (void)updateScreenOnTimeInDBForBundleId:(id)arg1 withTime:(double)arg2 withDate:(id)arg3;
- (id)watchkitExtensions;

@end

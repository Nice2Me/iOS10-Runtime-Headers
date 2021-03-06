/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDCurrentActivityCacheQueryServer : HDQueryServer <HDActivityCacheManagerObserver> {
    HDActivityCacheManager * _activityCacheManager;
    NSCalendar * _calendar;
    double  _createdTime;
    double  _firstResultsTime;
    HKActivityCache * _lastActivityCache;
    NSDateComponents * _statisticsIntervalComponents;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_queue_start;
- (void)_queue_stop;
- (bool)_shouldExecuteWhenProtectedDataIsUnavailable;
- (bool)_shouldListenForUpdates;
- (void)activityCacheManager:(id)arg1 changedTodayActivityCache:(id)arg2 currentStatisticsBuilder:(id)arg3 updatedFields:(unsigned long long)arg4 error:(id)arg5;
- (id)initWithQueryUUID:(id)arg1 dataObject:(id)arg2 clientProxy:(id)arg3 client:(id)arg4 delegate:(id)arg5 profile:(id)arg6 activityCacheManager:(id)arg7;

@end

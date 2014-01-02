/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSMetricsController.h>

@class SSMetricsEventTable;

@interface SSMetricsEventController : SSMetricsController
{
    SSMetricsEventTable *_table;
}

- (id)_collectUnreportedPIDsFromDatabase:(id)arg1 matchingReportURLString:(id)arg2 since:(long long)arg3;
- (int)_maximumUnreportedToSelect;
- (id)unreportedEventURLsSince:(long long)arg1;
- (id)newReportingSessionForURL:(id)arg1 since:(long long)arg2;
- (id)unreportedEventsForURL:(id)arg1 since:(long long)arg2;
- (_Bool)markEventsAsReported:(id)arg1;
- (_Bool)insertEventSummaries:(id)arg1 error:(id *)arg2;
- (void)flushUnreportedEventsWithCompletionHandler:(id)arg1;
- (_Bool)deleteReportedEvents;
- (_Bool)deleteEventsInsertedBefore:(long long)arg1;
- (void)_serialQueueInsertEvents:(id)arg1 withCompletionHandler:(id)arg2;
- (void)dealloc;
- (id)init;

@end


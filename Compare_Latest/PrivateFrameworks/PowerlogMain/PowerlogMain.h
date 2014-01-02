/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDateFormatter, NSString, PLEntry;

@interface PowerlogMain : NSObject
{
    PLEntry *_loggerList;
    struct __sFILE *logFile;
    NSDateFormatter *logTimestampFormatter;
    NSString *linkedLogPath;
    id rolloverTimer;
    int kQueue;
    int crashReportDirectoryDescriptor;
    int currentLogDirectoryDescriptor;
    struct __CFRunLoopSource *kqueueDescriptorSource;
    struct __CFFileDescriptor *kqueueDescriptorRef;
    _Bool rotateDebugLogging;
    _Bool runLoopDebugLogging;
    _Bool _logToFile;
    _Bool _shouldKeepRunning;
    _Bool _bbPostProcessing;
    _Bool _bbPostProcessingNotify;
    _Bool _setupComplete;
    _Bool _exitRequested;
    NSString *_fileGUID;
}

+ (void)stopSharedPowerlogMain;
+ (_Bool)haveSharedPowerlogMain;
+ (id)sharedPowerlogMain;
+ (_Bool)shouldRunPowerlogDependant;
@property _Bool exitRequested; // @synthesize exitRequested=_exitRequested;
@property _Bool setupComplete; // @synthesize setupComplete=_setupComplete;
@property(retain) NSString *fileGUID; // @synthesize fileGUID=_fileGUID;
@property _Bool shouldKeepRunning; // @synthesize shouldKeepRunning=_shouldKeepRunning;
@property _Bool logToFile; // @synthesize logToFile=_logToFile;
@property(readonly) PLEntry *loggerList; // @synthesize loggerList=_loggerList;
@property _Bool basebandPostProcessingNotify; // @synthesize basebandPostProcessingNotify=_bbPostProcessingNotify;
@property _Bool basebandPostProcessing; // @synthesize basebandPostProcessing=_bbPostProcessing;
- (void)logStatusRequestFired:(id)arg1;
- (void)logFileCheckFired:(id)arg1;
- (void)rolloverTimerFired:(id)arg1;
- (void)triggerAllLoggers:(id)arg1;
- (void)stopNotifications;
- (void)setupNotifications;
- (void)powerlogExitRequested;
- (void)setupLoggers;
- (void)addLoggerByName:(id)arg1;
- (void)watchCrashReportDirectories:(_Bool)arg1;
- (void)logDirectoryEventForFileDescriptor:(struct __CFFileDescriptor *)arg1;
- (void)setRolloverTimer:(id)arg1;
- (void)startLoggingToFile;
- (void)logStateEvent:(id)arg1 existingLogDate:(id)arg2 periodStart:(id)arg3 rolloverDate:(id)arg4;
- (_Bool)dateInRange:(id)arg1 startInclusive:(id)arg2 endExclusive:(id)arg3;
- (void)startLoggingToCurrentLog:(id)arg1;
- (void)generateLogGatheringFiles:(id)arg1;
- (void)generatePListForLog:(id)arg1 InCrashReporter:(id)arg2;
- (_Bool)archiveLogFile:(id)arg1 toFile:(id)arg2 atDir:(id)arg3;
- (void)DeleteOldFiles;
- (int)ComputeTimeFromNowFromDefaults:(id)arg1;
- (void)stopLoggingAndCloseFile;
- (_Bool)readLogFilePrefix:(id)arg1 buildVersion:(id *)arg2 logDate:(id *)arg3;
- (void)createNewCurrentLogWithTimestamp:(id)arg1;
- (_Bool)shouldRotateLogFilesWithPeriodStart:(id *)arg1 withRolloverDate:(id *)arg2;
- (id)logFileNameForTimestamp:(id)arg1;
- (void)logFileCheck;
- (_Bool)setFileProtectionForPath:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)fileIsUnlockedAtPath:(id)arg1 withIdentifier:(id)arg2;
- (_Bool)shouldLinkToCrashreporter;
- (id)currentLoggingModeString;
- (id)rotatePowerlogDefaultStringValue;
- (_Bool)moveFileAtPath:(id)arg1;
- (_Bool)moveFileFromPath:(id)arg1 toPath:(id)arg2;
- (_Bool)deleteFileAtPath:(id)arg1;
- (_Bool)doesFileAtPathExist:(id)arg1;
- (_Bool)isFileDescripterMultiLinked:(struct __sFILE *)arg1;
- (_Bool)isSameHardLinkedFileAtPath:(id)arg1 asAtPath:(id)arg2;
- (void)fatalError:(id)arg1 withReason:(id)arg2;
- (id)remainingStringFrom:(id)arg1 byRemovingPrefix:(id)arg2 byRemovingSuffix:(id)arg3;
- (void)blackListTodayAsFullMode;
- (void)dealloc;
- (short)currentRunningMode;
- (short)currentLoggerMode;
- (void)run;
- (void)runThread:(id)arg1;
- (id)init;

@end


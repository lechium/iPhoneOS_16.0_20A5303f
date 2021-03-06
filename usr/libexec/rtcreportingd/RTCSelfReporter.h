//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet, ReportingdAgent;
@protocol OS_dispatch_queue;

@interface RTCSelfReporter : NSObject
{
    NSMutableDictionary *_performanceData;	// 8 = 0x8
    NSMutableDictionary *_internalState;	// 16 = 0x10
    ReportingdAgent *_agent;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_reportQueue;	// 32 = 0x20
    NSMutableSet *_failedPlatforms;	// 40 = 0x28
    int _numberOfPOSTFailures;	// 48 = 0x30
    int _numberOfStorebagDownloadFailures;	// 52 = 0x34
    int _numberOfStorebagReadFailures;	// 56 = 0x38
    int _numberOfStorebagWriteFailures;	// 60 = 0x3c
    int _numberOfStorebagDeleteFailures;	// 64 = 0x40
    int _numberOfStorebagValidationFailures;	// 68 = 0x44
    int _numberOfStorebagDownloadSuccess;	// 72 = 0x48
    int _numberOfStorebagFetchSkippedForError;	// 76 = 0x4c
    int _numberOfSuccessfulPOSTs;	// 80 = 0x50
    int _numberOfCoreDuetNRMWakeUps;	// 84 = 0x54
    int _numberOfCoreDuetPRTWakeUps;	// 88 = 0x58
    int _numberOfCoreDuetARTWakeUps;	// 92 = 0x5c
    int _bytesFailed;	// 96 = 0x60
    int _bytesSucceeded;	// 100 = 0x64
    int _numFailedDiskCacheWrite;	// 104 = 0x68
    int _numSuccessfulDiskCacheWrite;	// 108 = 0x6c
    int _numEventsNRM;	// 112 = 0x70
    int _numEventsPRT;	// 116 = 0x74
    int _numEventsART;	// 120 = 0x78
    int _numLostEventsNRM;	// 124 = 0x7c
    int _numLostEventsPRT;	// 128 = 0x80
    int _numLostEventsART;	// 132 = 0x84
    int _lostEventsNRM;	// 136 = 0x88
    int _lostEventsPRT;	// 140 = 0x8c
    int _lostEventsART;	// 144 = 0x90
}

- (void)addFailedPlatform:(id)arg1;	// IMP=0x0020000000018f81
- (void)reportSession:(id)arg1 type:(unsigned short)arg2;	// IMP=0x0010000000018c81
- (void)sendOverLimit:(id)arg1 type:(unsigned short)arg2;	// IMP=0x0010000000018c2e
- (void)sendFailureSummary:(id)arg1 forType:(unsigned short)arg2;	// IMP=0x0010000000018add
- (void)sendFailureSummary:(id)arg1;	// IMP=0x0010000000018a98
- (void)addFailure:(unsigned short)arg1 forPrefix:(id)arg2 withPayload:(id)arg3;	// IMP=0x0010000000018962
- (void)sendDailySummary;	// IMP=0x00100000000188b1
- (void)resetData;	// IMP=0x0010000000018844
- (void)updatePerformanceData;	// IMP=0x0010000000018550
- (void)updateFromDisk;	// IMP=0x00100000000182d7
- (void)lostEventsForPrefix:(id)arg1 filepath:(id)arg2;	// IMP=0x00100000000181d1
- (void)removeEventForPrefix:(id)arg1 filepath:(id)arg2;	// IMP=0x0010000000018107
- (void)addEventForPrefix:(id)arg1 filepath:(id)arg2;	// IMP=0x0010000000017ff9
- (void)successToWriteDiskCache;	// IMP=0x0010000000017ff0
- (void)failedToWriteDiskCache;	// IMP=0x0010000000017fe7
- (void)wokeupForPrefix:(id)arg1;	// IMP=0x0010000000017f6d
- (void)failedToDeleteStorebag;	// IMP=0x0010000000017f64
- (void)failedToWWriteStorebag;	// IMP=0x0010000000017f5b
- (void)failedToReadStorebag;	// IMP=0x0010000000017f52
- (void)failedStorebagValidation;	// IMP=0x0010000000017f49
- (void)skippedStorebagFetchForError;	// IMP=0x0010000000017f40
- (void)successfulStorebagFetch;	// IMP=0x0010000000017f37
- (void)failedStorebagFetch;	// IMP=0x0010000000017f2e
- (void)successfulPOST:(int)arg1;	// IMP=0x0010000000017f22
- (void)failedToPOST:(int)arg1;	// IMP=0x0010000000017f16
- (void)readFromDisk;	// IMP=0x0010000000017dae
- (void)writeToDisk;	// IMP=0x0010000000017bba
- (void)flushOverdue;	// IMP=0x0010000000017aa7
- (void)dealloc;	// IMP=0x0010000000017a48
- (id)initWithAgent:(id)arg1;	// IMP=0x00100000000178a1

@end


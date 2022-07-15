//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NDTPerf, NEKEnvironment, NEKProgressLiar, NEKResultsFetcher, NEKResultsPipe, NEKStatTracker, NEKValidationWrapper, NSMutableArray, NSString;

@interface NEKSyncSession : NSObject
{
    _Bool _isFirst;	// 8 = 0x8
    NSMutableArray *_changeQueue;	// 16 = 0x10
    struct ct_green_tea_logger_s *_ct_logger;	// 24 = 0x18
    NEKValidationWrapper *_preSyncCensus;	// 32 = 0x20
    NEKResultsPipe *_changeSupplier;	// 40 = 0x28
    NEKResultsFetcher *_fetcher;	// 48 = 0x30
    NEKProgressLiar *_progressLiar;	// 56 = 0x38
    double _start;	// 64 = 0x40
    NSString *_syncKind;	// 72 = 0x48
    NEKEnvironment *_environment;	// 80 = 0x50
    NEKStatTracker *_statsTracker;	// 88 = 0x58
    NDTPerf *_perfomanceTracker;	// 96 = 0x60
    NEKValidationWrapper *_validationObject;	// 104 = 0x68
    long long _objectDelayUs;	// 112 = 0x70
    unsigned long long _storeUpdateTimeNs;	// 120 = 0x78
    unsigned long long _calendarUpdateTimeNs;	// 128 = 0x80
    unsigned long long _eventUpdateTimeNs;	// 136 = 0x88
    unsigned long long _reminderUpdateTimeNs;	// 144 = 0x90
}

- (void).cxx_destruct;	// IMP=0x0020000000056813
@property(nonatomic) unsigned long long reminderUpdateTimeNs; // @synthesize reminderUpdateTimeNs=_reminderUpdateTimeNs;
@property(nonatomic) unsigned long long eventUpdateTimeNs; // @synthesize eventUpdateTimeNs=_eventUpdateTimeNs;
@property(nonatomic) unsigned long long calendarUpdateTimeNs; // @synthesize calendarUpdateTimeNs=_calendarUpdateTimeNs;
@property(nonatomic) unsigned long long storeUpdateTimeNs; // @synthesize storeUpdateTimeNs=_storeUpdateTimeNs;
@property(nonatomic) long long objectDelayUs; // @synthesize objectDelayUs=_objectDelayUs;
@property(retain, nonatomic) NEKValidationWrapper *validationObject; // @synthesize validationObject=_validationObject;
@property(retain, nonatomic) NDTPerf *perfomanceTracker; // @synthesize perfomanceTracker=_perfomanceTracker;
@property(retain, nonatomic) NEKStatTracker *statsTracker; // @synthesize statsTracker=_statsTracker;
@property(retain, nonatomic) NEKEnvironment *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) NSString *syncKind; // @synthesize syncKind=_syncKind;
@property(nonatomic) double start; // @synthesize start=_start;
@property(retain, nonatomic) NEKProgressLiar *progressLiar; // @synthesize progressLiar=_progressLiar;
@property(retain, nonatomic) NEKResultsFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) NEKResultsPipe *changeSupplier; // @synthesize changeSupplier=_changeSupplier;
- (void)syncSession:(id)arg1 didEndWithError:(id)arg2;	// IMP=0x00100000000565ce
- (_Bool)syncSession:(id)arg1 resetDataStoreWithError:(id *)arg2;	// IMP=0x00100000000564e3
- (void)syncSession:(id)arg1 applyChanges:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000055804
- (unsigned int)syncSession:(id)arg1 enqueueChanges:(CDUnknownBlockType)arg2 error:(id *)arg3;	// IMP=0x00100000000551db
- (void)dealloc;	// IMP=0x00100000000551a1
- (id)init;	// IMP=0x00100000000550af

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

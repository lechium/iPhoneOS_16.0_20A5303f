//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, OITSUProgressStage;

__attribute__((visibility("hidden")))
@interface OITSUProgressContext : NSObject
{
    OITSUProgressStage *m_currentStage;	// 8 = 0x8
    NSDate *m_lastReportTime;	// 16 = 0x10
    double m_lastProgressReport;	// 24 = 0x18
    double m_lastOverallProgress;	// 32 = 0x20
}

- (id)description;	// IMP=0x000000000027ec9e
- (double)overallProgress;	// IMP=0x000000000027ec31
- (double)currentPosition;	// IMP=0x000000000027ebc4
- (void)setMessage:(id)arg1;	// IMP=0x000000000027eb50
- (void)setPercentageProgressFromTCProgressContext:(double)arg1;	// IMP=0x000000000027eaf0
- (void)setProgress:(double)arg1;	// IMP=0x000000000027ea90
- (void)advanceProgress:(double)arg1;	// IMP=0x000000000027ea30
- (void)endStage;	// IMP=0x000000000027e9c8
- (void)nextSubStageWillTakeThisManyOfMySteps:(double)arg1;	// IMP=0x000000000027e972
- (void)createStageWithSteps:(double)arg1;	// IMP=0x000000000027e8d8
- (void)createStageWithSteps:(double)arg1 takingSteps:(double)arg2;	// IMP=0x000000000027e7ef
- (void)removeProgressObserver:(id)arg1;	// IMP=0x000000000027e7a1
- (id)addProgressObserverBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000027e670
- (void)addProgressObserver:(id)arg1 selector:(SEL)arg2;	// IMP=0x000000000027e61d
- (void)reset;	// IMP=0x000000000027e5bb
- (void)reportProgress:(double)arg1 overallProgress:(double)arg2;	// IMP=0x000000000027ee77
- (id)currentStage;	// IMP=0x000000000027ee6d
- (void)dealloc;	// IMP=0x000000000027ee14
- (id)init;	// IMP=0x000000000027edc8

@end


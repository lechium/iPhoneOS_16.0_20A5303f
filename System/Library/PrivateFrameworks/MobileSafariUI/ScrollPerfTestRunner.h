//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface ScrollPerfTestRunner
{
    NSObject<OS_dispatch_queue> *_eventGeneratorQueue;	// 96 = 0x60
    long long _gestureState;	// 104 = 0x68
    double _gestureStartTime;	// 112 = 0x70
    unsigned int _scrollGestureCount;	// 120 = 0x78
    struct CGPoint _scrollOffsetAtGestureStart;	// 128 = 0x80
    long long _scrollDirection;	// 144 = 0x90
    int _pageIndex;	// 152 = 0x98
    double _startLoadTime;	// 160 = 0xa0
    double _endLoadTime;	// 168 = 0xa8
    double _startScrollingTime;	// 176 = 0xb0
    double _endScrollingTime;	// 184 = 0xb8
    double _lastFramerateTime;	// 192 = 0xc0
    unsigned int _lastFrameCounter;	// 200 = 0xc8
    NSMutableArray *_framerateHistory;	// 208 = 0xd0
    NSMutableDictionary *_outputData;	// 216 = 0xd8
}

- (void).cxx_destruct;	// IMP=0x00000000000d9610
- (id)outputDataForPage:(id)arg1;	// IMP=0x00000000000d9181
- (id)machineConfigInfo;	// IMP=0x00000000000d902a
- (id)finalStatusForPage:(id)arg1;	// IMP=0x00000000000d8f21
- (void)finishedTestPage:(id)arg1;	// IMP=0x00000000000d8df2
- (void)finishPage:(id)arg1 stats:(id)arg2 error:(id)arg3;	// IMP=0x00000000000d8d59
- (_Bool)startPageAction:(id)arg1;	// IMP=0x00000000000d8bba
- (_Bool)isPageTooShortToScroll;	// IMP=0x00000000000d8b27
- (void)determineScrollDirection;	// IMP=0x00000000000d8a19
- (void)advanceGesture;	// IMP=0x00000000000d8680
- (struct CGPoint)touchPointForMoveIndex:(unsigned long long)arg1;	// IMP=0x00000000000d8632
- (void)appendToFramerateHistory;	// IMP=0x00000000000d8486
- (_Bool)performActionForPage:(id)arg1;	// IMP=0x00000000000d83df
- (void)startingTestPage:(id)arg1;	// IMP=0x00000000000d832b
- (void)finishedTestRunner;	// IMP=0x00000000000d82b1
- (void)writeOutputData;	// IMP=0x00000000000d7e4e
- (id)pageScrollView;	// IMP=0x00000000000d7dfe
- (id)pageWebView;	// IMP=0x00000000000d7d59
- (id)initWithTestName:(id)arg1 browserController:(id)arg2;	// IMP=0x00000000000d7c88

@end


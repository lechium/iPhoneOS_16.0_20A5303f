//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsUI/MUImpressionsLogger.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface SearchResultsImpressionsLogger : MUImpressionsLogger
{
    NSObject<OS_dispatch_queue> *_impressionsLoggingQueue;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000082fc35
- (void)logImpressionElementDidExit:(id)arg1 usingEnterDate:(id)arg2 exitDate:(id)arg3;	// IMP=0x001000000082f94d
- (void)logImpressionElementDidEnter:(id)arg1 onDate:(id)arg2;	// IMP=0x001000000082f6bc
- (id)init;	// IMP=0x001000000082f652

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

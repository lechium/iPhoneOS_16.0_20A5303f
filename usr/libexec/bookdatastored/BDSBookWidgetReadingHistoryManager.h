//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BDSBookWidgetReadingHistoryData, BDSBookWidgetReadingHistoryDataFile, BDSReadingHistoryStateInfo, BDSWidgetCenterManager;
@protocol OS_dispatch_queue;

@interface BDSBookWidgetReadingHistoryManager : NSObject
{
    struct os_unfair_lock_s _accessLock;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_saveQueue;	// 16 = 0x10
    BDSBookWidgetReadingHistoryData *_lastState;	// 24 = 0x18
    BDSWidgetCenterManager *_widgetCenterManager;	// 32 = 0x20
    BDSBookWidgetReadingHistoryDataFile *_dataFile;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000031fd
@property(retain, nonatomic) BDSBookWidgetReadingHistoryData *lastState; // @synthesize lastState=_lastState;
@property(retain, nonatomic) BDSBookWidgetReadingHistoryDataFile *dataFile; // @synthesize dataFile=_dataFile;
@property(retain, nonatomic) BDSWidgetCenterManager *widgetCenterManager; // @synthesize widgetCenterManager=_widgetCenterManager;
- (void)_processViewStateChange:(id)arg1;	// IMP=0x0010000000002d87
- (void)handleReadingHistoryViewStateChange:(id)arg1;	// IMP=0x0010000000002d3e
@property(readonly, nonatomic) BDSReadingHistoryStateInfo *currentViewStateInfo;
- (id)initWithWidgetCenterManager:(id)arg1;	// IMP=0x0010000000002b48

@end


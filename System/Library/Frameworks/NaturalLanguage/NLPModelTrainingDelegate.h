//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NLPModelTrainingDelegate : NSObject
{
    CDUnknownBlockType _logHandler;	// 8 = 0x8
    _Bool _stop;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000025273
- (_Bool)modelTrainerShouldStop:(id)arg1;	// IMP=0x000000000002526a
- (void)modelTrainer:(id)arg1 logMessage:(id)arg2;	// IMP=0x00000000000251de
- (id)initWithLogHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000002516e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


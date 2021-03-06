//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UMUserSwitchBlockingTask;

@interface DMDPowerAssertion : NSObject
{
    _Bool _isParked;	// 8 = 0x8
    NSString *_operation;	// 16 = 0x10
    UMUserSwitchBlockingTask *_blockingTask;	// 24 = 0x18
}

+ (id)assertionForOperation:(id)arg1;	// IMP=0x00400000000734d1
- (void).cxx_destruct;	// IMP=0x0020000000073c7b
@property(retain, nonatomic) UMUserSwitchBlockingTask *blockingTask; // @synthesize blockingTask=_blockingTask;
@property(retain, nonatomic) NSString *operation; // @synthesize operation=_operation;
@property(nonatomic) _Bool isParked; // @synthesize isParked=_isParked;
- (void)_release;	// IMP=0x0010000000073b14
- (void)_retain;	// IMP=0x001000000007398c
- (void)unpark;	// IMP=0x0010000000073899
- (void)park;	// IMP=0x00100000000737a3
- (void)stayAliveThroughHereAtLeast;	// IMP=0x001000000007379d
- (void)dealloc;	// IMP=0x00100000000736fa
- (id)initForOperation:(id)arg1;	// IMP=0x0010000000073602

@end


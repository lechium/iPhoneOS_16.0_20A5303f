//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_source;

@interface GCDTimer : NSObject
{
    NSObject<OS_dispatch_source> *_source;	// 8 = 0x8
    NSDate *_fireDate;	// 16 = 0x10
}

+ (id)scheduledTimerWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00400000008c3a38
- (void).cxx_destruct;	// IMP=0x00200000008c3b03
@property(readonly, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
- (void)invalidate;	// IMP=0x00100000008c3ac3
- (void)dealloc;	// IMP=0x00100000008c39fa
- (id)initWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x00100000008c382b

@end


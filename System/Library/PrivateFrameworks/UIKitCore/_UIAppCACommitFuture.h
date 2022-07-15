//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIAppCACommitFuture : NSObject
{
    CDUnknownBlockType _block;	// 8 = 0x8
    _Bool _invalidated;	// 16 = 0x10
    _Bool _finished;	// 17 = 0x11
}

+ (id)scheduledPreCommitFuture:(CDUnknownBlockType)arg1;	// IMP=0x00600000000aadc0
+ (id)scheduledPostCommitFuture:(CDUnknownBlockType)arg1;	// IMP=0x00600000000aad75
- (void).cxx_destruct;	// IMP=0x00000000000ab0a4
@property(readonly, nonatomic, getter=_isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic, getter=_isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
- (void)_invoke;	// IMP=0x00000000000ab029
- (void)invalidate;	// IMP=0x00000000000aafb5
- (id)initWithPhase:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000aae0e

@end

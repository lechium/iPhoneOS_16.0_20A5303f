//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PDFTimerPrivate;

__attribute__((visibility("hidden")))
@interface PDFTimer : NSObject
{
    PDFTimerPrivate *_private;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000a79c1
- (void)_execute;	// IMP=0x00000000000a788b
- (void)cancel;	// IMP=0x00000000000a7815
- (_Bool)isUpdateQueued;	// IMP=0x00000000000a7803
- (void)update;	// IMP=0x00000000000a7715
- (void)dealloc;	// IMP=0x00000000000a76cf
- (id)initWithThrottleDelay:(double)arg1 forSelector:(SEL)arg2 forTarget:(id)arg3;	// IMP=0x00000000000a758d
- (id)initWithSelector:(SEL)arg1 forTarget:(id)arg2;	// IMP=0x00000000000a7458

@end


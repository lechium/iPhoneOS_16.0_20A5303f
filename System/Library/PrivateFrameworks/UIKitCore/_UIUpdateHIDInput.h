//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _UIUpdateHIDInput : NSObject
{
    struct _UIUpdateInputInternal _input;	// 8 = 0x8
    NSMutableArray *_events;	// 88 = 0x58
}

- (void).cxx_destruct;	// IMP=0x0000000000f3f633
- (struct __IOHIDEvent *)stopEventForModelTime:(unsigned long long)arg1;	// IMP=0x0000000000f3f62b
- (void)removeEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000f3f5d6
- (void)addEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0000000000f3f595
- (id)init;	// IMP=0x0000000000f3f4fb

@end


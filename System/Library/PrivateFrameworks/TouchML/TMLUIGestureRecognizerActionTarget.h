//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface TMLUIGestureRecognizerActionTarget : NSObject
{
    NSString *_signalName;	// 8 = 0x8
    long long _state;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000001216b
- (void)handleGesture:(id)arg1;	// IMP=0x000000000001211c
- (id)initWithSignal:(id)arg1 state:(long long)arg2;	// IMP=0x000000000001209e

@end

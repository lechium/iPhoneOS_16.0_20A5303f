//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MTLSharedEvent;

@interface MPSGraphWaitEvent : NSObject
{
    id <MTLSharedEvent> _event;	// 8 = 0x8
    unsigned long long _value;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000001c69fe
- (id)initWithEvent:(id)arg1 value:(unsigned long long)arg2;	// IMP=0x00000000001c698a

@end

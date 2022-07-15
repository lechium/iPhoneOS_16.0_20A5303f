//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface GCObservation : NSObject
{
    id _observer;	// 8 = 0x8
    unsigned long long _options;	// 16 = 0x10
    void *_context;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000004715c
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(nonatomic) __weak id observer; // @synthesize observer=_observer;
- (id)description;	// IMP=0x00000000000470a1
- (unsigned long long)hash;	// IMP=0x0000000000047070
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000046f80
- (id)initWithObserver:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;	// IMP=0x0000000000046f06

@end

//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSObservation.h"

@class NSObject;
@protocol NSObservable;

__attribute__((visibility("hidden")))
@interface _NSConcreteBlockSinkObservation : NSObservation
{
    NSObject<NSObservable> *_LHSobservable;	// 8 = 0x8
    CDUnknownBlockType _block;	// 16 = 0x10
    int _tag;	// 24 = 0x18
}

- (void)dealloc;	// IMP=0x00000000004b5a44
- (void)_receiveBox:(id)arg1;	// IMP=0x00000000004b59dd
- (void)finishObserving;	// IMP=0x00000000004b59cb
- (void)remove;	// IMP=0x00000000004b594a
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;	// IMP=0x00000000004b589c
- (id)debugDescription;	// IMP=0x00000000004b580f
- (id *)_observerStorage;	// IMP=0x00000000004b5807
- (void *)_observerStorageOfSize:(unsigned long long)arg1;	// IMP=0x00000000004b57ff
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000004b57a5

@end


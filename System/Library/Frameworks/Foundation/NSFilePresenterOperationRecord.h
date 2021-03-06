//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface NSFilePresenterOperationRecord : NSObject
{
    NSString *operationDescription;	// 8 = 0x8
    long long state;	// 16 = 0x10
    id reactor;	// 24 = 0x18
    NSString *reactorID;	// 32 = 0x20
}

+ (id)operationRecordWithDescription:(id)arg1 reactor:(id)arg2;	// IMP=0x0060000000646d01
- (void).cxx_destruct;	// IMP=0x00000000006470a0
@property(readonly) __weak id reactor; // @synthesize reactor;
@property(readonly) long long state; // @synthesize state;
@property(readonly) NSString *operationDescription; // @synthesize operationDescription;
- (id)description;	// IMP=0x0000000000646f59
- (id)_reactorQueue;	// IMP=0x0000000000646ea9
- (void)didEnd;	// IMP=0x0000000000646e0c
- (void)willEnd;	// IMP=0x0000000000646dfe
- (void)didBegin;	// IMP=0x0000000000646df0
- (void)dealloc;	// IMP=0x0000000000646d83

@end


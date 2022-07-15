//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface NPSOSLogStateProvider : NSObject
{
    NSString *_lastDumpString;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x002000000002a932
- (void)registerOSLogStateHandlerName:(id)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x001000000002a72f
- (id)initWithName:(id)arg1 maxStringLength:(long long)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x001000000002a412

@end

//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _WKFrameHandle;

__attribute__((visibility("hidden")))
@interface SFPrintQueueItem : NSObject
{
    _Bool _completed;	// 8 = 0x8
    CDUnknownBlockType _completionHandler;	// 16 = 0x10
    _Bool _initiatedByWebContent;	// 24 = 0x18
    _WKFrameHandle *_frameHandle;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005a437
@property(readonly, nonatomic) _Bool initiatedByWebContent; // @synthesize initiatedByWebContent=_initiatedByWebContent;
@property(readonly, nonatomic) _WKFrameHandle *frameHandle; // @synthesize frameHandle=_frameHandle;
- (void)completeWithResult:(long long)arg1;	// IMP=0x000000000005a3fb
- (void)dealloc;	// IMP=0x000000000005a3cc
- (id)initWithFrameHandle:(id)arg1 initiatedByWebContent:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000005a317

@end

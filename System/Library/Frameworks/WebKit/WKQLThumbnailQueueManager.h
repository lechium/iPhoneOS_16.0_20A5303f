//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

__attribute__((visibility("hidden")))
@interface WKQLThumbnailQueueManager : NSObject
{
    NSOperationQueue *_queue;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x00600000000a6165
@property(readonly, retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (void)dealloc;	// IMP=0x00000000000a612a
- (id)init;	// IMP=0x00000000000a60de

@end


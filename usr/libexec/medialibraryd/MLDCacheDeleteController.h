//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol OS_dispatch_queue;

@interface MLDCacheDeleteController : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;	// 8 = 0x8
    NSArray *_libraries;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000003e5a
- (void)_registerCacheDeleteHandler;	// IMP=0x0010000000003e54
- (id)initWithLibraries:(id)arg1;	// IMP=0x0010000000003d95

@end

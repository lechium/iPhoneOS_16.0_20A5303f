//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;

__attribute__((visibility("hidden")))
@interface _NBRegularExpressionCache : NSObject
{
    NSCache *_cache;	// 8 = 0x8
}

+ (id)sharedInstance;	// IMP=0x006000000000c98c
- (void).cxx_destruct;	// IMP=0x000000000000cbf3
@property(retain, nonatomic) NSCache *cache; // @synthesize cache=_cache;
- (id)regularExpressionForPattern:(id)arg1 error:(id *)arg2;	// IMP=0x000000000000ca37
- (id)init;	// IMP=0x000000000000c9e1

@end


//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSBundle, NSPredicate, NSString;

__attribute__((visibility("hidden")))
@interface _GCDeviceDBBundleDevice : NSObject
{
    NSBundle *_bundle;	// 8 = 0x8
    NSString *_identifier;	// 16 = 0x10
    NSPredicate *_ioMatchingPredicate;	// 24 = 0x18
    NSArray *_personalityPaths;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000002d670
@property(readonly, copy) NSPredicate *ioMatchingPredicate; // @synthesize ioMatchingPredicate=_ioMatchingPredicate;
@property(readonly, copy) NSString *identifier; // @synthesize identifier=_identifier;
- (id)personalities;	// IMP=0x000000000002d5d8
- (id)init;	// IMP=0x000000000002d5ad
- (id)initWithBundle:(id)arg1 dictionary:(id)arg2 error:(out id *)arg3;	// IMP=0x000000000002c4bf

@end

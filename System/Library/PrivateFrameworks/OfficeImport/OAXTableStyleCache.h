//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, OCPPackagePart;

__attribute__((visibility("hidden")))
@interface OAXTableStyleCache : NSObject
{
    OCPPackagePart *mStylesPart;	// 8 = 0x8
    NSString *mDefaultStyleId;	// 16 = 0x10
    NSMutableDictionary *mCache;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000002fe74e
- (struct _xmlNode *)defaultStyleNode;	// IMP=0x00000000001cc865
- (struct _xmlNode *)styleNodeForId:(id)arg1;	// IMP=0x00000000001cc87b
- (void)setStyleNode:(struct _xmlNode *)arg1 forId:(id)arg2;	// IMP=0x00000000001da7a8
- (void)setDefaultStyleId:(id)arg1;	// IMP=0x00000000001c8345
- (id)defaultStyleId;	// IMP=0x00000000002fe740
- (void)setStylesPart:(id)arg1;	// IMP=0x00000000002fe72f
- (id)init;	// IMP=0x00000000001c7e40

@end


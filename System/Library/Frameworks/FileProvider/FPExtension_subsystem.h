//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface FPExtension_subsystem : NSObject
{
    _Bool _initialized;	// 8 = 0x8
    NSDictionary *_infoDictionary;	// 16 = 0x10
}

+ (id)initForPlugInKit;	// IMP=0x001000000010af05
+ (id)sharedInstance;	// IMP=0x001000000010ae80
- (void).cxx_destruct;	// IMP=0x000000000010af30
@property(copy, nonatomic) NSDictionary *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
- (void)endUsing:(id)arg1;	// IMP=0x000000000010ae7a
- (void)beginUsing:(id)arg1 withBundle:(id)arg2;	// IMP=0x000000000010ac52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

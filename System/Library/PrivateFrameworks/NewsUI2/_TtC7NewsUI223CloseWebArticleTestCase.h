//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

__attribute__((visibility("hidden")))
@interface _TtC7NewsUI223CloseWebArticleTestCase : NSObject
{
    MISSING_TYPE *testName;	// 8 = 0x8
    MISSING_TYPE *timeoutInSeconds;	// 24 = 0x18
    MISSING_TYPE *aggregate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000005feb0
- (id)init;	// IMP=0x000000000005fdb0
- (void)runTestWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000005fc90
@property(nonatomic, readonly) unsigned long long aggregate; // @synthesize aggregate;
@property(nonatomic, readonly) double timeoutInSeconds; // @synthesize timeoutInSeconds;
@property(nonatomic, readonly) NSString *testName;

@end

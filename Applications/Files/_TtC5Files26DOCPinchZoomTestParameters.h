//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString;

@interface _TtC5Files26DOCPinchZoomTestParameters : NSObject
{
    MISSING_TYPE *testName;	// 8 = 0x8
    MISSING_TYPE *bounds;	// 24 = 0x18
    MISSING_TYPE *completionHandler;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x0040000000363e80
- (id)init;	// IMP=0x0010000000363e20
- (CDUnknownBlockType)composerBlock;	// IMP=0x0010000000363c60
- (void)prepareWithComposer:(id)arg1;	// IMP=0x0010000000363c50
@property(nonatomic, copy) CDUnknownBlockType completionHandler;
@property(nonatomic, copy) NSString *testName;

@end

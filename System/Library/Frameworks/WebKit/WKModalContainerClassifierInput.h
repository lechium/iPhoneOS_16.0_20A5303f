//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;

__attribute__((visibility("hidden")))
@interface WKModalContainerClassifierInput : NSObject
{
    struct RetainPtr<NSString> _canonicalInput;	// 8 = 0x8
}

- (id).cxx_construct;	// IMP=0x000000000034d224
- (void).cxx_destruct;	// IMP=0x000000000034d204
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000034d1b1
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithTokenizer:(id)arg1 rawInput:(id)arg2;	// IMP=0x000000000034cedf

@end


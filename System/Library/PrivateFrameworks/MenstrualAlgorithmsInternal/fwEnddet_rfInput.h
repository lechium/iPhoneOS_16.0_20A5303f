//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLMultiArray, NSSet;

__attribute__((visibility("hidden")))
@interface fwEnddet_rfInput : NSObject
{
    MLMultiArray *_input;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000006d4d0
@property(retain, nonatomic) MLMultiArray *input; // @synthesize input=_input;
- (id)featureValueForName:(id)arg1;	// IMP=0x000000000006d410
@property(readonly, nonatomic) NSSet *featureNames;
- (id)initWithInput:(id)arg1;	// IMP=0x000000000006d380

@end


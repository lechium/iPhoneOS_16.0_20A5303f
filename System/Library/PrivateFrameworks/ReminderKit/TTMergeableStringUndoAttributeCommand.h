//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TTMergeableStringUndoAttributeCommand : NSObject
{
    void *_attributeRanges;	// 8 = 0x8
}

@property(readonly, nonatomic) void *attributeRanges; // @synthesize attributeRanges=_attributeRanges;
@property(readonly, copy) NSString *description;
- (_Bool)addToGroup:(id)arg1;	// IMP=0x00000000001036c3
- (void)applyToString:(id)arg1;	// IMP=0x0000000000103554
- (_Bool)hasTopoIDsThatCanChange;	// IMP=0x00000000001034dc
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;	// IMP=0x00000000001031f6
- (void)dealloc;	// IMP=0x00000000001031a8
- (id)init;	// IMP=0x0000000000103132

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


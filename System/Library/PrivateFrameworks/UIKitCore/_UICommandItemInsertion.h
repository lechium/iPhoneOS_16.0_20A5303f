//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, _UICommandIdentifier;

__attribute__((visibility("hidden")))
@interface _UICommandItemInsertion
{
    NSArray *_fallbacks;	// 16 = 0x10
    NSArray *_insertsBefore;	// 24 = 0x18
    NSArray *_insertsAfter;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000118f8a9
+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;	// IMP=0x006000000118f7f8
- (void).cxx_destruct;	// IMP=0x000000000118fcf9
@property(readonly, nonatomic) NSArray *insertsAfter; // @synthesize insertsAfter=_insertsAfter;
@property(readonly, nonatomic) NSArray *insertsBefore; // @synthesize insertsBefore=_insertsBefore;
@property(readonly, nonatomic) NSArray *fallbacks; // @synthesize fallbacks=_fallbacks;
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000118fc0c
- (_Bool)acceptBoolItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x000000000118fbf3
- (void)acceptItemInsertionVisit:(CDUnknownBlockType)arg1 itemDeletionVisit:(CDUnknownBlockType)arg2 menuInsertionVisit:(CDUnknownBlockType)arg3 menuDeletionVisit:(CDUnknownBlockType)arg4;	// IMP=0x000000000118fbdc
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000118f9b0
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;	// IMP=0x000000000118f8b1

// Remaining properties
@property(readonly, nonatomic) _UICommandIdentifier *anchor; // @dynamic anchor;

@end


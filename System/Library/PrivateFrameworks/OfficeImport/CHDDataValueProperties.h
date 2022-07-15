//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDDataLabel, CHDMarker, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDDataValueProperties : NSObject
{
    CHDDataLabel *mDataLabel;	// 8 = 0x8
    CHDMarker *mMarker;	// 16 = 0x10
    unsigned long long mDataValueIndex;	// 24 = 0x18
    OADGraphicProperties *mGraphicProperties;	// 32 = 0x20
}

+ (id)dataValueProperties;	// IMP=0x00100000001f2126
- (void).cxx_destruct;	// IMP=0x00000000003928b2
@property(readonly, copy) NSString *description;
- (void)setMarker:(id)arg1;	// IMP=0x00000000001ee0f7
- (id)marker;	// IMP=0x0000000000392866
- (void)setGraphicProperties:(id)arg1;	// IMP=0x00000000001ee0ac
- (id)graphicProperties;	// IMP=0x00000000001ee14c
- (void)setDataValueIndex:(unsigned long long)arg1;	// IMP=0x00000000001ee035
- (unsigned long long)dataValueIndex;	// IMP=0x00000000001ef2d4
- (void)setDataLabel:(id)arg1;	// IMP=0x00000000001f2140
- (id)dataLabel;	// IMP=0x0000000000392858
- (long long)key;	// IMP=0x00000000001ee142
- (id)shallowCopyWithIndex:(unsigned long long)arg1;	// IMP=0x00000000001f206a
- (id)init;	// IMP=0x00000000001edff3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

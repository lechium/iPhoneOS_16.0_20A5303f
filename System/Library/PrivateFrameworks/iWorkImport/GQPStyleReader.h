//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GQDSStyle, GQDSStylesheet, NSString;

@interface GQPStyleReader : NSObject
{
    int mStyleType;	// 8 = 0x8
    struct __CFArray *mEntries;	// 16 = 0x10
    GQDSStylesheet *mStylesheet;	// 24 = 0x18
    int mCurrentProperty;	// 32 = 0x20
    _Bool mStyleIsIdentified;	// 36 = 0x24
    _Bool mStyleIdentiferEqualsParentIdentifier;	// 37 = 0x25
    char *mIdentifier;	// 40 = 0x28
    char *mUid;	// 48 = 0x30
    char *mParentIdentifier;	// 56 = 0x38
    GQDSStyle *mStyle;	// 64 = 0x40
}

+ (void)initialize;	// IMP=0x001000000004311c
- (void)handleObject:(id)arg1;	// IMP=0x0000000000043474
- (int)doneReading:(id)arg1;	// IMP=0x00000000000433e9
- (int)beginReadingFromReader:(struct _xmlTextReader *)arg1 processor:(id)arg2;	// IMP=0x0000000000043218
- (void)dealloc;	// IMP=0x000000000004318f
- (id)initWithStyleType:(int)arg1;	// IMP=0x000000000004312d
- (void)handleDoubleValue:(double)arg1;	// IMP=0x000000000004366f
- (void)handleFloatValue:(float)arg1;	// IMP=0x0000000000043643
- (void)handleIntValue:(int)arg1;	// IMP=0x0000000000043615
- (void)handleBoolValue:(_Bool)arg1;	// IMP=0x00000000000435e7
- (void)doneProperty;	// IMP=0x0000000000043591
- (_Bool)beginProperty:(const char *)arg1;	// IMP=0x0000000000043561
- (id)createStyle;	// IMP=0x00000000000434c1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

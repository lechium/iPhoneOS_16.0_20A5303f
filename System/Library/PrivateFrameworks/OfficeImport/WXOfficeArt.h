//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXOfficeArt : NSObject
{
}

+ (void)readFrom:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;	// IMP=0x00800000001a835f
+ (id)textWrappingModeTypeEnumMap;	// IMP=0x00800000004123da
+ (id)relativeVerticalPositionEnumMap;	// IMP=0x0080000000412326
+ (id)relativeHorizontalPositionEnumMap;	// IMP=0x0080000000412272
+ (void)writeWrapPolygonChildren:(id)arg1 to:(id)arg2;	// IMP=0x0080000000412b18
+ (_Bool)writeWrapTightlyWith:(id)arg1 toWriter:(id)arg2;	// IMP=0x00800000004128e5
+ (void)readVml:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;	// IMP=0x00800000001b3509
+ (void)writeWrapBottomDistance:(id)arg1 to:(id)arg2;	// IMP=0x0080000000412803
+ (void)writeWrapTopDistance:(id)arg1 to:(id)arg2;	// IMP=0x0080000000412721
+ (void)writeWrapRightDistance:(id)arg1 to:(id)arg2;	// IMP=0x008000000041263f
+ (void)writeWrapLeftDistance:(id)arg1 to:(id)arg2;	// IMP=0x008000000041255d
+ (void)writeWrapText:(id)arg1 to:(id)arg2;	// IMP=0x008000000041248e
+ (void)readWrapDistance:(struct _xmlNode *)arg1 parentElement:(struct _xmlNode *)arg2 state:(id)arg3 to:(id)arg4;	// IMP=0x00800000002168f9
+ (void)readWrap:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;	// IMP=0x00800000001ad8a4
+ (void)readPosition:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3 isHorizontal:(_Bool)arg4;	// IMP=0x00800000001ad427
+ (void)readClientData:(struct _xmlNode *)arg1 state:(id)arg2 to:(id)arg3;	// IMP=0x00800000001ac81e
+ (void)readOAX:(struct _xmlNode *)arg1 parentRElement:(struct _xmlNode *)arg2 parentParagraph:(id)arg3 state:(id)arg4 to:(id)arg5;	// IMP=0x00800000001a8bbe

@end


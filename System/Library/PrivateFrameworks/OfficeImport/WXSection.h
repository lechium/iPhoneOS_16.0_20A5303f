//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WXSection : NSObject
{
}

+ (float)scaleFromPrinterSettings:(id)arg1;	// IMP=0x0040000000224362
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;	// IMP=0x00400000001ae23a
+ (id)chapterNumberSeparatorEnumMap;	// IMP=0x004000000041507e
+ (id)verticalJustificationEnumMap;	// IMP=0x0040000000414fca
+ (id)lineNumberRestartEnumMap;	// IMP=0x0040000000414f16
+ (id)pageBorderOffsetEnumMap;	// IMP=0x0040000000414e54
+ (id)pageBorderDisplayEnumMap;	// IMP=0x0040000000414da0
+ (id)pageBorderDepthEnumMap;	// IMP=0x0040000000414cec
+ (id)pageOrientationEnumMap;	// IMP=0x0040000000414c38
+ (id)sectionBreakEnumMap;	// IMP=0x0040000000414b84
+ (void)mapProperties:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;	// IMP=0x00400000001aecde
+ (void)mapPrinterSettings:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;	// IMP=0x0040000000415132
+ (void)mapFooter:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;	// IMP=0x00400000001b2f07
+ (void)mapHeader:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;	// IMP=0x00400000001ae67f

@end

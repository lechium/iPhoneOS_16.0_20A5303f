//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXLegend : NSObject
{
}

+ (id)chdLegendFromXmlLegendElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000002143c1
+ (int)chdLegendPositionFromXmlLegendPositionElement:(struct _xmlNode *)arg1;	// IMP=0x00800000002149dd
+ (id)chdLegendEntryFromXmlLegendEntryElement:(struct _xmlNode *)arg1 defaultFont:(id)arg2 state:(id)arg3;	// IMP=0x008000000021ff7c
+ (void)setDefaultLegendBounds:(id)arg1 legendPosition:(int)arg2;	// IMP=0x0080000000214b04

@end

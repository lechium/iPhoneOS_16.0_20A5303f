//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHXAxis : NSObject
{
}

+ (id)chdAxisFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000002116e7
+ (int)chdCrossesFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x008000000039767d
+ (int)chdTickLabelPositionFromXmlTickLabelPositionElement:(struct _xmlNode *)arg1;	// IMP=0x0080000000212f73
+ (int)chdTickMarkFromXmlTickMarkElement:(struct _xmlNode *)arg1;	// IMP=0x0080000000228992
+ (int)chdAxisPositionFromXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x0080000000397545
+ (void)readScalingFromXmlScalingElement:(struct _xmlNode *)arg1 axis:(id)arg2 state:(id)arg3;	// IMP=0x0080000000212cbb
+ (Class)chxAxisClassWithChdAxis:(id)arg1;	// IMP=0x008000000039743d
+ (Class)chxAxisClassWithXmlAxisElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000003971d3

@end

//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBAlignmentInfo : NSObject
{
}

+ (void)writeAlignmentInfo:(id)arg1 toXlGraphicsInfo:(void *)arg2;	// IMP=0x008000000039c453
+ (struct XlDXfAlign *)xlDXfAlignFromEDAlignmentInfo:(id)arg1;	// IMP=0x008000000039c303
+ (void)writeAlignmentInfo:(id)arg1 toXlXf:(struct XlXf *)arg2;	// IMP=0x008000000039c1f5
+ (id)edAlignmentInfoFromXlGraphicsInfo:(void *)arg1;	// IMP=0x0080000000169d08
+ (id)edAlignmentInfoFromXlDXfAlign:(struct XlDXfAlign *)arg1;	// IMP=0x008000000039c10d
+ (id)edAlignmentInfoFromXlXf:(struct XlXf *)arg1;	// IMP=0x008000000011a4b8
+ (int)convertEDVerticalAlignmentEnumToXl:(int)arg1;	// IMP=0x008000000039c4fd
+ (int)convertEDHorizontalAlignmentEnumToXl:(int)arg1;	// IMP=0x008000000039c4ec
+ (int)convertXlVertAlignEnumToED:(int)arg1;	// IMP=0x008000000011a638
+ (int)convertXlHorizAlignEnumToED:(int)arg1;	// IMP=0x008000000011a614

@end

//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBGraphic : NSObject
{
}

+ (id)readMainChartWithState:(id)arg1;	// IMP=0x008000000016b988
+ (void)readGraphicsInChart:(id)arg1 state:(id)arg2;	// IMP=0x008000000016e61b
+ (void)readGraphicsWithState:(id)arg1;	// IMP=0x0080000000129d72
+ (int)objectTypeForShape:(id)arg1;	// IMP=0x008000000039d6b0
+ (void)readNotesWithDictionary:(id)arg1 state:(id)arg2;	// IMP=0x0080000000129f8a
+ (void)readImage:(id)arg1 xlGraphicsInfo:(void *)arg2 state:(id)arg3;	// IMP=0x0080000000245ebd
+ (void)readChart:(id)arg1 chartIndex:(short)arg2 state:(id)arg3;	// IMP=0x008000000016bd5b
+ (void)readOle:(id)arg1 xlGraphicsInfo:(void *)arg2 state:(id)arg3;	// IMP=0x008000000018e4c9
+ (id)readGraphicWithDictionary:(id)arg1 state:(id)arg2;	// IMP=0x008000000013d0dc

@end


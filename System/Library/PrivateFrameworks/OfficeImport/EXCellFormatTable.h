//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXCellFormatTable : NSObject
{
}

+ (void)setDefaultWithState:(id)arg1;	// IMP=0x00800000003b7157
+ (void)readFromCellStylesElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001be369
+ (void)readFromCellStyleXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001be34e
+ (void)readFromCellXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001bd627
+ (void)readCellFormatsFrom:(struct _xmlNode *)arg1 isStyle:(_Bool)arg2 state:(id)arg3;	// IMP=0x00800000001bd75b

@end

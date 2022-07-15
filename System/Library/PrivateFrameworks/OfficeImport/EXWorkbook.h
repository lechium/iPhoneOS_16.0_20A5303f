//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXWorkbook : NSObject
{
}

+ (id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 resourcesOnly:(_Bool)arg4 fileName:(id)arg5 temporaryDirectory:(id)arg6 delegate:(id)arg7 forThumbnail:(_Bool)arg8;	// IMP=0x00800000003beb90
+ (id)edWorkbookFromState:(id)arg1 package:(id)arg2 reader:(id)arg3 fileName:(id)arg4 temporaryDirectory:(id)arg5 delegate:(id)arg6 forThumbnail:(_Bool)arg7;	// IMP=0x00800000003beb4e
+ (void)setupDefaultTextStyleWithState:(id)arg1;	// IMP=0x00800000001bea74
+ (void)setDefaultParagraphProperties:(id)arg1;	// IMP=0x00800000001beb8e
+ (void)setupProcessors:(id)arg1;	// IMP=0x00800000001ba538
+ (void)readStringsFrom:(id)arg1 state:(id)arg2;	// IMP=0x00800000001bee20
+ (void)readStylesFrom:(id)arg1 state:(id)arg2;	// IMP=0x00800000001ba5b9
+ (void)readSheetsFrom:(id)arg1 relationNS:(struct _xmlNs *)arg2 state:(id)arg3 delegate:(id)arg4 forThumbnail:(_Bool)arg5;	// IMP=0x00800000003bfa66

@end

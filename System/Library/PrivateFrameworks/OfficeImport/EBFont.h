//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EBFont : NSObject
{
}

+ (id)edFontFromXlDXfFont:(struct XlDXfFont *)arg1 edResources:(id)arg2;	// IMP=0x008000000014f120
+ (id)edFontFromXlFont:(struct XlFont *)arg1 edResources:(id)arg2;	// IMP=0x0080000000117472
+ (int)convertEDUnderlineEnumToXl:(int)arg1;	// IMP=0x008000000039cec8
+ (int)convertEDScriptEnumToXl:(int)arg1;	// IMP=0x008000000039ceb2
+ (int)convertXlUnderlineEnumToED:(int)arg1;	// IMP=0x0080000000117b4f
+ (int)convertXlScriptEnumToED:(int)arg1;	// IMP=0x0080000000117b2a

@end


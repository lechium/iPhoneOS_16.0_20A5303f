//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXFont : NSObject
{
}

+ (id)edFontFromXmlFontElement:(struct _xmlNode *)arg1 inConditionalFormat:(_Bool)arg2 returnDefaultIfEmpty:(_Bool)arg3 state:(id)arg4;	// IMP=0x00800000003b96ce
+ (id)vertAlignEnumMap;	// IMP=0x00800000003b961a
+ (id)underlineEnumMap;	// IMP=0x00800000003b9566
+ (int)edUnderlineFromXmlUnderlineElement:(struct _xmlNode *)arg1;	// IMP=0x00800000001bbdad
+ (int)edScriptFromXmlVertAlignElement:(struct _xmlNode *)arg1;	// IMP=0x00800000001bbe9e

@end

//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXColorScheme : NSObject
{
}

+ (void)writeColorScheme:(id)arg1 to:(id)arg2 state:(id)arg3;	// IMP=0x00800000002f23f5
+ (id)colorForScheme:(id)arg1 colorMap:(id)arg2 value:(id)arg3;	// IMP=0x00800000002f2244
+ (id)colorForScheme:(id)arg1 value:(id)arg2;	// IMP=0x00800000002f221d
+ (id)schemeColorEnumMap;	// IMP=0x008000000019438e
+ (void)readFromXmlNode:(struct _xmlNode *)arg1 toColorScheme:(id)arg2;	// IMP=0x0080000000194192

@end

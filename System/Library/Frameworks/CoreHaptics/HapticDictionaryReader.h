//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface HapticDictionaryReader : NSObject
{
    unsigned long long _urlIndex;	// 8 = 0x8
}

- (id)parseParamCurveControlPoints:(id)arg1;	// IMP=0x000000000001d06d
- (id)parseParamCurve:(id)arg1;	// IMP=0x000000000001cb6e
- (id)parseParam:(id)arg1;	// IMP=0x000000000001c682
- (id)parseEventParams:(id)arg1;	// IMP=0x000000000001c1fc
- (id)parseEvent:(id)arg1 withBaseURL:(id)arg2;	// IMP=0x000000000001b6e9
- (_Bool)parseEventsAndParameters:(id)arg1 withBaseURL:(id)arg2 reply:(CDUnknownBlockType)arg3;	// IMP=0x000000000001ad0b
- (id)scanForEmbeddedResources:(id)arg1;	// IMP=0x000000000001a6a3
- (id)parseConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019ef9
- (id)readAndVerifyVersion:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000019b4e

@end

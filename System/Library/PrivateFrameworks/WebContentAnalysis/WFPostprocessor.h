//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFPostprocessor : NSObject
{
}

+ (id)adultWebSiteTagging:(id)arg1;	// IMP=0x00800000000058c1
+ (id)normalizeStrippedHTML:(id)arg1;	// IMP=0x008000000000584d
+ (id)lightweightStripHTMLTags:(id)arg1;	// IMP=0x008000000000577c
+ (id)lightweightStripHTMLTagsForLine:(id)arg1;	// IMP=0x008000000000564e
+ (id)postprocessPlainTextWebPage:(id)arg1;	// IMP=0x00800000000055dd
+ (struct _NSRange)rangeOfFirstHTMLTag:(id)arg1 searchRange:(struct _NSRange)arg2;	// IMP=0x0080000000005530

@end


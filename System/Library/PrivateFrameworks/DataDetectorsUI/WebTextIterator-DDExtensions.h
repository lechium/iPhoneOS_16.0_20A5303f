//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebKit/WebTextIterator.h>

@interface WebTextIterator (DDExtensions)
+ (id)dd_iteratorForDocument:(id)arg1;	// IMP=0x00500000000273e2
- (id)dd_doUrlificationForQuery:(struct __DDScanQuery *)arg1 forResults:(id)arg2 referenceDate:(id)arg3 document:(id)arg4 DOMWasModified:(_Bool *)arg5 relevantResults:(id *)arg6 URLificationBlock:(CDUnknownBlockType)arg7;	// IMP=0x0010000000025f48
- (id)dd_collectDDRangesForQuery:(struct __DDScanQuery *)arg1 forResults:(id)arg2;	// IMP=0x00100000000259aa
- (struct __DDScanQuery *)dd_newQueryStopRange:(id *)arg1;	// IMP=0x0010000000025725
- (_Bool)dd_checkCurrentRangeAgainstString:(struct __CFString *)arg1;	// IMP=0x00100000000274c8
@end


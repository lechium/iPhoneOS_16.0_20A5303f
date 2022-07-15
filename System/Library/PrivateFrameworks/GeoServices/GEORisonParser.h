//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableCharacterSet, NSNumberFormatter;

__attribute__((visibility("hidden")))
@interface GEORisonParser : NSObject
{
    NSNumberFormatter *_formatter;	// 8 = 0x8
    NSMutableCharacterSet *_risonTerminators;	// 16 = 0x10
    NSMutableCharacterSet *_risonEscapes;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000012cc990
- (id)stringFromNull:(id)arg1;	// IMP=0x00000000012cc983
- (id)stringFromNumber:(id)arg1;	// IMP=0x00000000012cc8ef
- (id)stringFromString:(id)arg1;	// IMP=0x00000000012cc6dd
- (id)stringFromArray:(id)arg1;	// IMP=0x00000000012cc55a
- (id)stringFromDictionary:(id)arg1;	// IMP=0x00000000012cc335
- (id)stringFromRisonObject:(id)arg1;	// IMP=0x00000000012cc231
- (id)numberWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000012cc14d
- (id)boolWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000012cc0fd
- (id)nullWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000012cc0df
- (id)stringLiteralWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000012cbee5
- (id)arrayWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000012cbe1e
- (id)keyWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000012cbd97
- (id)dictionaryWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000012cbc7f
- (id)objectWithReaderInfo:(CDStruct_8bf61218 *)arg1;	// IMP=0x00000000012cbbf4
- (id)objectFromRisonString:(id)arg1;	// IMP=0x00000000012cbb50
- (id)init;	// IMP=0x00000000012cba3b

@end

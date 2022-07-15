//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

__attribute__((visibility("hidden")))
@interface NSPathStore2 : NSString
{
    unsigned int _lengthAndRefCount;	// 8 = 0x8
    unsigned short _characters[0];	// 12 = 0xc
}

+ (id)pathWithComponents:(id)arg1;	// IMP=0x0060000000536984
+ (id)pathStoreWithCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x0060000000536541
- (id)stringByResolvingSymlinksInPath;	// IMP=0x00000000005381f9
- (id)_stringByResolvingSymlinksInPathUsingCache:(_Bool)arg1;	// IMP=0x00000000005380b9
- (id)stringByStandardizingPath;	// IMP=0x00000000005380a5
- (id)_stringByStandardizingPathUsingCache:(_Bool)arg1;	// IMP=0x0000000000537f73
- (id)stringByExpandingTildeInPath;	// IMP=0x0000000000537d5d
- (id)stringByAbbreviatingWithTildeInPath;	// IMP=0x0000000000537a9c
- (id)stringByAppendingPathExtension:(id)arg1;	// IMP=0x0000000000537626
- (id)stringByDeletingPathExtension;	// IMP=0x00000000005375d7
- (id)pathExtension;	// IMP=0x00000000005374ef
- (id)stringByAppendingPathComponent:(id)arg1;	// IMP=0x00000000005371ac
- (id)stringByDeletingLastPathComponent;	// IMP=0x000000000053713e
- (id)lastPathComponent;	// IMP=0x00000000005370c6
- (_Bool)isAbsolutePath;	// IMP=0x0000000000537091
- (id)pathComponents;	// IMP=0x000000000053706c
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000005367c7
- (unsigned long long)hash;	// IMP=0x00000000005367a2
- (id)copy;	// IMP=0x0000000000536798
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000053678e
- (const unsigned short *)_fastCharacterContents;	// IMP=0x000000000053677e
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000005366ca
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000053662f
- (unsigned long long)length;	// IMP=0x000000000053661b

@end

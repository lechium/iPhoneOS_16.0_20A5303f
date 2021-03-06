//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSMutableData.h>

@interface NSMutableData (NSMutableData)
+ (id)_newZeroingDataWithBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x008000000047c0fd
+ (id)dataWithLength:(unsigned long long)arg1;	// IMP=0x008000000047c061
+ (id)dataWithCapacity:(unsigned long long)arg1;	// IMP=0x008000000047c032
+ (id)allocWithZone:(struct _NSZone *)arg1;	// IMP=0x008000000047bfeb
- (id)initWithLength:(unsigned long long)arg1;	// IMP=0x001000000047c0be
- (id)initWithCapacity:(unsigned long long)arg1;	// IMP=0x001000000047c090
- (void)setData:(id)arg1;	// IMP=0x001000000047bf06
- (void)resetBytesInRange:(struct _NSRange)arg1;	// IMP=0x001000000047bd85
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2;	// IMP=0x001000000047baa5
- (void)increaseLengthBy:(unsigned long long)arg1;	// IMP=0x001000000047b965
- (void)appendData:(id)arg1;	// IMP=0x001000000047b6c9
- (void)appendBytes:(const void *)arg1 length:(unsigned long long)arg2;	// IMP=0x001000000047b44f
- (void)replaceBytesInRange:(struct _NSRange)arg1 withBytes:(const void *)arg2 length:(unsigned long long)arg3;	// IMP=0x001000000047b064
- (_Bool)_isCompact;	// IMP=0x001000000047b05c
- (Class)classForCoder;	// IMP=0x001000000047b04b
- (void)setLength:(unsigned long long)arg1;	// IMP=0x001000000047affc
- (void *)mutableBytes;	// IMP=0x001000000047afaa
- (_Bool)decompressUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000047f67a
- (_Bool)compressUsingAlgorithm:(long long)arg1 error:(id *)arg2;	// IMP=0x001000000047f64c
- (_Bool)_decompressUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x001000000047f4ed
- (_Bool)_compressUsingCompressionAlgorithm:(int)arg1 error:(id *)arg2;	// IMP=0x001000000047f391
@end


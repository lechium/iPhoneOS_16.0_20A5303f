//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface OISFUMemoryDataRepresentation
{
    NSData *mData;	// 32 = 0x20
}

- (unsigned long long)readIntoData:(id)arg1;	// IMP=0x00000000002966fa
- (_Bool)hasSameLocationAs:(id)arg1;	// IMP=0x0000000000296698
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;	// IMP=0x0000000000296686
- (id)bufferedInputStream;	// IMP=0x0000000000296648
- (id)inputStream;	// IMP=0x0000000000296636
- (long long)dataLength;	// IMP=0x0000000000296619
- (_Bool)isReadable;	// IMP=0x0000000000296611
- (id)data;	// IMP=0x0000000000296600
- (void)dealloc;	// IMP=0x00000000002965be
- (id)initWithDataRepresentation:(id)arg1;	// IMP=0x00000000002963f2
- (id)initWithDataNoCopy:(id)arg1;	// IMP=0x000000000029639b
- (id)initWithData:(id)arg1;	// IMP=0x000000000029633d

@end


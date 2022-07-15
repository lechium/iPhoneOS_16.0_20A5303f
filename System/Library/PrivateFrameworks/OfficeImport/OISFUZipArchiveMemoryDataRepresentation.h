//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSString;

__attribute__((visibility("hidden")))
@interface OISFUZipArchiveMemoryDataRepresentation
{
    NSData *mData;	// 32 = 0x20
}

- (id)bufferedInputStreamWithOffset:(long long)arg1 length:(long long)arg2;	// IMP=0x000000000029a156
- (id)inputStreamWithOffset:(long long)arg1 length:(long long)arg2;	// IMP=0x000000000029a144
- (_Bool)hasSameLocationAs:(id)arg1;	// IMP=0x000000000029a0e2
- (id)bufferedInputStreamWithBufferSize:(unsigned long long)arg1;	// IMP=0x000000000029a0af
- (id)bufferedInputStream;	// IMP=0x000000000029a07c
- (id)inputStream;	// IMP=0x000000000029a049
- (long long)dataLength;	// IMP=0x000000000029a02c
- (_Bool)isReadable;	// IMP=0x000000000029a024
- (id)data;	// IMP=0x000000000029a013
- (void)dealloc;	// IMP=0x0000000000299fd1
- (id)initWithData:(id)arg1;	// IMP=0x0000000000299f73

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class OISFUCryptoKey, OISFUDataRepresentation;
@protocol SFUZipArchiveDataRepresentation;

__attribute__((visibility("hidden")))
@interface OISFUZipEntry
{
    OISFUDataRepresentation<SFUZipArchiveDataRepresentation> *mArchiveDataRepresentation;	// 32 = 0x20
    int mCompressionMethod;	// 40 = 0x28
    unsigned long long mCompressedSize;	// 48 = 0x30
    unsigned long long mUncompressedSize;	// 56 = 0x38
    unsigned long long mOffset;	// 64 = 0x40
    unsigned int mCrc;	// 72 = 0x48
    unsigned long long mDataOffset;	// 80 = 0x50
    _Bool mHasDataOffset;	// 88 = 0x58
    unsigned long long mEncodedLength;	// 96 = 0x60
    _Bool mHasEncodedLength;	// 104 = 0x68
    OISFUCryptoKey *mCryptoKey;	// 112 = 0x70
}

- (void)setDataLength:(long long)arg1;	// IMP=0x000000000029e20d
- (void)setCryptoKey:(id)arg1;	// IMP=0x000000000029e1d4
- (void)setCompressionFlags:(unsigned short)arg1;	// IMP=0x000000000029e163
- (void)readZip64ExtraField:(const char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000029e055
- (unsigned int)crc;	// IMP=0x000000000029e045
- (unsigned long long)backingFileDataOffset;	// IMP=0x000000000029df7d
- (id)backingFilePath;	// IMP=0x000000000029dead
- (_Bool)isBackedByFile;	// IMP=0x000000000029de7c
- (_Bool)isEncrypted;	// IMP=0x000000000029de67
- (_Bool)isCompressed;	// IMP=0x000000000029de53
- (void)copyToFile:(id)arg1;	// IMP=0x000000000029dd28
- (id)data;	// IMP=0x000000000029dc0e
- (id)inputStream;	// IMP=0x000000000029d947
- (long long)encodedLength;	// IMP=0x000000000029d935
- (long long)dataLength;	// IMP=0x000000000029d924
- (_Bool)isReadable;	// IMP=0x000000000029d8de
- (void)dealloc;	// IMP=0x000000000029d886
- (id)initWithDataRepresentation:(id)arg1 compressionMethod:(int)arg2 compressedSize:(unsigned long long)arg3 uncompressedSize:(unsigned long long)arg4 offset:(unsigned long long)arg5 crc:(unsigned int)arg6;	// IMP=0x000000000029d7f4
- (id)initFromCentralFileHeader:(const char *)arg1 dataRepresentation:(id)arg2;	// IMP=0x000000000029d6d4
- (unsigned long long)calculateEncodedLength;	// IMP=0x000000000029e438
- (unsigned long long)dataOffset;	// IMP=0x000000000029e2d5

@end

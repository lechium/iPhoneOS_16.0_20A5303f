//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface EBReader
{
    NSString *mTemporaryDirectory;	// 72 = 0x48
    struct XlObjectFactory *mXlObjectFactory;	// 80 = 0x50
    _Bool mUseStringOptimization;	// 88 = 0x58
    _Bool mIsFileStructuredStorage;	// 89 = 0x59
    const void *mBuffer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x000000000039ef39
@property(nonatomic) _Bool isFileStructuredStorage; // @synthesize isFileStructuredStorage=mIsFileStructuredStorage;
@property(nonatomic) _Bool useStringOptimization; // @synthesize useStringOptimization=mUseStringOptimization;
@property(retain, nonatomic) NSString *temporaryDirectory; // @synthesize temporaryDirectory=mTemporaryDirectory;
@property(readonly, nonatomic) void *xlReader;
- (struct OCCBinaryStreamer *)allocBinaryStreamerWithCryptoKey:(struct OCCCryptoKey *)arg1 baseOutputFilenameInUTF8:(const char *)arg2;	// IMP=0x000000000039ee91
- (struct OCCEncryptionInfoReader *)encryptionInfoReader;	// IMP=0x000000000010eab3
- (id)read;	// IMP=0x000000000010ec6b
- (_Bool)start;	// IMP=0x000000000010e2cd
- (void)dealloc;	// IMP=0x0000000000136486
- (id)initWithCancelDelegate:(id)arg1;	// IMP=0x000000000039ed70

@end


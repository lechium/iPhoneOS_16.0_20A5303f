//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface APCryptor : NSObject
{
    _Bool _verbose;	// 8 = 0x8
    int _status;	// 12 = 0xc
    NSData *_initializationVector;	// 16 = 0x10
    struct _CCCryptor *_cryptor;	// 24 = 0x18
    unsigned long long _nextOffset;	// 32 = 0x20
}

+ (unsigned int)predictedEncodedLength:(unsigned int)arg1;	// IMP=0x00200000000244ff
+ (id)constructAKey;	// IMP=0x00100000000243f5
+ (id)_keyFromSeed:(id)arg1;	// IMP=0x001000000002429d
+ (void)removeSeed;	// IMP=0x001000000002427b
+ (id)fetchSeed;	// IMP=0x00100000000240ae
+ (void)storeSeed:(id)arg1;	// IMP=0x0010000000023ea2
+ (id)constructSeed;	// IMP=0x0010000000023e5a
+ (void)setEncryptionKey:(id)arg1;	// IMP=0x00100000000235fb
+ (id)encryptionKey;	// IMP=0x0010000000023566
- (void).cxx_destruct;	// IMP=0x0020000000024558
@property(nonatomic) _Bool verbose; // @synthesize verbose=_verbose;
@property(nonatomic) unsigned long long nextOffset; // @synthesize nextOffset=_nextOffset;
@property(nonatomic) struct _CCCryptor *cryptor; // @synthesize cryptor=_cryptor;
@property(nonatomic) int status; // @synthesize status=_status;
@property(copy, nonatomic) NSData *initializationVector; // @synthesize initializationVector=_initializationVector;
- (id)constructIV;	// IMP=0x0010000000024487
- (id)cryptFinal;	// IMP=0x0010000000023dbb
- (id)cryptChunkOfData:(id)arg1;	// IMP=0x0010000000023b30
- (id)_cryptData:(id)arg1;	// IMP=0x00100000000239a6
- (id)decryptData:(id)arg1;	// IMP=0x0010000000023994
- (id)encryptData:(id)arg1;	// IMP=0x00100000000238ba
- (void)dealloc;	// IMP=0x00100000000237d5
- (void)_commonInitForOperation:(unsigned int)arg1;	// IMP=0x0010000000023708
- (id)initForDecodingWithInitializationVector:(id)arg1;	// IMP=0x0010000000023688
- (id)initForEncoding;	// IMP=0x001000000002360f

@end


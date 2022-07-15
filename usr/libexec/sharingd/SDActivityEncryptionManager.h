//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary, NSString, SDActivityEncryptionKey;

@interface SDActivityEncryptionManager : NSObject
{
    NSMutableDictionary *_deviceIdentifierToDecryptionKey;	// 8 = 0x8
    SDActivityEncryptionKey *_encryptionKey;	// 16 = 0x10
    NSData *_wrappingKey;	// 24 = 0x18
    _Bool _shouldRefreshWrappingKey;	// 32 = 0x20
}

+ (id)sharedEncryptionManager;	// IMP=0x0040000000165dfc
- (void).cxx_destruct;	// IMP=0x0020000000168737
- (id)baseDictDecryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x00100000001685e0
- (id)baseDictEncryptionKey;	// IMP=0x00100000001684fd
- (id)baseDictWrappingKey;	// IMP=0x001000000016841a
- (id)baseDict;	// IMP=0x00100000001683aa
- (_Bool)saveDecryptionKeyDataRepresentation:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x000000000016832a
- (id)loadDecryptionKeyDataRepresentationForDeviceIdentifier:(id)arg1;	// IMP=0x00100000001682cb
- (_Bool)saveEncryptionKeyDataRepresentation:(id)arg1;	// IMP=0x001000000016825c
- (id)loadEncryptionKeyDataRepresentation;	// IMP=0x00100000001681fd
- (_Bool)saveKeyDataRepresentation:(id)arg1 withBaseDict:(id)arg2;	// IMP=0x0010000000167f39
- (id)loadKeyDataRepresentationWithBaseDict:(id)arg1;	// IMP=0x0010000000167e8a
- (void)testWrappingKeychainItem;	// IMP=0x0010000000167e84
- (id)loadWrappingKeyData;	// IMP=0x0010000000167d24
- (id)allKeys;	// IMP=0x0010000000167839
- (_Bool)deleteAllEncryptionAndDecryptionKeys;	// IMP=0x00100000001676e5
- (id)newDecryptionKeyFromDataRepresentation:(id)arg1;	// IMP=0x0010000000167274
- (id)unwrappedDataRepresentationForKey:(id)arg1;	// IMP=0x001000000016716c
@property(readonly, nonatomic) NSData *dataRepresentationForCurrentEncryptionKey;
- (id)cachedDecryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x0010000000166d68
- (id)decryptionKeyForDeviceIdentifier:(id)arg1;	// IMP=0x0010000000166c77
- (void)setDecryptionKey:(id)arg1 forDeviceIdentifier:(id)arg2;	// IMP=0x0010000000166a77
- (void)getTagAndCounterWhileEncryptingBytesInPlace:(unsigned char [10])arg1 forAdvertisementWithVersion:(unsigned char)arg2 handler:(CDUnknownBlockType)arg3;	// IMP=0x00100000001667f5
- (void)bumpEncryptionKeyCounterValue;	// IMP=0x0010000000166632
@property(readonly, nonatomic) SDActivityEncryptionKey *encryptionKey;
- (void)generateNewEncryptionKey;	// IMP=0x0010000000166260
- (void)resetStateRequested:(id)arg1;	// IMP=0x001000000016624e
- (void)removeObservers;	// IMP=0x00100000001661fb
- (void)addObservers;	// IMP=0x0010000000166194
@property(readonly) NSString *state;
- (void)dealloc;	// IMP=0x0010000000165f07
- (id)init;	// IMP=0x0010000000165e9d

@end

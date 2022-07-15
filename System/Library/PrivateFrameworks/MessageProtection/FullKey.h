//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol P256PrivateKeyProtocol;

__attribute__((visibility("hidden")))
@interface FullKey : NSObject
{
    int _keyStore;	// 8 = 0x8
    id <P256PrivateKeyProtocol> _key;	// 16 = 0x10
    NSString *_keychainTag;	// 24 = 0x18
}

+ (id)generateNewKeyWithAccess:(id)arg1 forceNoSEP:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0060000000004625
+ (id)generateNewKeyWithAccess:(id)arg1 error:(id *)arg2;	// IMP=0x006000000000460e
- (void).cxx_destruct;	// IMP=0x0000000000004f9d
@property(retain) NSString *keychainTag; // @synthesize keychainTag=_keychainTag;
@property(readonly) int keyStore; // @synthesize keyStore=_keyStore;
@property(readonly) id <P256PrivateKeyProtocol> key; // @synthesize key=_key;
- (id)protobuffer;	// IMP=0x0000000000004e8d
- (id)description;	// IMP=0x0000000000004dd9
- (id)keyIdentifier;	// IMP=0x0000000000004d23
- (id)initWithKeychainTag:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004a9a
- (id)initWithCTKTokenOID:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004a07
- (id)initWithProtobufferData:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000004860
- (id)initWithKey:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000046da

@end

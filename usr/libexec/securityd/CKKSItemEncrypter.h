//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKKSItemEncrypter : NSObject
{
}

+ (id)decryptDictionary:(id)arg1 key:(id)arg2 authenticatedData:(id)arg3 error:(id *)arg4;	// IMP=0x0040000000066761
+ (id)encryptDictionary:(id)arg1 key:(id)arg2 authenticatedData:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000066608
+ (id)decryptItemToDictionary:(id)arg1 keyCache:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000663b7
+ (id)decryptItemToDictionaryVersion1or2:(id)arg1 keyCache:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006606a
+ (id)decryptItemToDictionaryVersionNone:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000065ff7
+ (id)encryptCKKSItem:(id)arg1 dataDictionary:(id)arg2 updatingCKKSItem:(id)arg3 parentkey:(id)arg4 keyCache:(id)arg5 error:(id *)arg6;	// IMP=0x0010000000065ac9
+ (id)removePaddingFromData:(id)arg1;	// IMP=0x0010000000065a31
+ (id)padData:(id)arg1 blockSize:(unsigned long long)arg2 additionalBlock:(_Bool)arg3;	// IMP=0x00100000000658d5

@end

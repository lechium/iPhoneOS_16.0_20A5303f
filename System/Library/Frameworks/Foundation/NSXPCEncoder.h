//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSXPCCoder.h"

@class NSObject, NSXPCConnection;
@protocol NSXPCEncoderDelegate, OS_xpc_object;

__attribute__((visibility("hidden")))
@interface NSXPCEncoder : NSXPCCoder
{
    NSObject<OS_xpc_object> *_oolObjects;	// 16 = 0x10
    NSXPCConnection *_connection;	// 24 = 0x18
    struct __CFDictionary *_replacedByDelegateObjects;	// 32 = 0x20
    id <NSXPCEncoderDelegate> _delegate;	// 40 = 0x28
    struct {
        unsigned long long collectionSizeOffset[1024];
        long long collectionRecursionIndex;
        unsigned long long dataLen;
        unsigned long long dataSize;
        char *data;
        struct __CFDictionary *_objectReferences;
        struct __CFDictionary *_stringReferences;
        struct __CFDictionary *_asciiReferences;
        _Bool isVM;
        _Bool isStack;
    } _encoder;	// 48 = 0x30
    unsigned long long _genericIndex;	// 8304 = 0x2070
    _Bool _topLevelDictionary;	// 8312 = 0x2078
    _Bool _finished;	// 8313 = 0x2079
    _Bool _askForReplacement;	// 8314 = 0x207a
}

@property id <NSXPCEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property NSXPCConnection *_connection; // @synthesize _connection;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000670cd5
- (void)encodeXPCObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000670c83
- (unsigned long long)_addOOLXPCObject:(id)arg1;	// IMP=0x0000000000670bed
- (void)_encodeCString:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0000000000670ba6
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;	// IMP=0x0000000000670ad4
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;	// IMP=0x0000000000670aa1
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;	// IMP=0x0000000000670a69
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;	// IMP=0x0000000000670a31
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;	// IMP=0x00000000006709fe
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;	// IMP=0x00000000006709cb
- (void)encodeInt:(int)arg1 forKey:(id)arg2;	// IMP=0x0000000000670998
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;	// IMP=0x0000000000670965
- (void)_encodeArrayOfObjects:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000067082c
- (void)_encodeInvocationObjectArgumentsOnly:(id *)arg1 count:(unsigned long long)arg2 typeString:(const char *)arg3 selector:(SEL)arg4 isReply:(_Bool)arg5 into:(id)arg6;	// IMP=0x00000000006706aa
- (void)_encodeInvocation:(id)arg1 isReply:(_Bool)arg2 into:(id)arg3;	// IMP=0x00000000006704ee
- (id)_newRootXPCObject;	// IMP=0x0000000000670420
- (void)_startTopLevelDictionary;	// IMP=0x0000000000670404
- (void)_encodeUnkeyedObject:(id)arg1;	// IMP=0x00000000006703b7
- (void)encodeObject:(id)arg1 forKey:(id)arg2;	// IMP=0x0000000000670344
- (void)_encodeObject:(id)arg1;	// IMP=0x0000000000670092
- (void)_checkObject:(id)arg1;	// IMP=0x000000000066ff03
- (id)_replaceObject:(id)arg1;	// IMP=0x000000000066fd70
- (void)encodeObject:(id)arg1;	// IMP=0x000000000066fd5c
- (void)encodeDataObject:(id)arg1;	// IMP=0x000000000066fd4a
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;	// IMP=0x000000000066fcf5
- (_Bool)allowsKeyedCoding;	// IMP=0x000000000066fced
- (id)debugDescription;	// IMP=0x000000000066fc9b
- (void)dealloc;	// IMP=0x000000000066fbf9
- (id)init;	// IMP=0x000000000066fbe3
- (id)initWithStackSpace:(char *)arg1 size:(unsigned long long)arg2;	// IMP=0x000000000066fb61
- (id)connection;	// IMP=0x000000000066fb43

@end


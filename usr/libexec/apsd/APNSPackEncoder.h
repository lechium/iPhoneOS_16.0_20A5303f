//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol APNSPackEncoderDelegate;

@interface APNSPackEncoder : NSObject
{
    id <APNSPackEncoderDelegate> _delegate;	// 8 = 0x8
    void *_encoder;	// 16 = 0x10
    void *_builder;	// 24 = 0x18
    unsigned long long _maxTableSize;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000006960b
@property(nonatomic) unsigned long long maxTableSize; // @synthesize maxTableSize=_maxTableSize;
@property(nonatomic) __weak id <APNSPackEncoderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) void *builder; // @synthesize builder=_builder;
@property(nonatomic) void *encoder; // @synthesize encoder=_encoder;
- (void)reset;	// IMP=0x001000000006959a
- (id)metrics;	// IMP=0x0010000000069564
- (id)valueTable;	// IMP=0x00100000000693e9
- (id)keyTable;	// IMP=0x001000000006926e
- (id)errorMessage;	// IMP=0x0010000000069231
- (int)errorCode;	// IMP=0x0010000000069223
- (_Bool)hasError;	// IMP=0x0010000000069215
- (id)copyMessage;	// IMP=0x00100000000690a7
- (void)addBinaryPropertyListWithAttributeId:(unsigned char)arg1 data:(id)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000069025
- (void)addBooleanWithAttributeId:(unsigned char)arg1 value:(_Bool)arg2;	// IMP=0x0010000000069013
- (void)addInt64WithAttributeId:(unsigned char)arg1 number:(unsigned long long)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000068ffd
- (void)addInt32WithAttributeId:(unsigned char)arg1 number:(unsigned int)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000068fe8
- (void)addInt16WithAttributeId:(unsigned char)arg1 number:(unsigned short)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000068fd0
- (void)addInt8WithAttributeId:(unsigned char)arg1 number:(unsigned char)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000068fb8
- (void)addStringWithAttributId:(unsigned char)arg1 string:(id)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000068f0e
- (void)addDataWithAttributeId:(unsigned char)arg1 data:(id)arg2 isIndexable:(_Bool)arg3;	// IMP=0x0010000000068e7b
- (void)setCommand:(unsigned char)arg1;	// IMP=0x0010000000068e25
- (void)dealloc;	// IMP=0x0010000000068db6
- (id)initWithMaxTableSize:(unsigned long long)arg1;	// IMP=0x0010000000068ab0

@end

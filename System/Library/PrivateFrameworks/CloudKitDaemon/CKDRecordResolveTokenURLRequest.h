//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class CKDProtocolTranslator, NSArray, NSMutableDictionary, NSSet;

@interface CKDRecordResolveTokenURLRequest : CKDURLRequest
{
    _Bool _shouldFetchRootRecord;	// 8 = 0x8
    NSSet *_rootRecordDesiredKeySet;	// 16 = 0x10
    CDUnknownBlockType _tokenResolveBlock;	// 24 = 0x18
    NSArray *_lookupInfos;	// 32 = 0x20
    NSMutableDictionary *_lookupInfosByRequestID;	// 40 = 0x28
    CKDProtocolTranslator *_privateDBTranslator;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000ff5e7
@property(retain, nonatomic) CKDProtocolTranslator *privateDBTranslator; // @synthesize privateDBTranslator=_privateDBTranslator;
@property(retain, nonatomic) NSMutableDictionary *lookupInfosByRequestID; // @synthesize lookupInfosByRequestID=_lookupInfosByRequestID;
@property(retain, nonatomic) NSArray *lookupInfos; // @synthesize lookupInfos=_lookupInfos;
@property(copy, nonatomic) CDUnknownBlockType tokenResolveBlock; // @synthesize tokenResolveBlock=_tokenResolveBlock;
@property(nonatomic) _Bool shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;
@property(retain, nonatomic) NSSet *rootRecordDesiredKeySet; // @synthesize rootRecordDesiredKeySet=_rootRecordDesiredKeySet;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x00000000000ff3d1
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x00000000000fd56a
- (id)generateRequestOperations;	// IMP=0x00000000000fd20d
- (_Bool)requiresCKAnonymousUserIDs;	// IMP=0x00000000000fd205
- (_Bool)sendRequestAnonymously;	// IMP=0x00000000000fd16a
- (long long)databaseScope;	// IMP=0x00000000000fd15f
- (id)sourceApplicationSecondaryIdentifier;	// IMP=0x00000000000fd157
- (id)applicationBundleIdentifierForNetworkAttribution;	// IMP=0x00000000000fd14a
- (id)applicationBundleIdentifierForContainerAccess;	// IMP=0x00000000000fd13d
- (id)requestOperationClasses;	// IMP=0x00000000000fd0d1
- (id)initWithOperation:(id)arg1 shortTokenLookupInfos:(id)arg2;	// IMP=0x00000000000fd038

@end


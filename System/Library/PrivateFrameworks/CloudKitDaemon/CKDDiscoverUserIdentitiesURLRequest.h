//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSMutableDictionary;

@interface CKDDiscoverUserIdentitiesURLRequest : CKDURLRequest
{
    _Bool _wantsProtectionInfo;	// 8 = 0x8
    CDUnknownBlockType _progressBlock;	// 16 = 0x10
    NSArray *_infosToDiscover;	// 24 = 0x18
    NSMutableDictionary *_submittedInfos;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000023d509
@property(retain, nonatomic) NSMutableDictionary *submittedInfos; // @synthesize submittedInfos=_submittedInfos;
@property(retain, nonatomic) NSArray *infosToDiscover; // @synthesize infosToDiscover=_infosToDiscover;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) _Bool wantsProtectionInfo; // @synthesize wantsProtectionInfo=_wantsProtectionInfo;
- (void)requestDidParseNodeFailure:(id)arg1;	// IMP=0x000000000023d235
- (id)requestDidParseProtobufObject:(id)arg1;	// IMP=0x000000000023c584
- (id)generateRequestOperations;	// IMP=0x000000000023c334
- (id)requestOperationClasses;	// IMP=0x000000000023c2c8
- (long long)databaseScope;	// IMP=0x000000000023c2bd
- (id)initWithOperation:(id)arg1 lookupInfos:(id)arg2;	// IMP=0x000000000023c224

@end


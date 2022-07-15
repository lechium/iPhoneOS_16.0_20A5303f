//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class AppReceiptOperationResult, AppReceiptRefreshOperationOptions, NSArray;

@interface AppReceiptRefreshOperation : ISOperation
{
    NSArray *_familyAccountIDs;	// 96 = 0x60
    AppReceiptOperationResult *_operationResult;	// 104 = 0x68
    AppReceiptRefreshOperationOptions *_options;	// 112 = 0x70
    CDUnknownBlockType _resultsBlock;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000010c7e4
- (_Bool)_refreshReceiptForApplication:(id)arg1 withOptions:(id)arg2 vppState:(long long)arg3 error:(id *)arg4;	// IMP=0x001000000010c07d
- (id)_postBodyDataWithApplication:(id)arg1 options:(id)arg2 vppState:(long long)arg3 error:(id *)arg4;	// IMP=0x001000000010b2e3
- (id)_optionsWithVPPState:(long long)arg1;	// IMP=0x001000000010b21e
- (_Bool)_preformMigrationCheckForApp:(id)arg1;	// IMP=0x001000000010b216
- (_Bool)_handleResponse:(id)arg1 forApp:(id)arg2 options:(id)arg3;	// IMP=0x001000000010a01f
- (id)receiptExpirationDateForProxy:(id)arg1;	// IMP=0x0010000000109f8a
- (void)setResultsBlock:(CDUnknownBlockType)arg1;	// IMP=0x0010000000109f13
- (void)run;	// IMP=0x0010000000109745
- (id)initWithOptions:(id)arg1;	// IMP=0x001000000010965f

@end

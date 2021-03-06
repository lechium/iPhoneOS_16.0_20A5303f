//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@interface RefreshMicroPaymentDownloadOperation : ISOperation
{
    long long _downloadID;	// 96 = 0x60
}

- (_Bool)_updateDownload:(id)arg1 withDictionary:(id)arg2;	// IMP=0x00200000001ab956
- (_Bool)_refreshDownload:(id)arg1 error:(id *)arg2;	// IMP=0x00100000001ab1b6
- (id)_newRequestWithIdentity:(id)arg1 transactionID:(id)arg2;	// IMP=0x00100000001ab0fe
- (id)_newIdentityForPayment:(id)arg1;	// IMP=0x00100000001aaf3a
- (void)run;	// IMP=0x00100000001aab4c
@property(readonly) long long downloadIdentifier;
- (id)initWithDownloadIdentifier:(long long)arg1;	// IMP=0x00100000001aaaf7

@end


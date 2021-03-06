//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface DownloadHandle : NSObject
{
    long long _downloadID;	// 8 = 0x8
    long long _transactionID;	// 16 = 0x10
}

@property(readonly, nonatomic) long long transactionID; // @synthesize transactionID=_transactionID;
- (long long);	// IMP=0x00100000000e7530
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000000e74c7
- (unsigned long long)hash;	// IMP=0x00100000000e74b9
- (id)description;	// IMP=0x00100000000e748c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000e7481
- (id)initWithTransactionIdentifier:(long long)arg1 downloadIdentifier:(long long)arg2;	// IMP=0x00100000000e7439
- (id)init;	// IMP=0x00100000000e7423

// Remaining properties
@property(readonly, nonatomic) long long downloadID; // @synthesize downloadID=_downloadID;

@end


//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, OTCliqueStatusWrapper;

@protocol CKKSOctagonStatusMemoizer
@property(readonly) NSString *octagonPeerID;
@property(readonly) OTCliqueStatusWrapper *octagonStatus;
- (void)setHSA2iCloudAccountStatus:(long long)arg1;
- (void)triggerOctagonStatusFetch;
@end

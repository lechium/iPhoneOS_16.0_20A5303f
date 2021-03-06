//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPStreamingAssetIdentifier, CKDPStreamingAssetRetrieveAssetResponse, CKDPStreamingAssetSaveAssetRequest, CKDPStreamingAssetSaveAssetResponse;

@interface CKDPStreamingAsset : PBCodable
{
    CKDPStreamingAssetIdentifier *_assetId;	// 8 = 0x8
    CKDPStreamingAssetRetrieveAssetResponse *_retrieveAssetResponse;	// 16 = 0x10
    CKDPStreamingAssetSaveAssetRequest *_saveAssetRequest;	// 24 = 0x18
    CKDPStreamingAssetSaveAssetResponse *_saveAssetResponse;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000010c0c8
@property(retain, nonatomic) CKDPStreamingAssetRetrieveAssetResponse *retrieveAssetResponse; // @synthesize retrieveAssetResponse=_retrieveAssetResponse;
@property(retain, nonatomic) CKDPStreamingAssetSaveAssetResponse *saveAssetResponse; // @synthesize saveAssetResponse=_saveAssetResponse;
@property(retain, nonatomic) CKDPStreamingAssetSaveAssetRequest *saveAssetRequest; // @synthesize saveAssetRequest=_saveAssetRequest;
@property(retain, nonatomic) CKDPStreamingAssetIdentifier *assetId; // @synthesize assetId=_assetId;
- (void)mergeFrom:(id)arg1;	// IMP=0x000000000010bf29
- (unsigned long long)hash;	// IMP=0x000000000010bea5
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000010bd79
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000010bc8f
- (void)copyTo:(id)arg1;	// IMP=0x000000000010bbec
- (void)writeTo:(id)arg1;	// IMP=0x000000000010bb55
- (_Bool)readFrom:(id)arg1;	// IMP=0x000000000010bb48
- (id)dictionaryRepresentation;	// IMP=0x000000000010b70f
- (id)description;	// IMP=0x000000000010b660
@property(readonly, nonatomic) _Bool hasRetrieveAssetResponse;
@property(readonly, nonatomic) _Bool hasSaveAssetResponse;
@property(readonly, nonatomic) _Bool hasSaveAssetRequest;
@property(readonly, nonatomic) _Bool hasAssetId;

@end


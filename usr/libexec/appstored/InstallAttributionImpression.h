//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface InstallAttributionImpression : NSObject
{
    NSNumber *_appAdamId;	// 8 = 0x8
    NSString *_adNetworkId;	// 16 = 0x10
    long long _campaignId;	// 24 = 0x18
    NSString *_impressionId;	// 32 = 0x20
    NSNumber *_sourceAppAdamId;	// 40 = 0x28
    NSNumber *_timestamp;	// 48 = 0x30
    NSNumber *_localTimestamp;	// 56 = 0x38
    NSString *_attributionSignature;	// 64 = 0x40
    NSString *_version;	// 72 = 0x48
    NSString *_sourceAppBundleId;	// 80 = 0x50
    long long _fidelityType;	// 88 = 0x58
    NSString *_processName;	// 96 = 0x60
}

+ (void)reportImpressionFailedForAdNetworkId:(id)arg1 impressionType:(long long)arg2 version:(id)arg3 issueType:(long long)arg4;	// IMP=0x0040000000095b4c
+ (void)reportImpressionCreatedForAdNetworkId:(id)arg1 impressionType:(long long)arg2 version:(id)arg3;	// IMP=0x0010000000095a59
+ (void)reportImpressionErrorForAdNetworkId:(id)arg1 impressionType:(long long)arg2 version:(id)arg3 error:(id)arg4;	// IMP=0x00100000000958d6
+ (id)shouldAllowImpressionFromSourceAppBundleId:(id)arg1 andSourceAppAdamId:(id)arg2 forVersion:(id)arg3 adNetworkId:(id)arg4;	// IMP=0x0010000000095135
- (void).cxx_destruct;	// IMP=0x0020000000095db7
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) long long fidelityType; // @synthesize fidelityType=_fidelityType;
@property(retain, nonatomic) NSString *sourceAppBundleId; // @synthesize sourceAppBundleId=_sourceAppBundleId;
@property(retain, nonatomic) NSString *version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *attributionSignature; // @synthesize attributionSignature=_attributionSignature;
@property(retain, nonatomic) NSNumber *localTimestamp; // @synthesize localTimestamp=_localTimestamp;
@property(retain, nonatomic) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSNumber *sourceAppAdamId; // @synthesize sourceAppAdamId=_sourceAppAdamId;
// Error: Property attributes should begin with the type ('T') attribute, property name: impressionId
// Property attributes: (null)

@property(nonatomic) long long campaignId; // @synthesize campaignId=_campaignId;
@property(retain, nonatomic) NSString *adNetworkId; // @synthesize adNetworkId=_adNetworkId;
@property(retain, nonatomic) NSNumber *appAdamId; // @synthesize appAdamId=_appAdamId;
- (long long)impressionTypeForAnalytics;	// IMP=0x00100000000958b8
- (id)checkForUnexpectedInput;	// IMP=0x0010000000094ebb
- (_Bool)hasRequisiteValues;	// IMP=0x0010000000094b3d

@end


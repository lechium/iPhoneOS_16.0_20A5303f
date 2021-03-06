//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class NSString;

@interface TFApplication : PBCodable
{
    unsigned long long _applicationAdamId;	// 8 = 0x8
    unsigned long long _uptimeMillis;	// 16 = 0x10
    NSString *_bundleId;	// 24 = 0x18
    NSString *_cfBundleShortVersionString;	// 32 = 0x20
    NSString *_cfBundleVersion;	// 40 = 0x28
    NSString *_ciBuildGroup;	// 48 = 0x30
    NSString *_gitBranch;	// 56 = 0x38
    int _platform;	// 64 = 0x40
    _Bool _isAppClip;	// 68 = 0x44
    struct {
        unsigned int applicationAdamId:1;
        unsigned int uptimeMillis:1;
        unsigned int platform:1;
        unsigned int isAppClip:1;
    } _has;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000002a0c83
@property(retain, nonatomic) NSString *ciBuildGroup; // @synthesize ciBuildGroup=_ciBuildGroup;
@property(nonatomic) _Bool isAppClip; // @synthesize isAppClip=_isAppClip;
@property(nonatomic) unsigned long long uptimeMillis; // @synthesize uptimeMillis=_uptimeMillis;
@property(retain, nonatomic) NSString *gitBranch; // @synthesize gitBranch=_gitBranch;
@property(retain, nonatomic) NSString *cfBundleVersion; // @synthesize cfBundleVersion=_cfBundleVersion;
@property(retain, nonatomic) NSString *cfBundleShortVersionString; // @synthesize cfBundleShortVersionString=_cfBundleShortVersionString;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(nonatomic) unsigned long long applicationAdamId; // @synthesize applicationAdamId=_applicationAdamId;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000002a0a5b
- (unsigned long long)hash;	// IMP=0x00100000002a0903
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002a06d5
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002a0545
- (void)copyTo:(id)arg1;	// IMP=0x00100000002a0408
- (void)writeTo:(id)arg1;	// IMP=0x00100000002a02c9
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000002a02bc
- (id)dictionaryRepresentation;	// IMP=0x001000000029fbdc
- (id)description;	// IMP=0x001000000029fb2d
@property(readonly, nonatomic) _Bool hasCiBuildGroup;
@property(nonatomic) _Bool hasIsAppClip;
@property(nonatomic) _Bool hasUptimeMillis;
@property(readonly, nonatomic) _Bool hasGitBranch;
- (int)StringAsPlatform:(id)arg1;	// IMP=0x001000000029f9bf
- (id)platformAsString:(int)arg1;	// IMP=0x001000000029f976
@property(nonatomic) _Bool hasPlatform;
@property(nonatomic) int platform; // @synthesize platform=_platform;
@property(readonly, nonatomic) _Bool hasCfBundleVersion;
@property(readonly, nonatomic) _Bool hasCfBundleShortVersionString;
@property(readonly, nonatomic) _Bool hasBundleId;
@property(nonatomic) _Bool hasApplicationAdamId;

@end


//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBRequest.h>

@class TFAppleWatch, TFApplication, TFDevice, TFFeedback;

@interface TFUploadFeedbackRequest : PBRequest
{
    unsigned long long _desiredTTLMillis;	// 8 = 0x8
    unsigned long long _dsid;	// 16 = 0x10
    unsigned long long _posixTimestampMillis;	// 24 = 0x18
    TFAppleWatch *_appleWatch;	// 32 = 0x20
    TFApplication *_application;	// 40 = 0x28
    TFDevice *_device;	// 48 = 0x30
    TFFeedback *_feedback;	// 56 = 0x38
    struct {
        unsigned int desiredTTLMillis:1;
        unsigned int dsid:1;
        unsigned int posixTimestampMillis:1;
    } _has;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00200000001c0527
@property(nonatomic) unsigned long long desiredTTLMillis; // @synthesize desiredTTLMillis=_desiredTTLMillis;
@property(nonatomic) unsigned long long posixTimestampMillis; // @synthesize posixTimestampMillis=_posixTimestampMillis;
@property(retain, nonatomic) TFAppleWatch *appleWatch; // @synthesize appleWatch=_appleWatch;
@property(retain, nonatomic) TFDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) TFApplication *application; // @synthesize application=_application;
@property(retain, nonatomic) TFFeedback *feedback; // @synthesize feedback=_feedback;
@property(nonatomic) unsigned long long dsid; // @synthesize dsid=_dsid;
- (void)mergeFrom:(id)arg1;	// IMP=0x00100000001c02f2
- (unsigned long long)hash;	// IMP=0x00100000001c01f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001c0047
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000001bfefc
- (void)copyTo:(id)arg1;	// IMP=0x00100000001bfdf6
- (void)writeTo:(id)arg1;	// IMP=0x00100000001bfcf0
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001bf871
- (id)dictionaryRepresentation;	// IMP=0x00100000001bf5f3
- (id)description;	// IMP=0x00100000001bf544
@property(nonatomic) _Bool hasDesiredTTLMillis;
@property(nonatomic) _Bool hasPosixTimestampMillis;
@property(readonly, nonatomic) _Bool hasAppleWatch;
@property(readonly, nonatomic) _Bool hasDevice;
@property(readonly, nonatomic) _Bool hasApplication;
@property(readonly, nonatomic) _Bool hasFeedback;
@property(nonatomic) _Bool hasDsid;

@end
